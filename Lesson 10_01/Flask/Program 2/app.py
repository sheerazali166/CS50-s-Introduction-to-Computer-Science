
# Add a form, second route

from flask import Flask, render_template, request

# Program 2

# Notice that a form is now created that takes the user’s name and then passes it off to a route called /greet.
# Further, we can change app.py as follows:

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/greet")
def greet():
    return render_template("greet.html", name = request.args.get("name", "world"))


# Notice that the default path will display a form for the user to input their name. The /greet route will pass the
# name to that web page.

# To finalize this implementation, you will need another template for greet.html in the templates folder as follows:

# <!DOCTYPE html>

# <html lang="en">
    # <head>
        # <meta name="viewport" content="initial-scale=1, width=device-width">
        # <title>hello</title>
    # </head>
    # <body>
        # hello, {{ name }}
    # </body>
# </html>


# Notice that this route will now render the greeting to the user, followed by their name.




