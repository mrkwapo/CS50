# how to access the command line argument
import sys

print ('Number of arguments:', len(sys.argv), 'arguments.')
print ('Argument List:', str(sys.argv))
print(type(sys.argv[0:]) is list)
# print(type(sys.argv[0:]) is list)

#validating length of command line arguments
# if not len(str(sys.argv)) == 1:
#   print("Usage: python caesar.py key") 
#   exit(1)

#Printing out plaintext without new license
plaintext = int(input("plaintext: "))
print("cyphertext: ")
key = 1

for i in range(0, len(plaintext),1):
  c = int(key) % 26
  if plaintext[i].islower():
    if plaintext[i] + c < 122:
      print(plaintext[i]+ c)
