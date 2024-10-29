
# Implements a registration from using a select menu, validatng sports server side

from flask import Flask, render_template, request

# Program 7

app = Flask(__name__)

SPORTS = ["Basketball", "Soccer", "Ultimate Fribsbee"]

@app.route("/")
def index():
    return render_template("index.html", sports = SPORTS)

@app.route('/register', methods=["POST"])
def register():
    
    # Validate submission
    if not request.form.get("name") or request.form.get("sport") not in SPORTS:
        return render_template("failure.html")

    # Confirm Registration
    return render_template("success.html")

  

