# this program creates a nintendo mario like pyramid by first asking the user for the height. And the pyramid blocks are represented by hashes
import cs50

height = cs50.get_int("height: ")
while height < 1 or height > 8:
  height = int(input("height: "))

for x in range(0,height+1,1):
  print(x * "#")
  print(((height - x)-1) * " ", end ='')
