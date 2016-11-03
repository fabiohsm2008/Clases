#include <iostream>
#include "Vector.h"

using namespace std;

Vector :: Vector(Punto &i, Punto &f)
{
    inicio = i; fin = f;
}

Vector :: Vector(Vector &v)
{
    inicio = v.inicio; fin = v.fin;
}

void Vector :: set_inicio(Punto &i)
{
    inicio = i;
}

void Vector :: set_fin(Punto &f)
{
    fin = f;
}

Punto Vector :: get_inicio()
{
    return inicio;
}

Punto Vector :: get_fin()
{
    return fin;
}

void Vector :: imprimir_vector()
{
    inicio.imprimir_punto();
    fin.imprimir_punto();
}

void Vector :: modificar_vector(Punto &i, Punto &f)
{
    inicio = i;
    fin = f;
}
