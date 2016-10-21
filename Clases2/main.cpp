#include <iostream>
#include "Point.h"
#include "Vector.h"

using namespace std;

int main()
{
    Punto punto1, punto2;
    punto1.setX(3.0);
    punto1.setY(2.0);
    punto1.imprimir();
    cout << punto1.getX() << endl;
    cout << punto1.getY() << endl;
    //punto1.modificar(5,10);
    punto2.setX(10.0);
    punto2.setY(5.0);
    punto2.imprimir();
    cout << punto2.getX() << endl;
    cout << punto2.getY() << endl;
    Vector vector1(punto1, punto2);
    vector1.imprimir(punto1, punto2);
    return 0;
}
