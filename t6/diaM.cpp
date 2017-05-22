#include <iostream>

#define pi 3.14;

// classe pai biscoito

class Biscoito{
private:
    int taman;
    float preco;
public:
    Biscoito(){
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
class Circle : public Biscoito{
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

class Retangulo : public Biscoito{
private:
    float lad;
    float altura;
    float area;
public:
    Retangulo (float a, float b){
        }

    areaQ(int a){
        a = lad * altura;
        }
};

class Triangulo : public Biscoito{
private:
    float base;
    float altura;
    float ar;
public:
    int area(){
        ar = (base*altura)/2
    }
};


// fim das classes filho

int main(){



}
