#include <iostream>
#include "Point.h"

using namespace std;

void Punto::setX(double nx){
    x = nx;
}

void Punto :: setY(double ny){
    y = ny;
}

double Punto :: getX(){
    return x;
}

double Punto :: getY(){
    return y;
}

void Punto :: imprimir(){
    cout << "(" << x << "," << y << ")"<< endl;
}

void Punto :: modificar(double kx, double ky){
    x = kx; y = ky;
}
