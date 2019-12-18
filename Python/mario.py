# this program creates a nintendo mario like pyramid by first asking the user for the height. And the pyramid blocks are represented by hashes 
height = int(input("height: "))
for x in range(0,height+1,1):  
  print(x * "#") 
  print(((height - x)-1) * " ", end ='')
