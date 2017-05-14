### "Little Lost Goto"

![Localização do mapa](https://github.com/mikael-85/paradigmas/blob/master/extras/figuras/cppmap.png)

#### Labels e GOTO

Os rótulos (labels) e saltos (goto) são resquícios da época em que a programação era totalmente procedural. Esta forma de programar não é mais praticada, mas ainda há como fazer.  
Primeiramente marcamos uma linha do código com um rótulo (também conhecido como label) e toda vez que quisermos voltar ou seguir até tal linha apenas indicamos onde o programa deve seguir.  

Em C / C++ para indicarmos um rótulo (label) escrevemos um nome no local que desejamos marcar. Para ir até este local usamos o comando GOTO.  
O rótulo (label) é indicado pelo uso de dois pontos (:) no final da linha.  
GOTO é um comando como qualquer outro. Portanto, deve-se terminar a linha com um ponto-e-vírgula (;). 

Ele ficariam assim:

**rotulo:**
código

goto **rotulo** ;

Aplicado em um código ficaria assim:

```C++
#include <iostream>
#include <cstdlib>
using namespace std;

int main (void){
    char opcao;
    inicio:
    cout <<"voce deseja que este programa repita? [s/n]";
    cin >> opcao;
    cin.ignore();
    if (opcao == 's' || opcao =='S')
        goto inicio;
    else if (opcao == 'n' || opcao =='N')
        goto fim;
    else
        goto inicio;
    fim:
    return EXIT_SUCCESS;
}
```

#### Por que evitar o uso do GOTO(?)

![Humor](https://github.com/mikael-85/paradigmas/blob/master/extras/figuras/goto.png)

Alguns programadores referem que, a utilização do GOTO pode gerar dificuldade no entendimento de um código, como neste exemplo abaixo: 

```C++
one: if(a == b) {
    two: a = b + 1;
    goto one;
} else if(c) {
    c = false;
    if(a != 0) goto two;
    else goto three;
}
//etc... 
```
Podendo ocasionar dificuldades em seguir o mesmo.  
Usar GOTO também pode permitir que algumas coisas, como por exemplo,  pular fora de um escopo sem ter saído do escopo aconteça.

Em alguns foruns de discussão, alguns programadores aconselham a iniciantes evitarem o uso de GOTO, como podemos observar na citação do [forum](http://www.cplusplus.com/forum/general/7608/) do cplusplus abaixo: 

>If you're a beginner, though, it's better if you avoid it. At least until you create some criteria of when to use it and when not to use it.



### Referências: 

Denys William Xavier on: [http://www.tiexpert.net/programacao/c/](http://www.tiexpert.net/programacao/c/)  
André Duarte Bueno: [apostila de Programação em C++](www.lmpt.ufsc.br)   
cplusplus on: [www.cplusplus.com](http://www.cplusplus.com)    
Github Help: ["Create sophisticated formatting for your prose and code on GitHub with simple syntax"](https://help.github.com/articles/basic-writing-and-formatting-syntax/)    
stackoverflow.com/questions: [What is wrong with using goto?](http://stackoverflow.com/questions/3517726/what-is-wrong-with-using-goto)


