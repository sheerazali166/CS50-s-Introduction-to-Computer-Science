

# Program 22

print("------------------Program 22------------------")


# Abstraction

# As we hinted at earlier today, you can further improve upon our code using functions and abstracting away various
# code into functions. Modify your earlier-created meow.py code as follows:

# Abstraction

def main():
    for i in range(3):
        meow()

# Moew once
def meow():
    print("meow")

main()

# Notice that the meow function abstracts away the print statement. Further, notice that the main function appears
# at the top of the file. At the bottom of the file, the main function is called. By convention, it’s expected that
# you create a main function in Python.

# Program 23

print("------------------Program 23------------------")

# Indeed, we can pass variables between our functions as follows:

# Abstraction with parameterization

def mainTwo():
    meowTwo(3)

# Moew some number of times
def meowTwo(n):
    for iTwo in range(n):
        print("meow")

mainTwo()


# Notice how meow now takes a variable n. In the main function, you can call meow and pass a value like 3 to it. Then,
# meow utilizes the value of n in the for loop.

# Reading the above code, notice how you, as a C programmer, are able to quite easily make sense of the above code.
# While some conventions are different, the building blocks you previously learned are very apparent in this new
# programming language.







