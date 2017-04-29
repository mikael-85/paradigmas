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
//um m�todo (fun��o-membro) void move(double dx, double dy) que altere as coordenadas (x,y) para (x+dx, y+dy);
void move (double dx, double dy){
    x = x+dx;
    y = y+dy;
}
//um m�todo distanceTo que calcule a dist�ncia do ponto em rela��o a um ponto dado,
//calculada segundo o teorema de Pit�goras. Voc� vai precisar da fun��o std::sqrt,
//por isso vai precisar de #include <cmath> no in�cio do programa.

double distanceTo(Point p2){
    return std::sqrt((x - p2.x)^2+(y - p2.y));
}

};

int main() {
   Point p1;
   Point* p2 = new Point(2,3);
   //Point* p3 = new Point ();

}
