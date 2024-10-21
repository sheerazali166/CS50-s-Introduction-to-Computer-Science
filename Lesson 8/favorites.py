

# Program 1

print("------------------Program 1------------------")


# Welcome!

# In previous weeks, we introduced you to Python, a high-level programming language that utilized the same building
# blocks we learned in C. However, we introduced this new language not for the purpose of learning “just another
# language.” Instead, we do so because some tools are better for some jobs and not so great for others!

# This week, we will be continuing more syntax related to Python.
# Further, we will be integrating this knowledge with data.
# Finally, we will be discussing SQL or Structured Query Language.
# Overall, one of the goals of this course is to learn to program generally – not simply how to program in the
# languages described in this course.

# Flat-File Database

# As you have likely seen before, data can often be described in patterns of columns and rows.

# Spreadsheets like those created in Microsoft Excel and Google Sheets can be outputted to a csv or comma-separated
# values file.

# If you look at a csv file, you’ll notice that the file is flat in that all of our data is stored in a single table
# represented by a text file. We call this form of data a flat-file database.

# Python comes with native support for csv files.

# First, download favorites.csv and upload it to your file explorer inside cs50.dev. Second, in your terminal window,
# type code favorites.py and write code as follows:

# Prints all favorites in csv using csv.reader

import csv

# Open CSV file
with open("favorites.csv", "r") as file:

    # Create reader
    reader = csv.reader(file)

    # Skip header row
    next(reader)

    # Iterate over CSV file, printing each favorites
    for row in reader:
        print(row[1])

# Notice that the csv library is imported. Further, we created a reader that will hold the result of csv.reader(file).
# The csv.reader function reads each row from the file, and in our code we store the results in reader. print(row[1]),
# therefore, will print the language from the favorites.csv file.


# Program 2

print("------------------Program 2------------------")


# You can improve your code as follows:

# Stores favorite in a variables

import csv

# Open CSV fileTwo
with open("favorites.csv", "r") as fileTwo:

    # Create readerTwo
    readerTwo = csv.reader(fileTwo)

    # Skip header row
    next(readerTwo)

    # Iterate over CSV file, printing each favorite
    for rowTwo in readerTwo:
        favorite = rowTwo[1]
        print(favorite)


# Notice that favorite is stored and then printed. Also notice that we use the next function to skip to the next line
# of our reader.

# One of the disadvantages of the above approach is that we are trusting that row[1] is always the favorite. However,
# what would happen if the columns have been moved around?


# Program 3

print("------------------Program 3------------------")


# We can fix this potential issue. Python also allows you to index by the keys of a list. Modify your code as follows:

# Prints all favorites in CSV using csv.dictReader

import csv

# Open CSV fileThree
with open("favorites.csv", "r") as fileThree:

    # Create DictReader
    readerThree = csv.DictReader(fileThree)

    # Iterate over CSV file, printing each favorite
    for rowThree in readerThree:
        favoriteTwo = rowThree["language"]
        print(favoriteTwo)


# Notice that this example directly utilizes the language key in the print statement.

# Program 4

print("------------------Program 4------------------")

# This could be further simplified to:

# Prints all favorites in CSV using csv.DictReader

import csv

# Open CSV fileFour
with open("favorites.csv", "r") as fileFour:

    # Create DictReader Two
    readerFour = csv.DictReader(fileFour)

    # Iterate over CSV fileFour, printing each favorite
    for rowFour in readerFour:
        print(rowFour["language"])


# Program 5

print("------------------Program 5------------------")

# To count the number of favorite languages expressed in the csv file, we can do the following:

# Counts favorites using using variables

import csv

# Open CSV fileFive
with open("favorites.csv", "r") as fileFive:

    # Create DictReader Three
    readerFive = csv.DictReader(fileFive)

    # Counts
    scratch, c, python = 0, 0, 0

    # Iterate over CSV fileFive, counting favorites
    for rowFive in readerFive:
        favoriteThree = rowFive["language"]

        if favoriteThree == "Scratch":
            scratch += 1
        elif favoriteThree == "C":
            c += 1
        elif favoriteThree == "Python":
            python += 1


# Print counts
print(f"Scratch: {scratch}")
print(f"C: {c}")
print(f"Python: {python}")


# Notice that each language is counted using if statements. Further notice the double equal == signs in those
# if statements.

# Program 6

print("------------------Program 6------------------")

# Python allows us to use a dictionary to count the counts of each language. Consider the following improvement upon
# our code:

# Counts favorites using dictionary

import csv

# Open CSV fileSix
with open("favorites.csv", "r") as fileSix:

    # Create DictReader Four
    readerSix = csv.DictReader(fileSix)

    # Counts
    counts = {}

    # Iterate over CSV fileSix, counting favorites
    for rowSix in readerSix:
        favoriteFour = rowFour["language"]

        if favoriteFour in counts:
            counts[favoriteFour] += 1
        else:
            counts[favoriteFour] = 1


