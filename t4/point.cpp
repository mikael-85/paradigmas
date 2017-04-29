#include <cmath>
#include <iostream>
// pesquisar STL - > std:: vector


class Point {
private:
   double x;
   double y;
public:
   Point() {
      x = y = 0.0;
    }
 Point(double a, double b){
      x = a;
      y = b;
  }
//um método (função-membro) void move(double dx, double dy) que altere as coordenadas (x,y) para (x+dx, y+dy);
void move (double dx, double dy){
    x = x+dx;
    y = y+dy;
}
//um método distanceTo que calcule a distância do ponto em relação a um ponto dado,
//calculada segundo o teorema de Pitágoras. Você vai precisar da função std::sqrt,
//por isso vai precisar de #include <cmath> no início do programa.

double distanceTo(Point p2){
    return std::sqrt((x - p2.x)^2+(y - p2.y));
}

};

int main() {
   Point p1;
   Point* p2 = new Point(2,3);
   //Point* p3 = new Point ();

}
