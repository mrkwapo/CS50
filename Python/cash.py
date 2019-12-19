import cs50
import math

changeOwed = cs50.get_float("change owed:")

convertedChange = changeOwed * 100

count = 0

while convertedChange >= 25:

        count += math.floor(convertedChange / 25)
        convertedChange %= 25


while convertedChange >= 10 and convertedChange < 25:

        count += math.floor(convertedChange / 10)
        convertedChange %= 10


while convertedChange >= 5 and convertedChange < 10:

        count += math.floor(convertedChange / 5);
        convertedChange %= 5

while convertedChange >= 1 and convertedChange < 5:

         count += convertedChange / 1
         convertedChange %= 1

print(int(count))
