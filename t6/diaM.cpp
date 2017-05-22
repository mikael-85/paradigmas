#include <iostream>
#include <vector>
#include <cstdlib>


#define pi 3.14;

// classe pai biscoito

/*pequeno: 2 a 4 cm - 1 real
  médio:  5 a 7 cm - 2 reais
  grande 8 a  13  - 3 reais
*/

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

    vector<Circulo> circulos;
    vector<Triangulo> triangulos;
    vector<Retangulo> retangulos;


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
