# Prints 2D lists with a rectangular pattern of '#' symbols
# e.g.  ['#', '#', '#']
#       ['#', ' ', '#']
#       ['#', '#', '#'] for rectangle(3, 3)
def rectangle(n, m):
    Array = []
    in_array = []
    for i in range(n):
        for j in range(m):
            if(i == 0 or i == (n-1)):
                in_array += '#'
            elif(i > 0 and i < (n-1)):
                if(j == 0 or j == (m-1)):
                    in_array += '#'
                else:
                    in_array += ' '
        Array.append(in_array)
        in_array = []
    for i in Array:
      print(i)
    print()

test1 = [3, 4, 5, 6]
test2 = [6, 5, 4, 3]

for i in range(len(test1)):
  print("\nInputs: ("+str(test1[i])+", "+str(test2[i])+")")
  rectangle(test1[i], test2[i])
