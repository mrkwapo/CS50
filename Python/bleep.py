# import sys
# import cs50

# validating length of command line arguments
# if len(sys.argv) != 2:
#     print("Usage: python bleep.py banned.txt")
#     exit(0)

# arg1 = sys.argv[1]
# arg2 = sys.argv[2]
    
explicit = input("What message would you like to censor?\n")

# f = open("banned.txt", "r")
# print(f.read())


with open('banned.txt') as f:
    if explicit in f.read():
        print("true")
    else:
      print("false")


