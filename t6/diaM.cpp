#include <iostream>
#include <vector>
#include <cstdlib>


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
            return preco = 1;
            break;
        case 2:
            return preco = 2;
            break;
        case 3:
            return preco = 3;
            break;
        }

    };


//classes filhos
class Circle : public Biscoito{
private:
    float ar;
    float raio;
public:
    Circle(float r){
        raio = r;
        ar = 0.0;
        }
 float area(){
        ar = pi*(raio*raio);

        }


};

class Retangulo : public Biscoito{
private:
    float lad;
    float altura;
    float area;
public:
    Retangulo (float a, float b){
        lad = a;
        altura =b;
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
    Triangulo (float b, float c){
        base =b;
        altura =c;
    }
    int area(){
        ar = (base*altura)/2
    }
};


// fim das classes filho

int main(){
    int num;
    count<< "quantos biscoitos deseja produzir? ";
    cin >> num;

    for(int i =0; i < num; i++){
        tipo = rand()%3;

        switch (tipo){
            case 0:
                cir.push_back(Circulo( (rand()%) / ));
                break;
            case 1:
                cir.push_back(Retangulo( (rand()%) / ));
                break;
            case 2:
                cir.push_back(Triangulo( (rand()%) / ));
                break;
        }

    }


}
