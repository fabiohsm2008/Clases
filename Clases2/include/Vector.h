#ifndef VECTOR_H
#define VECTOR_H
#include "Point.h"

class Vector{
private:
    Punto inicio, fin;
public:
    Vector()
    {
        inicio; fin;
    }
    Vector(Punto &i, Punto &e)
    {
        inicio = i; fin = e;
    }
    void imprimir(Punto inicio, Punto fin);
};


#endif // VECTOR_H
