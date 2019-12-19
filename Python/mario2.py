# this program creates a nintendo mario like pyramid by first asking the user for the height. And the pyramid blocks are represented by hashes
import cs50

while True:
  height = cs50.get_int("height: ")
  if height > 0 and height < 9:
    break

for x in range(0,height+1,1):
  print(x * "#")
  print(((height - x)-1) * " ", end ="")
