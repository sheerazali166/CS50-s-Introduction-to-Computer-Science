
# Uses request.args.get
from flask import Flask, render_template, request

# Program 1

app = Flask(__name__)

@app.route("/")
def index():
    name = request.args.get("name", "world")
    return render_template("index.html", name = name)


# Notice that this code defines app as the Flask application. Then, it defines the / route of app as returning the
# contents of index.html with the argument of name. By default, the request.args.get function will look for the name
# being provided by the user. If no name is provided, it will default to world.

# @app.route is otherwise known as a decorator.

# Finally, add a final file in the same folder as app.py called requirements.txt that has only a single line of code

# Flask

# Notice only Flask appears in this file.

# You can run this file by typing flask run in the terminal window. If Flask does not run, ensure that your syntax is
# correct in each of the files above. Further, if Flask will not run, make sure your files are organized as follows:

# /templates
     # index.html
# app.py
# requirements.txt

# Once you get it running, you will be prompted to click a link. Once you navigate to that webpage, try adding
# ?name=[Your Name] to the base URL in your browser’s URL bar.


