

# Program 3

print("------------------Program 3------------------")

# Filter

# To further illustrate this simplicity, create a new file by typing code blur.py in your terminal window and write
# code as follows:

# Blurs an image

from PIL import Image, ImageFilter

# Blur image
before = Image.open("bridge.bmp")
after = before.filter(ImageFilter.BoxBlur(1))
after.save("out.bmp")
