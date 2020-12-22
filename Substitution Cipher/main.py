# Substitution Cipher
def sub_cipher(s, dic):
    outStr = ""
    for char in s:
        if(dic.get(char) != None):
            outStr += dic.get(char)
        else:
            outStr += char
    return outStr

test = ['test', 'pear', 'string', '011011', 'hello!', 'the quick brown fox jumped over the lazy dog']
testDic = [{'t': 'f'}, {'r': 'p', 'p': 'r'}, {}, {'0': '1', '1': '0'}, {'!': '?'}, {'a': 'i', 'b': 's', 'c': 'w', 'd': 'l', 'e': 'r', 'f': 'a', 'g': 'g', 'h': 'b', 'i': 'u', 'j': 'v', 'k': 'p', 'l': 'k', 'm': 'z', 'n': 'm', 'o': 'c', 'p': 'o', 'q': 'n', 'r': 't', 's': 'h', 't': 'x', 'u': 'e', 'v': 'q', 'w': 'f', 'x': 'j', 'y': 'y', 'z': 'd'}]

for i in range(len(test)):
  print("Input: "+test[i])
  print("Substitutions: "+str(testDic[i]))
  print("Encrypted: "+sub_cipher(test[i], testDic[i])+"\n")