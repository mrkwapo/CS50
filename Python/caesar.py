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
plaintext = input("plaintext: ")
print("cyphertext: ", end='')
key = 13

for i in range(0, len(plaintext),1):
  c = int(key) % 26
  if plaintext[i].islower():
    if ord(plaintext[i]) + c < 122:
      print(chr(ord(plaintext[i])+ c), end='')
    
    elif ord(plaintext[i]) + c > 122:
      print(chr(ord(plaintext[i])- c), end='')


for i in range(0, len(plaintext),1):
  c = int(key) % 26
  if plaintext[i].isupper():
    if ord(plaintext[i]) + c < 90:
      print(chr(ord(plaintext[i])+ c), end='')

    elif ord(plaintext[i]) + c > 90:
      print(chr(ord(plaintext[i])- c), end='')

#if there is a space print space
  #if plaintext[i].isspace():
  #   print(chr(ord(plaintext[i])))
  elif not plaintext[i].isalpha():
    print(plaintext[i])
