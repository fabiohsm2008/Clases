#ifndef POLIGONO_H
#define POLIGONO_H
#include "Arreglo.h"

class Poligono
{
protected:
    Arreglo puntos;
    static int instancias;
public:
    Poligono();
    Poligono(const Punto arreglo_puntos[], const int tamanio);
    Poligono(Arreglo &arreglo_puntos);
    virtual double area(){};
    int getNumPoligonos();
    virtual int getNumLados();
    const Arreglo* getPuntos();
};

class Rectangulo : public Poligono
{
public:
    Rectangulo(Punto &a, Punto &b);
    Rectangulo(int x0, int y0, int x1, int y1);
    double area();
};

class Triangulo : public Poligono
{
public:
    Triangulo(Punto &a, Punto &b, Punto &c);
    double area();
};

#endif // POLIGONO_H
