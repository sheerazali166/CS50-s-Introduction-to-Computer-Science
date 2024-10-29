import os

import sqlite3
from flask import Flask, flash, jsonify, redirect, render_template, request, session

# Configure application
app = Flask(__name__)

# Ensure templates are auto-reloaded
app.config["TEMPLATES_AUTO_RELOAD"] = True

# Configure sqlite3 Library to use SQLite database
def get_connection():
    connection = sqlite3.connect("birthdays.db", check_same_thread=False)
    connection.row_factory = sqlite3.Row
    return connection

connection = get_connection()

@app.after_request
def after_request(response):
    """Ensure responses aren't cached"""
    response.headers["Cache-Control"] = "no-cache, no-store, must-revalidate"
    response.headers["Expires"] = 0
    response.headers["Pragma"] = "no-cache"
    return response


@app.route("/", methods=["GET", "POST"])
def index():
    if request.method == "POST":

        # TODO: Add the user's entry into the database
        name = request.form.get("name")

        if not name:
            return redirect("/")

        month = request.form.get("month")

        if not month:
            return redirect("/")

        day = request.form.get("day")

        if not day:
            return redirect("/")


        connection.execute("INSERT INTO birthdays (name, month, day) VALUES (?, ?, ?)", [name, month, day])
        connection.commit()

        # print(f"Name is {name}")
        # print(f"Month is {month}")
        # print(f"Day is {day}")

        return redirect("/")

    else:

        # TODO: Display the entries in the database on index.html

       
        rows = connection.execute("SELECT * FROM birthdays");
        connection.commit()

        return render_template("index.html", birthdays = rows)


# sqlite3 birthdays.db
# .schema
# SELECT * FROM birthdays;
# SELECT * FROM birthdays;
# INSERT INTO birthdays (name, month, day) VALUES ('Charlie', 2, 1);
# SELECT * FROM birthdays;
# SELECT * FROM birthdays; 
# DELETE FROM birthdays WHERE id = 6; 
#   