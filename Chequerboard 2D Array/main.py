# Program prints 2D arrays with a chequerboard pattern of '#' symbols
# e.g. ['#', '#', '#', ' ', ' ', ' ', '#']
#      ['#', '#', '#', ' ', ' ', ' ', '#']
#      [' ', ' ', ' ', '#', '#', '#', ' ']
#      [' ', ' ', ' ', '#', '#', '#', ' ']
#      ['#', '#', '#', ' ', ' ', ' ', '#'] for chequerboard(5, 7, 2, 3)
# Each region of the board is of size c_h by c_w, the top left cell is always filled,
# and only the right hand and bottom edge may contain incomplete chequers

# Creates an array of '#' from array and region width
def cheqLine(length, hashLength):
    line = []
    count = 0
    hashCount = 0
    spaceCount = 0
    while(count <  length):
        if(hashCount < hashLength):
            line += '#'
            hashCount += 1
        elif(spaceCount <  hashLength):
            line += ' '
            spaceCount += 1
        if(spaceCount == hashLength):
            hashCount = 0
            spaceCount = 0
        count += 1
    return line

# Creates an array of ' ' from array and region width
def empLine(length, hashLength):
    line = []
    count = 0
    hashCount = 0
    spaceCount = 0
    while(count <  length):
        if(spaceCount < hashLength):
            line += ' '
            spaceCount += 1
        elif(hashCount <  hashLength):
            line += '#'
            hashCount += 1
        if(hashCount == hashLength):
            hashCount = 0
            spaceCount = 0
        count += 1
    return line

# Prints 2D array with a chequerboard pattern of '#' symbols
def chequerboard(n, m, c_h, c_w):
    Array = []
    cheqHeight = 0
    empHeight = 0
    for i in range(n):
        if(cheqHeight < c_h):
            Array.append(cheqLine(m, c_w))
            cheqHeight += 1
        elif(empHeight < c_h):
            Array.append(empLine(m, c_w))
            empHeight += 1
        if(empHeight == c_h):
            cheqHeight = 0
            empHeight = 0
    for i in Array:
      print(i)
    print()

chequerboard(6, 8, 2, 2)