
# Program 29

print("---------------Program 29---------------")

import csv

books = []

# Add books to shelf by reading from books.csv
with open("books.csv") as file:
    text = file.read()
    print(text)


# Print books
...


# Program 30

print("---------------Program 30---------------")

import csv

booksTwo = []

# Add books to shelf by reading from books.csv
with open("books.csv") as fileTwo:
    reader = csv.DictReader(fileTwo)
    for row in reader:
        print(row)


# Print booksTwo
...

# Program 31

print("---------------Program 31---------------")

import csv

booksThree = []

# Add books to shelf by reading from books.csv
with open("books.csv") as fileThree:
    readerTwo = csv.DictReader(fileThree)
    for rowTwo in readerTwo:
        booksThree.append(rowTwo)


# Print booksThree
for book in booksThree:
    print(book)


# Question if books.csv file doesn't have header?

# Program 32

print("---------------Program 32---------------")

import csv

booksFour = []

# Add books to shelf by reading from books_without_header.csv
with open("books_without_header.csv") as fileFour:
    readerThree = csv.DictReader(fileFour)
    for rowThree in readerThree:
        booksFour.append(rowThree)


# Print booksFour
for booksTwo in booksFour:
    print(booksTwo)

# 14 same key 'Goodnight Moon' full chaand


# Giving mode to the file

# Program 33

print("---------------Program 33---------------")

import csv

# r For reading

booksFive = []

# Add books to shelf by reading from books_without_header.csv
with open("books_without_header.csv", "r") as fileFive:
    readerFour = csv.DictReader(fileFive)
    for rowFour in readerFour:
        booksFive.append(rowFour)


# Print booksFive
for booksThree in booksFive:
    print(booksThree)


# Program 34

print("---------------Program 34---------------")

import csv


booksSix = []

#  Add books to shelf by reading from books_without_header.csv
fileSix = open("books_without_header.csv", "r")
readerFive = csv.DictReader(fileSix)

for rowFive in readerFive:
    booksSix.append(rowFive)

# Print booksFive
for bookFour in booksSix:
    print(booksFour)

# Good reads

    # Download reads.py and books.csv
    # Complete reads.py so that a user can build a list of children's books.







