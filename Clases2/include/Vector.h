#ifndef VECTOR_H
#define VECTOR_H
#include "Point.h"

class Vector{
private:
    Punto inicio, fin;
public:
    Vector();
    Vector(Punto &i, Punto &f);
    Vector(Vector &v);
    void set_inicio(Punto &i);
    void set_fin(Punto &f);
    Punto get_inicio();
    Punto get_fin();
    void imprimir_vector();
    void modificar_vector(Punto &i, Punto &f);
};


#endif // VECTOR_H
