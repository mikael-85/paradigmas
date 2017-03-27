import binascii

def tira_espacos(palavra):
   return ''.join(filter(lambda palavra: palavra not in ' ', palavra))

def main(msgHexComEspacos):
   
   msgHexComEspacos = msgHexComEspacos.replace(' a ',' ')   
   msgHexSemEspacos = tira_espacos(msgHexComEspacos)        
   msgDecodificada = binascii.unhexlify(msgHexSemEspacos)   
   msgDecodificada = str(msgDecodificada)                   
   msgDecodificada = msgDecodificada[1:]
   print(msgDecodificada)                                   
