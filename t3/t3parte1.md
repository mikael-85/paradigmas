# Exercício 1: 

pai(roberto,joao).     
pai(joao, jose). 
pai(roberto,julio).
pai(julio,marcos).
pai(julio,mario).
avo(X,Z) :- pai(X,Y), pai(Y,Z).


Prolog dialog
Comentários
   [trace]  ?- avo(joao,Y).                 #Chamou regra avo para ver se joao tem netos
   Call: (8) avo(joao, _7356) ? creep       #Consultou se joao tem netos substituindo Y por uma variavel;     
  
 Call: (9) pai(joao, _7574) ? creep        #consultou nas regras se joão é pai      
   Exit: (9) pai(joao, jose) ? creep       #Goal - encontrou jose como filho de joao e substituiu a variável;     
   
Call: (9) pai(jose, _7356) ? creep         #Consultaou se jose tem filhos nao encontrou  
   Fail: (9) pai(jose, _7356) ? creep      #Consultou novamente se jose tem filhos nao encontrou;      
   
Fail: (8) avo(joao, _7356) ? creep         #joao nao tem netos;        
false.                                     #Retornou falso.


# Exercício 2: 


#Exercício 3: 

factorial(0, 1).
factorial(N, NFact) :-
    N > 0,
    Nminus1 is N - 1,
    factorial(Nminus1, Nminus1Fact),
    NFact is Nminus1Fact * N.  
-------------------------------------------------
prolog -s factorial.pl
blah blah blah …
?- trace.
true.
[trace]  ?- factorial(3, X).
   Call: (7) factorial(3, _G284) ? creep*
^  Call: (8) 3>0 ? creep
^  Exit: (8) 3>0 ? creep
^  Call: (8) _L205 is 3-1 ? creep
^  Exit: (8) 2 is 3-1 ? creep
   Call: (8) factorial(2, _L206) ? creep
^  Call: (9) 2>0 ? creep
^  Exit: (9) 2>0 ? creep
^  Call: (9) _L224 is 2-1 ? creep
^  Exit: (9) 1 is 2-1 ? creep
   Call: (9) factorial(1, _L225) ? creep
^  Call: (10) 1>0 ? creep
^  Exit: (10) 1>0 ? creep
^  Call: (10) _L243 is 1-1 ? creep
^  Exit: (10) 0 is 1-1 ? creep
   Call: (10) factorial(0, _L244) ? creep
   Exit: (10) factorial(0, 1) ? creep
^  Call: (10) _L225 is 1*1 ? creep
^  Exit: (10) 1 is 1*1 ? creep
   Exit: (9) factorial(1, 1) ? creep
^  Call: (9) _L206 is 1*2 ? creep
^  Exit: (9) 2 is 1*2 ? creep
   Exit: (8) factorial(2, 2) ? creep
^  Call: (8) _G284 is 2*3 ? creep
^  Exit: (8) 6 is 2*3 ? creep
   Exit: (7) factorial(3, 6) ? creep

X = 6 ;
   Redo: (10) factorial(0, _L244) ? creep
^  Call: (11) 0>0 ? creep
^  Fail: (11) 0>0 ? creep
   Fail: (9) factorial(1, _L225) ? creep
   Fail: (8) factorial(2, _L206) ? creep
   Fail: (7) factorial(3, _G284) ? creep

false.
[debug]  ?- notrace. % turn off tracing

true.
[debug]  ?- 





