# Produces an array of '#' and ' ' symbols of a specific size
def hashLine(x, n):
    numSpace = (n - x) // 2
    line = []
    for i in range(numSpace):
        line.append(' ')
    for i in range(x):
        line.append('#')
    for i in range(numSpace):
        line.append(' ')
    return line

# Prints 2D lists with a diamond pattern of '#' symbols
# e.g. [' ', ' ', '#', ' ', ' ']
#      [' ', '#', '#', '#', ' ']
#      ['#', '#', '#', '#', '#']
#      [' ', '#', '#', '#', ' ']
#      [' ', ' ', '#', ' ', ' '] for diamond(5)
def diamond(n):
    Array = []
    height = n
    start = 0
    if(n % 2 != 0):
        start = -1
    while(start < height):
        start += 2
        Array.append(hashLine(start, n))
    if(n % 2 != 0):
        start -= 2
    while(start > 0):
        Array.append(hashLine(start, n))
        start -= 2
    for i in Array:
      print(i)
    print()

test = [3, 4, 5, 6]

for i in range(len(test)):
  print("\nInput: "+str(test[i]))
  diamond(test[i])