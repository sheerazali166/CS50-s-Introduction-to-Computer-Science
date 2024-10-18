

# Welcome!

# In previous weeks, you were introduced to the fundamental building blocks of programming.
# You learned about programming in a lower-level programming language called C.
# Today, we are going to work with a higher-level programming language called Python.
# As you learn this new language, you’re going to find that you are going to be more able to teach yourself new
# programming languages.

# Python

# Humans, over the decades, have seen how previous design decisions could be improved upon.
# Python is a programming language that builds upon what you have already learned in C.
# Unlike in C, Python is an interpreted language, where you need not separately compile your program. Instead, you run
# your program in the Python Interpreter.

# Hello

# Up until this point, the code has looked like this:

"""

    // A program that says hello to the world

        #include <stdio.h>

        int main(void)
        {
            printf("hello, world\n");
        }

"""

# Program 1

print("------------------Program 1------------------")

# Today, you’ll find that the process of writing and compiling code has been simplified.
# For example, the above code will be rendered in Python as:



# A program that says hello to the world
print("hello, world")

# Notice that the semicolon is gone and that no library is needed.
# Python notably can implement what was quite complicated in C with relative simplicity.


# Program 7

print("------------------Program 7------------------")

# You can write this code by executing code hello.py in the terminal window. Then, you can execute this code by
# running python hello.py. Notice how the + sign concatenates "hello, " and answer.

# Similarly, you could implement the above code as:

# input and print, with format strings

answer = input("What's your name? ")
print(f"hello, {answer}")

# Notice how the curly braces allow for the print function to interpolate the answer such that answer appears within.
# The f is required to include the answer properly formatting.

# Variables

# Variable declaration is simplified too. In C, you might have int counter = 0;. In Python, this same line would read
# counter = 0. You need not declare the type of the variable.

# Python favors counter += 1 to increment by one, losing the ability found in C to type counter++.

# Types

# Data types in Python do not need to be explicitly declared. For example, you saw how answer above is a string, but
# we did not have to tell the interpreter this was the case: It knew on its own.

# In Python, commonly used types include:

# bool
# float
# int
# str

# Notice that long and double are missing. Python will handle what data type should be used for larger and smaller
# numbers.

# Some other data types in Python include:

# range
# list
# tuple
# dict
# set

# Each of these data types can be implemented in C, but in Python they can be implemented more simply.









