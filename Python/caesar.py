# how to access the command line argument
import sys

print ('Number of arguments:', len(sys.argv), 'arguments.')
print ('Argument List:', str(sys.argv))
print(type(sys.argv[0:]) is list)
# print(type(sys.argv[0:]) is list)

#validating length of command line arguments
if not len(str(sys.argv)) == 2:
  print("Usage: python caesar.py n") 
  exit(1)

