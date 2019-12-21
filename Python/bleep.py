import sys
import cs50

# validating length of command line arguments
if len(sys.argv) != 2:
    print("Usage: python bleep.py banned.txt")
    exit(1)
# Initializing a variable the argument which is the name of the file containing the banned words
dictionary = sys.argv[1]

# Getting the message that is possibly explicit from the user
explicit = cs50.get_string("What message would you like to censor?\n")

# Opening the banned words file
bannedWords = open(dictionary, "r")

# readling the banned words file and organizing the content into a list
bannedWordsList = bannedWords.read().split('\n')

# Converting the explicit message into a list
explicitList = explicit.split(' ')

# converting the explicit list into a set
explicitSet = set(explicitList)

# Initializing an empty List to append censored words in
censored = []

# Iterating through each word in the explicit list.
for x in explicitList:
    # If the word is found in the banned.txt replace it with *s that are the same length of the word and append it to the list called censored
    if x in bannedWordsList:
        censored.append(x.replace(x, "*" * len(x)))
    else:
        # if no sensoring is needed just append it to the List called censored
        censored.append(x)

# converting the List of cesnored words into a string
print(" ".join(censored))

print()

