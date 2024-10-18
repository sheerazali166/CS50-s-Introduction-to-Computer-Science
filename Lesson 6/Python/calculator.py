

# Program 8

print("------------------Program 8------------------")


# Calculator

# You might recall calculator.c from earlier in the course:

"""

// Addition with int

    #include <cs50.h>
    #include <stdio.h>
    
    int main(void)
    {
        // Prompt user for x
        int x = get_int("x: ");
    
        // Prompt user for y
        int y = get_int("y: ");
    
        // Perform addition
        printf("%i\n", x + y);
    }

"""

# We can implement a simple calculator just as we did within C. Type code calculator.py into the terminal window
# and write code as follows:

# Addition with int [using input]

# Prompt user for x
# x = int(input("x: "))

# Prompt User for y
# y = int(input("y: "))

# Perform addition
# print(x + y)


# Program 9

print("------------------Program 9------------------")


# Notice how the CS50 library is imported. Then, x and y are gathered from the user. Finally, the result is printed.
# Notice that the main function that would have been seen in a C program is gone entirely! While one could utilize a
# main function, it is not required.

# It’s possible for one to remove the training wheels of the CS50 library. Modify your code as follows:

# Addition with int [using input]



# Prompt user for xTwo
# xTwo = input("xTwo: ")

# Prompt user for yTwo
# yTwo = input("yTwo: ")

# Perform addition
# print(xTwo + yTwo)



# Notice how executing the above code results in strange program behavior. Why might this be so?

# Program 10

print("------------------Program 10------------------")

# You may have guessed that the interpreter understood x and y to be strings. You can fix your code by employing the
# int function as follows:


# Addition with int [using input]



# Prompt user for xThree
# xThree = int(input("xThree: "))

# Prompt user for yThree
# yThree = int(input("yThree: "))

# Perform Addition
# print(xThree + yThree)



# Notice how the input for x and y is passed to the int function which converts it to an integer. Without converting x
# and y to be integers, the characters will concatenate.

# Conditionals

# In C, you might remember a program like this:

"""
// Conditionals, Boolean expressions, relational operators

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for integers
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    // Compare integers
    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}

"""

# In Python, it would appear as follows:

# Program 11

print("------------------Program 11------------------")

# Conditionals, Boolean expressions, rational operators



# Prompt user for integers
# xFour = int(input("What's xFour? "))
# yFour = int(input("What's yFour? "))

# Compare integers
# if xFour < yFour:
    # print("xFour is less than yFour")
# elif xFour > yFour:
    # print("xFour is greater than yFour")
# else:
    # print("xFour is equal to yFour")



# Notice that there are no more curly braces. Instead, indentations are utilized. Second, a colon is utilized in the
# if statement. Further, elif replaces else if. Parentheses are also no longer required in the if and elif statements.

# In C, we faced challenges when we wanted to compare two values. Consider the following code:

# Program 12

print("------------------Program 12------------------")

"""

// Conditionals, Boolean expressions, relational operators

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for integers
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    // Compare integers
    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}

"""

# In Python, we can execute the above as follows:

# Conditionals, Booleans expressions, rational operators



# Prompt user for integers
# xFive = int(input("What's xFive? "))
# yFive = int(input("What's yFive? "))

# Compare integers
# if xFive < yFive:
    # print("xFive is less than yFive")
# elif xFive > yFive:
    # print("xFive is greater than yFive")
# else:
    # print("xFive is equal to yFive")



# Notice that the CS50 library is imported. Further, minor changes exist in the if statement.

# Further looking at comparisons, consider the following code in C:

"""
// Logical operators

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to agree
    char c = get_char("Do you agree? ");

    // Check whether agreed
    if (c == 'Y' || c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("Not agreed.\n");
    }
}

"""

# Program 13

print("------------------Program 13------------------")


# The above can be implemented as follows:

# Logical Operators

# Prompt user to agree
# s = input("Do you agree? ")

# Check whether agreed
# if s == "Y" or s == "y":
    # print("Agreed.")
# elif s == "N" or s == "n":
    # print("Not agreed.")


# Notice that the two vertical bars utilized in C is replaced with or. Indeed, people often enjoy Python because it
# is more readable by humans. Also, notice that char does not exist in Python. Instead, strs are utilized.


# Program 14

print("------------------Program 14------------------")


# Another approach to this same code could be as follows using lists:

# Logical operators, using lists

# Prompt user to agree
# sTwo = input("Do you agree? ")

# Check whether agreed
# if sTwo in ["y", "yes"]:
    # print("Agreed.")
# elif sTwo in ["n", "no"]:
    # print("Not agreed.")


# Notice how we are able to express multiple keywords like y and yes in a list.


# Program 15

print("------------------Program 15------------------")



# Object-Oriented Programming

