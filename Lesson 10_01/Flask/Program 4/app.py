
# Switches to POST

from flask import Flask, render_template, request

# Program 4

app = Flask(__name__)


@app.route('/')
def index():
    return render_template("index.html")

@app.route('/greet', methods=["POST"])
def greet():
    return render_template("greet.html", name=request.form.get("name", "world"))
                                


# Notice that POST is added to the /greet route, and that we use request.form.get rather than request.args.get.
# This tells the server to look deeper in the virtual envelope and not reveal the items in post in the URL.





    