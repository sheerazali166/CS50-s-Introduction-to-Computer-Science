
# Layout

# Both of our web pages, index.html and greet.ht ml, have much of the same data. Wouldn’t it be nice to allow the body
# to be unique, but copy the same layout from page to page?

# First, create a new template called layout.html and write code as follows:

# <!DOCTYPE html>

# <html lang="en">
    # <head>
        # <meta name="viewport" content="initial-scale=1, width=device-width">
        # <title>hello</title>
    # </head>
    # <body>
        # {% block body %}{% endblock %}
    # </body>
# </html>

# Notice that the {% block body %}{% endblock %} allows for the insertion of other code from other HTML files.

# Then, modify your index.html as follows:

# {% extends "layout.html" %}

# {% block body %}

    # <form action="/greet" method="get">
        # <input autocomplete="off" autofocus name="name" placeholder="Name" type="text">
        # <button type="submit">Greet</button>
    # </form>

# {% endblock %}


# Notice that the line {% extends "layout.html" %} tells the server where to get the layout of this page. Then, the
# {% block body %}{% endblock %} tells what code to be inserted into layout.html


# Finally, change greet.html as follows:

# {% extends "layout.html" %}

# {% block body %}
    # hello, {{ name }}
# {% endblock %}

# Notice how this code is shorter and more compact.



