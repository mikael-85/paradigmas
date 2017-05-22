#include <iostream>

#define pi 3.14;

// classe pai biscoito
class biscoito{
    int taman;
    float preco;
public:
    biscoito(){
        taman=preco=0;
        }
    setPreco(int TP){
        taman = TP;
// escolher preço pelo tamanho
    switch (taman){
        case 1:
            if taman == 1;
            return preco = 0,5;
        break;
        case 2:
            if taman == 2;
            return preco = 1;
        break;
        case 3:
            if taman == 3;
            return preco = 2;
        break;
        }
    };


//classes filhos
class Circle : public biscoito{
private:
    float x;
    float y;
    float r;
public:
    Circle(){
        x=y=r= 0.0;
        }
 float area(){
        return pi*(r*r);
        }
};

class square : public biscoito{
private:

};
// fim das classes filho

int main(){



}
