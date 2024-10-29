# Using single route 

from flask import Flask, render_template, request

# Program 5

# Still, this code can be advanced further by utilizing a single route for both get and post. To do this, modify app.py as follows:

app = Flask(__name__)



@app.route("/", methods=["GET", "POST"])

def index():
    if request.method == "POST":
        return render_template("greet.html", name=request.form.get("name", "world"))
    return render_template("index.html")

# Notice that both get and post are done in a single routing. However, request.method is utilized to properly route based upon
#  the type of routing requested by the user.

# Notice that the form action is changed.




 

