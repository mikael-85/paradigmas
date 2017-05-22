#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>

using namespace std;

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
	string getTamanho(){
		string a;
		switch(taman){
			case 1:
				a = "Pequeno";
				break;
			case 2:
				a = "Medio";
				break;
			case 3:
				a = "Grande";
				break;
		}
		return a;
	}
};

class vetorBiscoito{
	private:
		string tamanho;
		string tipo;
		float area;
	public:
		vetorBiscoito(string ta, string ti, float ar){
			tamanho = ta;
			tipo = ti;
			area = ar;
		}

		void imprimir(){
			cout <<"Tamanho: "<< tamanho<<", com formato de: " << tipo <<", com area: " << area << endl; //arrumar
		}
		bool operator<(vetorBiscoito& pbiscoitos){
        	return area > pbiscoitos.area;
		}
};

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
    float getArea(){
    	return ar;
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
    float getArea(){
    	return ar;
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
    float getArea(){
    	return ar;
	}
};

int main(){
	vector<Circulo> circulos;
    vector<Triangulo> triangulos;
	vector<Retangulo> retangulos;
	vector<vetorBiscoito> biscoitos;
	vector<Circulo>::iterator pc;
	vector<Triangulo>::iterator pt;
	vector<Retangulo>::iterator pr;
	vector<vetorBiscoito>::iterator pbiscoitos;
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
                triangulos.push_back(Triangulo( (rand()%10 + 40) / 10, (rand()%10 + 40) / 10)); // arrumar intervalo
                break;
            case 2:
                retangulos.push_back(Retangulo( (rand()%22 + 15) / 10, (rand()%22 + 15) / 10));
                break;
        }
    }

    for( pc = circulos.begin(); pc != circulos.end(); pc++){
    	biscoitos.push_back(vetorBiscoito(pc->getTamanho(),"Circulo",pc->getArea()));
	}
	for( pt = triangulos.begin(); pt != triangulos.end(); pt++){
    	biscoitos.push_back(vetorBiscoito(pt->getTamanho(),"Triangulo",pt->getArea()));
	}
	for( pr = retangulos.begin(); pr != retangulos.end(); pr++){
    	biscoitos.push_back(vetorBiscoito(pr->getTamanho(),"Retangulo",pr->getArea()));
	}

	sort(biscoitos.begin(), biscoitos.end());
	cout << "\nOs biscoitos produzidos foram: " << endl;
	cout<<" "<<endl;
	for( pbiscoitos = biscoitos.begin(); pbiscoitos != biscoitos.end(); pbiscoitos++){
		pbiscoitos->imprimir();

	}

}
