# exercício 1: 

def addSuffix(suf,nome):
    return[n+suf for n in nome]

#exercicio 2:

def CountShorts(words)
    return len[len(x) for x in words if len(x) < 5]

# exercicio 3:

def stripVowels2(palavra):
   return ''.join([letra for letra in palavra if letra not in 'aeiouAEIOU'])

#exercicio 4:

def hideChars2(string):
    return ''.join(['-' if char not in ' ' else ' ' for char in string])

#exercício 5:

def genTable(n): 
    return [(x,x*x) for x in range(1,n)]



#exercício 6:

def genCode(palavra):
    return ''.join([(x[0]+x[-1]) for x in palavra])
        

#Exercicio 7: - fazer - ?

def myZip(l1,l2):
    return [(x,y) for in x,y in 
            


#exercício 8:

def enumerate(words):
    return [(x,y) for x,y in zip([x for x in range(1,len(words)+1)],words)]


#exercicio 9:  

def isBin(string):
    resp = [True if char in '10' else False for char in string]
    if all(x == True for x in resp):
           return True
    else:
           return False

#exercio 10:

def bin2dec(digits): 
    return int(''.join([str(x) for x in digits]),2)    
