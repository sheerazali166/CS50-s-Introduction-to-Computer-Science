
import sqlite3
from flask import Flask, redirect, render_template, request, session 
from flask_session import Session

# Configure app
app = Flask(__name__)

def get_connection():
    connection = sqlite3.connect("store.db", check_same_thread=False)
    connection.row_factory = sqlite3.Row
    return connection

# Connect to database
connection = get_connection()

# Configure Session
app.config["SESSION_PERMANENT"] = False
app.config["SESSION_TYPE"] = "filesystem"

Session(app)

@app.route("/")
def index():
    books = connection.execute("SELECT * FROM books")
    connection.commit()

    return render_template("books.html",books=books)

@app.route("/cart", methods=["GET", "POST"])
def cart():

    # Ensure cart exists 
    if cart not in session:
        session["cart"] = []


    # POST
    if request.method == "POST":
        book_id = request.form.get("id")

        if book_id:
            session["cart"].append(book_id)
        redirect("/cart")

    # GET
    books = connection.execute("SELECT * FROM books WHERE id IN(?)", session["cart"])
    connection.commit()

    return render_template("cart.html", books = books)  


# Notice that cart is implemented using a list. Items can be added to this list using the Add to Cart buttons in books.html. When clicking such a button,
# the post method is invoked, where the id of the item is appended to the cart. When viewing the cart, invoking the get method, SQL is executed to display
# a list of the books in the cart.






