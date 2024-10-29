
# Implements a registration form usng checkboxs

from flask import Flask, render_template, request


# Program 9

app = Flask(__name__)

SPORTS = ["Basketball", "Soccer", "Ultimate Frisbee"]

@app.route("/")
def index():
    return render_template("index.html", sports = SPORTS)

@app.route("/register", methods=["POST"])
def register():

    # Validate submission
    if not request.form.get("name"):
        return render_template("failure.html")
    for sport in request.form.getlist("sport"):
        if sport not in SPORTS:
            return render_template("failure.html")
        
    # Confirm Registration
    return render_template("success.html")    


# Notice how for sport in allows iteration through all the sports selected by the user.