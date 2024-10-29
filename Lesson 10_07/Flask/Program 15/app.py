
# Searches for shows using ajax
import sqlite3
from flask import Flask, render_template, request

# AJAX and APIs

# An application program interface or API is a series of specifications that allow you to interface with another service. For example,
# we could utilize IMDB’s API to interface with their database. We might even integrate APIs for handling specific types of data downloadable
# from a server.

# Improving upon shows, looking at an improvement of app.py, we saw the following:

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
    q = request.args.get("q")

    if q:
        shows = connection.execute("SELECT * FROM shows WHERE title LIKE ? LIMIT 50", ["%" + q + "%"])
    else:
        shows = []

    return render_template("search.html", shows = shows)


# Notice that the search route executes a SQL query.

# Notice an event listener is utilized to dynamically query the server to provide a list that matches the title provided. This will locate the ul tag
# in the HTML and modify the web page accordingly to include the list of the matches.
         



