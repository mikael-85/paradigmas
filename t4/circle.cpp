#include <iostream>

const double PI = 3.14159;

class Circle {
private:
   double x;
   double y;
   double r;
public:
   Circle() {
      x = y = r = 0.0;
   std::cout << "Valores de sa�da" << std::endl;
   }
  Circle(double a, double b, double c){
      x = a;
      y = b;
      r = c;
  }
   double area() {
      return PI * r * r;
   }

   double setRadius(double radius){ // ???
      r= radius + 2;
      std::cout << "Novo raio: " << r << std::endl;
      return r;
   }
};

int main() {
    Circle c1;
    Circle* c2 = new Circle();
    Circle* c3 = new Circle(2,3,4);
    Circle circs[10];
    c3->setRadius(4);
   //testes

   //fim dos teste
    std::cout << c1.area() << std::endl;
    std::cout << c2->area() << std::endl;
    std::cout << c3->area()<< std::endl;

    delete c2;
    delete c3;
  }
