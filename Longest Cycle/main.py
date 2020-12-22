# Calculates the length of the longest cycles within an input dictionary
def longest_cycle(dic):
    keys = []
    currLen = 0
    memLen = 0
    # Eliminates key-value pair if they are equal
    # Else puts keys into list to be iterated
    for key in dic:
        value = dic.get(key)
        if(key == value):
            memLen = 1
            continue
        else:
            keys.append(key)
    # Iterates over keys, starting from 1st key
    # Makes new value equal to next key
    # If key is not in 'keys' list, it is removed as 1 cycle finishes
    # When 1 cycle finishes, current longest cycle length stored in 'memLen'
    if(len(keys) != 0):
        currKey = keys[0]
        while(len(keys) > 0):
            if(dic.get(currKey) != None):
                if currKey not in keys:
                    currKey = keys[0]
                    if(currLen > memLen):
                        memLen = currLen
                        currLen = 0
                else:
                    keys.remove(currKey)
                    currKey = dic.get(currKey)
                    currLen += 1
    # Makes 'memLen' represent the longest cycle length
    if(currLen != 0 and currLen > memLen):
        memLen = currLen
    return memLen

test = [{1: 4, 4: 2, 2: 1}, {}, {12754: 12754, 'mpz': 'mpz', 'dxx': 'dxx', 9066: 9066}, {1: 4, 'b': 'a', 'h': 'b', 2: 1, 'a': 't', 4: 2, 't': 'h'}, {3: 1, 1: 3, 'x': 'x', 'j': 'z', 'z': 'j', 6: 6}, {8: 9, 'e': 7, 7: 8, 'o': 'h', 'h': 'o', 9: 'e'}, {'i': 'x', 9: 9, 'x': 'c', 7: 5, 'c': 7, 5: 'i'}, {2: 'h', 7: 'f', 'a': 3, 3: 2, 'h': 7, 'f': 'a'}, {1: 6, 'c': 'w', 3: 4, 4: 'p', 6: 'g', 'g': 1, 'p': 'c', 9: 9, 'w': 3, 'j': 'j'}, {17232: 10954, 'yvt': 'vzc', 194: 17128, 17347: 14461, 'pls': 548, 'lve': 17347, 'mkf': 'tbj', 10954: 'dra', 'uxu': 'pls', 17128: 'pvm', 12804: 'kyu', 5584: 'ewu', 'fxe': 'grm', 15634: 'yvt', 8979: 9908, 'ecs': 'ytg', 'mgt': 'uxu', 8409: 12804, 'pvm': 5552, 'nwi': 15634, 'kyu': 'lve', 12448: 17232, 5601: 8979, 548: 'mgt', 9509: 'fxa', 'vzc': 194, 9908: 9509, 8496: 'ecs', 2288: 8409, 1329: 'mkf', 'tbj': 2288, 'fer': 8496, 'yjv': 1329, 'dra': 'fer', 'ytg': 'fxe', 5552: 5584, 'grm': 'yjv', 'fxa': 12448, 14461: 'nwi', 'ewu': 5601}]

for i in test:
  print("Input: "+str(i))
  print("\nLength of longest cycle: "+str(longest_cycle(i)))
  print("\n---------------------------------------------------------------\n")