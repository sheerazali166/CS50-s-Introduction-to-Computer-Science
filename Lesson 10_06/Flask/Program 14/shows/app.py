
# Searches for shows using LIKE 
import sqlite3

from flask import Flask, render_template, request

# Shows

# We looked at a pre-designed program called shows, in app.py:

app = Flask(__name__)

def get_connection():
    connection = sqlite3.connect("shows.db", check_same_thread=False)
    connection.row_factory = sqlite3.Row
    return connection

connection = get_connection()

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/search")
def search():
    shows = connection.execute("SELECT * FROM shows WHERE title LIKE ?",["%" + request.args.get("q") + "%"])
      
    connection.commit()
    return render_template("search.html", shows = shows)


# Notice how the search route allows for a way by which to search for a show. This search looks for titles LIKE the one provided by the user.