# Up until this point, our programs in this course have been linear: sequential.

# It’s possible to have certain types of values not only have properties or attributes inside of them but have
# functions as well. In Python, these values are known as objects

# In C, we could create a struct where you could associate multiple variables inside a single self-created data type.
# In Python, we can do this and also include functions in a self-created data type. When a function belongs to a
# specific object, it is known as a method.

# For example, strs in Python have a built-in methods. Therefore, you could modify your code as follows:

# Logical operators, using lists

# Prompt user to agreed.
# sThree = input("Do you agree? ").lower()

# Check whether agreed
# if sThree.lower() in ["y", "yes"]:
    # print("Agreed.")
# elif sThree.lower() in ["n", "no"]:
    # print("Not agreed.")

# Notice how the old value of s is overwritten with the result of s.lower(), a built-in method of strs.

# In this class, we will only scratch the surface of Python. Therefore, the Python documentation will be of particular
# importance as you continue.

# You can learn more about string methods in the Python documentation

# Program 16

print("------------------Program 16------------------")

# Loops

# Loops in Python are very similar to C. You may recall the following code in C:

"""

// Demonstrates while loop

    #include <stdio.h>
    
    int main(void)
    {
        int i = 0;
        while (i < 3)
        {
            printf("meow\n");
            i++;
        }
    }

"""

# In Python, this code appears as:

# Demonstrates while loop

iTwo = 0

while iTwo < 3:
    print("meow")
    iTwo += 1


# Program 17

print("------------------Program 17------------------")


# for loops can be implemented in Python as follows:

# Better design
for iThree in range(3):
    print("meow")


# Notice that i is never explicitly used. However, Python will increment the value of i.

# Program 18

print("------------------Program 18------------------")


# Similarly, one could express the above code as:

# Abstraction with parameterization

def main():
    meow(3)


# Meow some number of times
def meow(n):
    for iFour in range(n):
        print("meow")

main()

# Notice that a function is utilized to abstract away the meowing.


# Program 19

print("------------------Program 19------------------")


# Finally, a while loop could be implemented as follows:


# Demonstrates while loop
iFive = 0

while iFive < 3:
    print("meow")
    iFive += 1


# Program 24

print("------------------Program 24------------------")


# Truncation and Floating Point Imprecision

# Recall that in C, we experienced truncation where one integer being divided by another could result in an inprecise
# result.

# You can see how Python handles such division as follows by modifying your code for calculator.py:


# Division with integers demonstration lack of truncation

# Prompt user for xSix
# xSix = int(input("xSix: "))

# Prompt user for ySix
# ySix = int(input("ySix:"))

# Divide xSix by ySix
# z = xSix / ySix
# print(z)

# Notice that executing this code results in a value, but that if you were to see more digits after .333333 you’d see
# that we are faced with floating-point imprecision. Truncation does not occur.


# Program 25

print("------------------Program 25------------------")


# We can reveal this imprecision by modifying our codes slightly:

# Floating-point imprecision

# Prompt user for xSeven
# xSeven = int(input("xSeven: "))

# Prompt user for ySix
# ySeven = int(input("ySeven: "))

# Divide xSeven by ySeven
# zTwo = xSeven / ySeven

# print(f"{zTwo: .50f}")

# Notice that this code reveals the imprecision. Python still faces this issue, just as C does.


# Program 26

print("------------------Program 26------------------")


# Exceptions

# Let’s explore more about exceptions that can occur when we run Python code.

# Modify calculator.py as follows:

# Implements get_int

# def get_int(prompt):
    # return int(input(prompt))

# def mainTwo():

    # Prompt user for xEight
    # xEight = get_int("xEight: ")

    # Prompt user for ySeven
    # yEight = get_int("yEight: ")

    # Perform addition
    # print(xEight + yEight)


# mainTwo()


# Notice that inputting the wrong data could result in an error.


# Program 27

print("------------------Program 27------------------")


# We can try to handle and catch potential exceptions by modifying our code as follows:

# Implements get_int with_two a loop

# def get_int_two(promptTwo):
    # while True:
        # try:
            # return int(input(promptTwo))
        # except ValueError:
            # print("Not an integer")

# def mainThree():

    # Prompt user for xNine
    # xNine = get_int_two("xNine: ")

    # Prompt user for yNine
    # yNine = get_int_two("yNine: ")

    # Perform addition
    # print(xNine + yNine)

# mainThree()


# Notice that the above code repeatedly tries to get the correct type of data, providing additional prompts
# when needed.

# Mario

# Recall a few weeks ago our challenge of building three blocks on top of one another, like in Mario.


# Program 28

print("------------------Program 28------------------")


# In Python, we can implement something akin to this as follows:

# Prints a column of three bricks with a loop

for iSix in range(3):
    print("#")

