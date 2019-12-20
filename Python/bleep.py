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


# print("The original list : " + str(explicit.split(' ')))

for i in range(0, len(explicit.split(' ')), 1): 
    if not explicit.split(' ')[i] in f.read():

      res = [sub.replace(explicit.split(' ')[i], ("*" * len(explicit.split(' ')[i]))) for sub in explicit.split(' ')] 

# print("The list after substring replacement : " + str(res)) 

s = " "

print (s.join( res ))     

print()
