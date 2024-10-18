
# Searching and Dictionaries

# We can also search within a data structure.

# Consider a program called phonebook.py as follows:

# Program 35

print("------------------Program 35------------------")

# Implements linear search for names using loop

# A list of names
# names = ["Carter", "David", "John"]

# Ask for name
# name = input("Name: ")

# Search for name
# for n in names:
    # if name == n:
        # print("Found")
        # break
# else:
    # print("Not found")

# Notice how this implements linear search for each name.


# Program 36

print("------------------Program 36------------------")


# However, we don’t need to iterate through a list. In Python, we can execute linear search as follows:

# Implements linear search for names using `n`

# A list of namesTwo
# namesTwo = ["Carter", "David", "John"]

# Ask for nameTwo
# nameTwo = input("namesTwo: ")

# Search for nameTwo
# if nameTwo in namesTwo:
    # print("Found")
# else:
    # print("Not found")

# Notice how in is used to implement linear search.
# Still, this code could be improved.
# Recall that a dictionary or dict is a collection of key and value pairs


# Program 37

print("------------------Program 37------------------")


# You can implement a dictionary in Python as follows:

# Implements a phonebook as a list of dictionaries, without a variable

# people = [
    # { "name": "Carter", "number": "+1-617-495-1000" },
    # { "name": "David", "number": "+1-617-495-1000" },
    # { "name": "John", "number": "+1-949-468-2750" }
# ]

# Search for name
# nameThree = input("nameThree: ")
# for person in people:
    # if person["name"] == nameThree:
        # print(f"Found {person['number']}")
        # break
# else:
    #print("Not found")

# Notice that the dictionary is implemented having both name and number for each entry.

# Program 38

print("------------------Program 38------------------")

# Even better, strictly speaking, we don’t need both a name and a number. We can simplify this code as follows:

# Implements a phonebook using a dictionary

# peopleTwo = {
    # "Carter": "+1-617-495-1000",
    # "David": "+1-617-495-1000",
    # "John": "+1-949-468-2750"
# }

# Search for name
# nameFour = input("nameFour: ")

# if nameFour in peopleTwo:
    # print(f"Number: {peopleTwo[nameFour]}")
# else:
    # print("Not found")

# Notice that the dictionary is implemented using curly braces. Then, the statement if name in people searches to see
# if the name is in the people dictionary. Further, notice how, in the print statement, we can index into the people
# dictionary using the value of name. Very useful!

# Python has done their best to get to constant time using their built-in searches.
# You can learn more about dictionaries in the Python documentation


# Program 39

print("------------------Program 39------------------")


# Command-Line Arguments

# As with C, you can also utilize command-line arguments. Consider the following code:

# Prints a command-line arguments

# from sys import argv

# if len(argv) == 2:
    # print(f"hello, { argv[1] }")
# else:
    # print("hello, world")

# Notice that argv[1] is printed using a formatted string, noted by the f present in the print statement.

# Program 40

print("------------------Program 40------------------")

# You can print all the arguments in argv as follows:

# Printing command-line arguments, indexing into argv

# from sys import argv

# for i in range(len(argv)):
    # print(argv[i])

# Notice that the above will not present the word python if executed, and the first argument will be the name of the
# file you are running. You can think of the word python as being analogous to ./ when we were running programs in C.

# Program 41

print("------------------Program 41------------------")

# You can slice pieces of lists away. Consider the following code:

# Printing command-line arguments

# from sys import argv

# for arg in argv:
    # print(arg)

# Notice that executing this code will result in the name of the file you are running being sliced away.
# You can learn more about the sys library in the Python documentation

# Program 42

print("------------------Program 42------------------")

# Exit Status

# The sys library also has built-in methods. We can use sys.exit(i) to exit the program with a specific exit code:

# Exists with explicit value, importing sys

import sys

if len(sys.argv) != 2:
    print("Missing command-line argument")
    sys.exit(1)
print(f"hello, {sys.argv[1]}")
sys.exit(0)


# Notice that dot-notation is used to utilize the built-in functions of sys.

# Third-Party Libraries

# One of the advantages of Python is its massive user-base and similarly large number of third-party libraries.
# For example, David demoed the use of cowsay and qrcode libraries.

# Summing Up

# In this lesson, you learned how the building blocks of programming from prior lessons can be implemented within
# Python. Further, you learned about how Python allowed for more simplified code. Also, you learned how to utilize
# various Python libraries. In the end, you learned that your skills as a programmer are not limited to a single
# programming language. Already, you are seeing how you are discovering a new way of learning through this course
# that could serve you in any programming language – and, perhaps, in nearly any avenue of learning! Specifically,
# we discussed…


# Python
# Variables
# Conditionals
# Loops
# Types
# Object-Oriented programming
# Truncation and floating point imprecision
# Exceptions
# Dictionaries
# Command-line arguments
# Third-Party libraries

# See you next time!
