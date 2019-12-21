import sys
import cs50

# validating length of command line arguments
if len(sys.argv) != 2:
    print("Usage: python bleep.py banned.txt")
    exit(0)

dictionary = sys.argv[1]

explicit = cs50.get_string("What message would you like to censor?\n")

bannedWords = open(dictionary, "r")

bannedWordsList= bannedWords.read().split('\n')

explicitList = explicit.split(' ')

explicitSet = set(explicitList)

# print(bannedWords.read())

# converted the message that needs to be censored, and the banned words file content into  different set
for x in explicitSet:
    # print(explicitSet)
    if x in bannedWordsList:
        print(x)

print()

