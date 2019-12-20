# import sys
# import cs50

# validating length of command line arguments
# if len(sys.argv) != 2:
#     print("Usage: python bleep.py banned.txt")
#     exit(0)
   
    
explicit = input("What message would you like to censor?\n")
# arg1 = sys.argv[1]
# arg2 = sys.argv[2]


f = open("banned.txt", "r")

explicitList = explicit.split(' ')
# with open('banned.txt') as f:
for i in range(0, len(explicitList), 1):    
    if explicitList[i] in f.read():
      print("*" * len(explicitList[i]))
    # if not explicit[i] in f.read():
    elif not explicitList[i] in f.read():
      print(explicitList[i] + ' ', end='')

print()
