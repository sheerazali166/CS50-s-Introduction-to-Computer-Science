
# Implements a registration form, storing registrants n a SQLite database, wth support for deregistration

from flask import Flask, redirect, render_template, request
import sqlite3

app = Flask(__name__)

def get_connection():
    connection = sqlite3.connect("froshims.db", check_same_thread=False)
    connection.row_factory = sqlite3.Row
    return connection


connection = get_connection()


SPORTS = ["Basketball", "Soccer", "Ultimate Frisbee"]

@app.route("/")
def index():
    return render_template("index.html", sports = SPORTS)

@app.route("/deregister", methods=["POST"])
def deregister():

    # Forget registrant
    id = request.form.get("id")

    if id:
        connection.execute("DELETE FROM registrants WHERE id = ?", id)
        connection.commit()


    return redirect("/registrants")   

@app.route("/register", methods=["POST"])
def register():

    # Validate submission
    name = request.form.get("name")
    sport = request.form.get("sport")

    if not name or sport not in SPORTS:
        return render_template("failure.html")
    
    # Remember registrant
    connection.execute("INSERT INTO registrants (name, sport) VALUES(?, ?)",(name, sport))
    connection.commit()

    

    # Confirm registrantion
    return redirect("/registrants") 


@app.route("/registrants")
def registrants():
    registrants = connection.execute("SELECT * FROM registrants")
    connection.commit()

    return render_template("registrants.html", registrants=registrants)


# Notice that the sqlite3 library is utilized. A route is included for register for the post method. This route will take the name and sport taken
# from the registration form and execute a SQL query to add the name and the sport to the registrants table. The deregister routes to a SQL query
# that will grab the user’s id and utilize that information to deregister this individual.

# You can read more in the Flask documentation.




