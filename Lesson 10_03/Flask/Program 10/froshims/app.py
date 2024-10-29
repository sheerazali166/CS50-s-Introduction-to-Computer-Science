
# Implements a registration form, storng registrants in a dictionary, with error messages 

from flask import Flask, redirect, render_template, request

# Program 10

app = Flask(__name__)

REGISTRANTS = {}

SPORTS = ["Basketball", "Soccer", "Ultimate Frisbee"]

@app.route("/")
def index():
    return render_template("index.html", sports = SPORTS)

@app.route("/register", methods=["POST"])
def register():

    # Validate name
    name = request.form.get("name")

    if not name:
        return render_template("error.html", message = "Missing name")
    

    # Validate sport
    sport = request.form.get("sport")

    if not sport:
        return render_template("error.html", message = "Missing sport")
    
    if sport not in SPORTS:
        return render_template("error.html", message="Invald sport")
    
    # Remember registrants
    REGISTRANTS[name] = sport

    # Confirm registration
    return redirect("/registrants")

@app.route("/registrants")
def registrants():
    return render_template("registrants.html", registrants = REGISTRANTS)


# Notice that a dictionary called REGISTRANTS is used to log the sport selected by REGISTRANTS[name]. Also, notice that
# registrants=REGISTRANTS passes the dictionary on to this template.

# Notice that {% for name in registrants %}...{% endfor %} will iterate through each of the registrants. Very powerful to be able to iterate
#  on a dynamic web page!

# You now have a web application! However, there are some security flaws! Because everything is client-side, an adversary could change the HTML
# and hack a website. Further, this data will not persist if the server is shut down. Could there be some way we could have our data persist
# even when the server restarts?