# Print counts

for favoriteFive in counts:
    print(f"{favoriteFive}: {counts[favoriteFive]}")


# Notice that the value in counts with the key favorite is incremented when it exists already. If it does not exist,
# we define counts[favorite] and set it to 1. Further, the formatted string has been improved to present the
# counts[favorite].


# Program 7

print("------------------Program 7------------------")


# Python also allows sorting counts. Improve your code as follows:

# Sorts favorites by key

import csv

# Open CSV fileSeven
with open("favorites.csv") as fileSeven:

    # Create DictReader Five
    readerSeven = csv.DictReader(fileSeven)

    # Counts Two
    countsTwo = {}

    # Iterate over CSV fileSeven, counting favorites
    for rowSeven in readerSeven:
        favoriteSix = rowSeven["language"]

        if favoriteSix in countsTwo:
            countsTwo[favoriteSix] += 1
        else:
            countsTwo[favoriteSix] = 1


# Prints count
for favoriteSeven in sorted(countsTwo):
    print(f"{favoriteSeven}: {countsTwo[favoriteSeven]}")


# Notice the sorted(counts) at the bottom of the code.

# Program 8

print("------------------Program 8------------------")

# If you look at the parameters for the sorted function in the Python documentation, you will find it has many
# built-in parameters. You can leverage some of these built-in parameters as follows:

# Sort favorites by value using .get

import csv

# Open CSV fileEight
with open("favorites.csv", "r") as fileEight:

    # Create DictReader Six
    readerEight = csv.DictReader(fileEight)

    # Counts Three
    countsThree = {}

    # Iterate over CSV fileEight, counting favorites
    for rowEight in readerEight:
        favoriteEight = rowEight["language"]

    if favoriteEight in countsThree:
        countsThree[favoriteEight] += 1
    else:
        countsThree[favoriteEight] = 1

# Print counts three
for favoriteNine in sorted(countsThree, key=countsThree.get, reverse=True):
    print(f"{favoriteNine }: {countsThree[favoriteNine]}")


# Notice the arguments passed to sorted. The key argument allows you to tell Python the method you wish to use to sort
# items. In this case counts.get is used to sort by the values. reverse=True tells sorted to sort from largest
# to smallest

# Program 9

print("------------------Program 9------------------")

# Python has numerous libraries that we can utilize in our code. One of these libraries is collections, from which we
# can import Counter. Counter will allow you to access the counts of each language without the headaches of all the if
# statements seen in our previous code. You can implement as follows:

# Sorts favorites by value using .get

import csv

from collections import Counter

# Open CSV fileNine
with open("favorites.csv") as fileNine:

    # Create DictReader Seven
    readerNine = csv.DictReader(fileNine)

    # Counts Four
    countsFour = Counter()

    # Iterate over CSV fileNine, counting favorites
    for rowNine in readerNine:
        favoriteTen = rowNine["language"]
        countsFour[favoriteTen] += 1

# Prints counts four
for favoriteEleven, count in countsFour.most_common():
    print(f"{favoriteEleven}: {count}")

# Notice how counts = Counter() enables the use of this imported Counter class from collections.

# Program 10

print("------------------Program 10------------------")

# We can change the column we are examining, focusing on our favorite problem instead:

# Favorite problem instead of favorite language

import csv

from collections import Counter

# Open CSV fileTen
with open("favorites.csv", "r") as fileTen:

    # Create DictReader Eight
    readerTen = csv.DictReader(fileTen)

    # Counts Five
    countsFive = Counter()

    # Iterate over CSV fileTen, counting favorites
    for rowTen in readerTen:
        favoriteTwelve = rowTen["problem"]
        countsFive[favoriteTwelve] += 1

# Prints counts five

for favoriteThirteen, countTwo in countsFive.most_common():
    print(f"{favoriteThirteen} {countsFive}")


# Notice that problem replaced language.


# Program 11

print("------------------Program 11------------------")

# We can also get the count of the popularity of a specific problem in the course:

# Gets a specific count three

# import csv

# from collections import Counter

# Open CSV fileEleven
# with open("favorites.csv", "r") as fileEleven:

    # Create DctReader Nine
    # readerEleven = csv.DictReader(fileEleven)

    # Counts Six
    # countsSix = Counter()

    # Iterate over csv fileEleven, counting favorites
    # for rowEleven in readerEleven:
        # favoriteFourteen = rowEleven["problem"]

        # countsSix[favoriteFourteen] += 1


# Prints count six
# favoriteFifteen = input("favoriteFifteen: ")
# print(f"{favoriteFifteen}: {countsSix[favoriteFourteen]}")

