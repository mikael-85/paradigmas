#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <iterator>

using namespace std;
// classe pai biscoito

class Biscoito{
private:
    int taman;
    float preco;
public:
    Biscoito(){
        taman=preco=0;
    }
	void setAll(float area){
		if(area>=2 && area <=4){
			taman = 1;
			preco = 1;
		}else if(area>=5 && area <=7){
			preco = 2;
			taman = 2;
		}else if(area>= 8 && area <=13){
			preco = 3;
			taman = 3;
		}
	}
};


//classes filhos
class Circulo : public Biscoito{
private:
    float ar;
    float raio;
public:
    Circulo(float r){
        raio = r;
        ar = 3,1415*(raio*raio);
        setAll(ar);
    }
};

class Retangulo : public Biscoito{
private:
    float lad;
    float altura;
    float ar;
public:
    Retangulo (float a, float b){
        lad = a;
        altura = b;
        ar = lad * altura;
        setAll(ar);
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
        ar = (base*altura)/2;
        setAll(ar);
    }
};


// fim das classes filho

int main(){
	vector<Circulo> circulos;
    vector<Triangulo> triangulos;
	vector<Retangulo> retangulos;
    int num,i,tipo;

    cout << "quantos biscoitos deseja produzir? ";
    cin >> num;

    for(i =0; i < num; i++){
        tipo = rand()%3;

        switch (tipo){
            case 0:
                circulos.push_back(Circulo( (rand()%13 + 8) / 10));
                break;
            case 1:
                triangulos.push_back(Triangulo( (rand()%4 + 2) / 10, (rand()%4 + 2) / 10));
                break;
            case 2:
                retangulos.push_back(Retangulo( (rand()%22 + 15) / 10, (rand()%22 + 15) / 10));
                break;
        }
    }


}
