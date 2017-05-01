#include <iostream>
#include <stdlib.h>
#include "point.cpp"

//Developer Mikael Santellano

const double PI = 3.14159;

class Circle {
private:
   Point p;
   //double x;
   //double y;
   double r;
public:
   Circle() {
      p = Point();
      r = 0.0;
      //x = y = r = 0.0;
   std::cout << "Valores de saida" << std::endl;
   }
  Circle(double a, double b, double c){
      p.construtor(a,b);
      //x = a;
      //y = b;
      r = c;
  }
   double area() {
      return PI * r * r;
   }

   double setRadius(double radius){
      r= radius + 2;
      std::cout << "*Raio modificado!* Novo raio= " << r << std::endl;
      return r;
   }
   double distanceTo(Circle* c2, Circle* c3){
    return sqrt(((c2->p.getX() - c3->p.getX())*(c2->p.getX() - c3->p.getX()))+ ((c2->p.getY() - c3->p.getY())*(c2->p.getY() - c3->p.getY())));
}

};

int main() {
    Circle c1();
    Circle* c2 = new Circle(4,2,1);
    Circle* c3 = new Circle(2,3,4);
    Circle circs[10];
    c3->setRadius(4);
    cout<<" Distancia do circulo c2 para o c3: "<< endl;
    cout<<c2->distanceTo(c2,c3) << endl;

    /*cout<<"Area de c1: " << endl;
    cout << c1.area() << endl;*/

    cout<<"Area de c2: "<< endl;
    cout << c2->area() << std::endl;

    cout<<"Area de c3: "<< endl;
    cout << c3->area()<< endl;

    delete c2;
    delete c3;
  }
