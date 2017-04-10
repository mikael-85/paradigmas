/*Exercio 1 parte 2 */
somaQuad(X,Y,Q):- Q is X*X + Y*Y.

/*Exercio 2 parte 2 */
zeroInit(L):- L = [H|_], H is 0.

/*Exercio 3 parte 2 */
hasEqHEads(L1,L2):- L1=[H|_], L2=[X|_],  H = X.

/*Exercio 4 parte 2 */
has5(L) :-  L = ([_,_,_,_,_]).

/*exercicio 5 parte 2*/
hasN(L,N):-length(L,N).

/*exercicio 6 parte 2*/
isBin([]):- false.
isBin([0]).
isBin([1]).
isBin(L):- L = [I|T],
    I >= 0,
    I =< 1, isBin(T).



/*exercicio 7 parte 2*/
mesmaPosicao(A,L1,L2):- t.