# Notice how compact our code is compared to our experience in C.

# Program 12

print("------------------Program 12------------------")

# Using SQL in Python

# To assist in working with SQL in this course, the CS50 Library can be utilized as follows in your code:

# from cs50 import SQL

# Similar to previous uses of the CS50 Library, this library will assist with the complicated steps of utilizing SQL
# within your Python code.

# You can read more about the CS50 Library’s SQL functionality in the documentation.

# Recall where we last left off in favorites.py. Your code should appear as follows:

# Get a specific countThree

# import csv

# from collections import Counter

# Open CSV fileTwelve
# with open("favorites.csv", "r") as fileTwelve:

    # Create a DictReader Ten
    # readerTwelve = csv.DictReader(fileTwelve)

    # Counts Seven
    # countsSeven = Counter()

    # Iterate over CSV fileTwelve, counting favorites
    # for rowTwelve in readerTwelve:
        # favoriteSixteen = rowTwelve["problem"]

        # countsSeven[favoriteSixteen] += 1


# Print Counts Seven
# favoriteSeventeen = input("favoriteSeventeen: ")
# print(f"{favoriteSeventeen}: { countsSeven[favoriteSeventeen]}")


# Notice how this code is exactly as we left it prior.

# Program 13

print("------------------Program 13------------------")

# Modify your code as follows:

# Searches database popularity of a problem

# import csv

# import sqlite3

# Open database
# connection = sqlite3.connect("favorites.db")

# Prompt user for favorite eighteen
# favoriteEighteen = input("favoriteEighteen")

# cursor = connection.cursor()

# Search for title
# rows = cursor.execute("SELECT COUNT(*) AS n FROM favorites WHERE problem LIKE ?", favoriteEighteen)

# Get first (and only) row
# row = rows[0]

# Print popularity
# print(row["n"])

# connection.close()

# Notice that db = SQL("sqlite:///favorites.db") provide Python the location of the database file. Then, the line that
# begins with rows executes SQL commands utilizing db.execute. Indeed, this command passes the syntax within the
# quotation marks to the db.execute function. We can issue any SQL command using this syntax. Further, notice that
# rows is returned as a list of dictionaries. In this case, there is only one result, one row, returned to the
# rows list as a dictionary.

# Race Conditions

# Utilization of SQL can sometimes result in some problems.

# You can imagine a case where multiple users could be accessing the same database and executing commands at the
# same time.

# This could result in glitches where code is interrupted by other people’s actions. This could result in a
# loss of data.

# Built-in SQL features such as BEGIN TRANSACTION, COMMIT, and ROLLBACK help avoid some of these race
# condition problems.

# SQL Injection Attacks

# Now, still considering the code above, you might be wondering what the ? question marks do above. One of the
# problems that can arise in real-world applications of SQL is what is called an injection attack. An injection attack
# is where a malicious actor could input malicious SQL code

# For example, consider a login screen as follows:




                    ########################################################################
                    #                                                                      #
                    #            HARVARD KEY                                               #
                    #                    ---                                               #
                    #            Sign In                                                   #
                    #                                                                      #
                    #                                                                      #
                    #      ------Email Address-----------------------------------          #
                    #      |                                                    |          #
                    #      -----------------------------------------------------           #
                    #                                                                      #
                    #       ----------------------------------------------------           #
                    #       |     Password                                 ✪   |           #
                    #       ----------------------------------------------------           #
                    #                                                                      #
                    #                                                                      #
                    #                 |-------------------------------|                    #
                    #                 |             Sign In           |                    #
                    #                 |-------------------------------|                    #
                    #                                                                      #
                    #       ------------------------------------------------------         #
                    #                                                                      #
                    #                                                                      #
                    #       FORGOT YOUR PASSWORD?                                          #
                    #       ---------------------                                          #
                    #                                                                      #
                    #                                                                      #
                    ########################################################################




# Without the proper protections in our own code, a bad actor could run malicious code. Consider the following:

"""rows = db.execute("SELECT COUNT(*) FROM users WHERE username = ? AND password = ?", username, password)"""

# Notice that because the ? is in place, validation can be run on favorite before it is blindly accepted by the query.
# You never want to utilize formatted strings in queries as above or blindly trust the user’s input.
# Utilizing the CS50 Library, the library will sanitize and remove any potentially malicious characters.

# Summing Up

# In this lesson, you learned more syntax related to Python. Further, you learned how to integrate this knowledge with
# data in the form of flat-file and relational databases. Finally, you learned about SQL. Specifically, we discussed…

# Flat-file databases
# Relational databases
# SQL
# Primary and foreign keys
# JOINs
# Indexes
# Using SQL in Python
# Race conditions
# SQL injection attacks

# See you next time!













