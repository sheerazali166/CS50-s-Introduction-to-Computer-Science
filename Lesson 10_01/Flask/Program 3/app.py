
# Add a form, second route

from flask import Flask, render_template, request

# Program 3

# Notice that a form is now created that takes the user’s name and then passes it off to a route called /greet.
# Further, we can change app.py as follows:

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/greet")
def greet():
    return render_template("greet.html", name=request.args.get("name", "world"))
