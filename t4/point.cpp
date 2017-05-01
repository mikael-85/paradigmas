//Developer Mikael Santellano
#include <cmath>
#include <iostream>
using namespace std;
// pesquisar STL - > std:: vector


class Point{
private:
   double x;
   double y;
public:
   Point(){
      x = y = 0.0;
    }
    construtor(double a, double b){
        x = a;
        y = b;
  }

void move (double dx, double dy){
    x = x+dx;
    y = y+dy;
}
double getX(){return x;}
double getY(){return y;}

//trocar pelos circulos:

//double distanceTo(Circle* c2, Circle* c3){
//    return sqrt(((c2->x - c3->x)*(c2->x - c3->x))+ ((c3->y - c2->y)*(c3->y - c2->y)));
//}
 void imprime_P(){
    cout<<"x: "<< getX() <<endl;
    cout<<"y: "<< getY() << endl;

     }

};
/*
int main() {
    //construindo pontos:
    Point p1;

    Point* p2 = new Point();
    p2->construtor(2,5);

    Point* p3 = new Point();
    p3->construtor(4,8);

    //mostrar valores dos pontos
    cout<<"Ponto p2: "<<endl;
    p2->imprime_P();
    cout<<"Ponto p3: "<<endl;
    p3->imprime_P();
    cout<<"Distancia entre os pontos: " <<endl;
    //Calcular distancia dos pontos:
    cout<<p2->distanceTo(p2, p3)<< endl;

}*/
