
# Searches for shows using Ajax with JSON

import sqlite3

from flask import Flask, jsonify, render_template, request

# JSON

# JavaScript Object Notation or JSON is text file of dictionaries with keys and values. This is a raw, computer-friendly way to get lots of data.
# JSON is a very useful way of getting back data from the server.
# You can see this in action in the index.html we examined together:

# While the above may be somewhat cryptic, it provides a starting point for you to research JSON on your own to see how it can be implemented
# in your own web applications.

# Further, we examined app.py to see how the JSON response is obtained:

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
        connection.commit()

    else:
        shows = []    
    return jsonify(shows)


# Notice how jsonify is used to convert the result into a readable format acceptible by contemporary web applications.
# You can read more in the JSON documentation.

# Summing Up

# In this lesson, you learned how to utilize Python, SQL, and Flask to create web applications. Specifically, we discussed…

# GET
# POST
# Flask
# Session
# APIs
# AJAX
# JSON

# See you next time for our final lecture!


 