

# Program 4

print("------------------Program 4------------------")


# Notice that this program imports modules Image and ImageFilter from a library called PIL. This takes an input file
# and creates and output file.

# Further, you can create a new file called edges.py as follows:

# Finds edges in an images

from PIL import Image, ImageFilter

# Find edges
before = Image.open("bridge.bmp")
after = before.filter(ImageFilter.FIND_EDGES)
after.save("out_two.bmp")


# Notice that this code is a small adjustment to your blur code, but produces a dramatically different result.

# Program 5

print("------------------Program 5------------------")

# Finally, you can even do face detection as follows:

# Find faces in picture
# https://github.com/ageitgey/face_recognition/blob/master/examples/find_faces_in_picture.py

"""

from PIL import Image
import face_recognition


# Load the jpg file into a numpy array
image = face_recognition.load_image_file("office.jpg")

# Find all the faces in the image using the default HOG-based model.
# This method is fairly accurate, but not as accurate as the CNN model and not GPU accelerated.
# See also: find faces_in_picture_cnn.py

face_locations = face_recognition.face_locations(image)

for face_location in face_locations:

    # Print the location of each face in this location
    top, right, bottom, left = face_recognition

    # You can access the actual face itself like this:
    face_image = image[top: bottom, left: right]
    pil_image = Image.fromarray(face_image)
    pil_image.show()

"""

# Notice how this file uses a third-party library called face_recognition. This is enabled by running pip install
# face_recognition in one’s terminal window.

# Python allows you to abstract away programming that would be much more complicated within C and other lower-level
# programming languages.

# Strings

# In C, you might remember this code:
"""
    // get_string and printf with %s

        #include <cs50.h>
        #include <stdio.h>
        
        int main(void)
        {
            string answer = get_string("What's your name? ");
            printf("hello, %s\n", answer);
        }

"""

# Program 6

print("------------------Program 6------------------")


answer = input("What's your name? ")
print("hello, " + answer)












