
from flask import Flask, render_template, request


# Program 6

# Still, there is a bug still in this code. With our new implementation, when someone types in no name into the form, Hello, is displayed
# without a name. We can improve our code by editing app.py as follows:

app = Flask(__name__)

@app.route("/", methods=["GETS", "POST"])
def index():
    if request.method == "POST":
        return render_template("greet.html", name=request.form.get("name"))
    return render_template("index.html")


# Notice that name=request.form.get("name")) is changed.

# Finally, change greet.html as follows:

# {% extends "layout.html" %}

# {% block body %}

     # hello, {% if name %}{{ name }}{% else %}world{% endif %}

# {% endblock %}

# Notice how hello, is changed to allow for a default output when no name is identified.

# As we’ve been changing many files, you may wish to compare your final code with our final code.
