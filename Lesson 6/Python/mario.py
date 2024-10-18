
# Program 29

print("------------------Program 29------------------")


# In C, we had the advantage of a do-while loop. However, in Python it is convention to utilize a while loop,
# as Python does not have a do while loop. You can write code as follows in a file called mario.py:

# Prints a column of n bricks with a loop

# while True:
    # n = int(input("Height: "))
    # if n > 0:
        # break

# for i in range(n):
    # print("#")

# Notice how the while loop is used to obtain the height. Once a height greater than zero is inputted, the loop breaks.


# Program 30

print("------------------Program 30------------------")

# Consider the following image:

# In Python, we could implement by modifying your code as follows:

# Prints a row of 4 question marks with a loop

# for iTwo in range(4):
    # print("?", end="")
# print()



# Notice that you can override the behavior of the print function to stay on the same line as the previous print.


# Program 31

print("------------------Program 31------------------")


# Similar in spirit to previous iterations, we can further simplify this program:

# Prints a row of 4 question marks without a loop
print("?" * 4)

# Notice that we can utilize * to multiply the print statement to repeat 4 times.

# What about a large block of bricks?

# Program 32

print("------------------Program 32------------------")

# To implement the above, you can modify your code as follows:

# Prints a 3-by-3 grid of bricks with loops

# for iThree in range(3):
    # for j in range(3):
        # print("#", end="")
    # print()

# Notice how one for loop exists inside another. The print statement adds a new line at the end of each row of bricks.
# You can learn more about the print function in the Python documentation


# Program 33

print("------------------Program 33------------------")

# Lists

# lists are a data structure within Python.

# lists have built in methods or functions within them.

# For example, consider the following code:

# Averages three numbers using a list

# Scores
scores = [72, 73, 33]

# Print average
average = sum(scores) / len(scores)
print(f"Average: {average}")

# Notice that you can use the built-in sum method to calculate the average.

# Program 34

print("------------------Program 34------------------")

# You can even utilize the following syntax to get values from the user:

# Averages 3 numbers using a list and a loop

# Get scoresTwo
scoresTwo = []

for iFour in range(3):
    score = int(input("Scores: "))
    scoresTwo.append(score)

# Print averageTwo
averageTwo = sum(scoresTwo) / len(scoresTwo)
print(f"averageTwo: {averageTwo}")

# Notice that this code utilizes the built-in append method for lists.
# You can learn more about lists in the Python documentation
# You can also learn more about len in the Python documentation