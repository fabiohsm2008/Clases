#include "Arreglo_vector.h"
#include <iostream>

using namespace std;

Arreglo_vector :: Arreglo_vector()
{
    largo = 0;
    array_vector = new Vector[largo];
}

Arreglo_vector :: Arreglo_vector(const Vector arreglo_vector[], const int tamanio)
{
    largo = tamanio;
    array_vector = new Vector[largo];
    int i;
    for (i = 0; i != largo; ++i){
        array_vector[i] = arreglo_vector[i];
    }

}

Arreglo_vector :: Arreglo_vector(Arreglo_vector &arregloV)
{
    largo = arregloV.largo;
    array_vector = new Vector[largo];
    int i;
    for (i = 0; i != largo; ++i){
        array_vector[i] = arregloV.array_vector[i];
    }
}

void Arreglo_vector :: cambiar_largo(const int x)
{
    Vector *a;
    a = new Vector[x];
    this -> largo = x;
    int i;
    for(i = 0; i < x; ++i){
        a[i] = array_vector[i];
    }
    delete[] array_vector;
    array_vector = a;
}

void Arreglo_vector :: imprimir_arreglo()
{
    int i;
    for(i = 0; i != largo; ++i){
        array_vector[i].imprimir_vector();
    }
}

void Arreglo_vector :: insertar_fin()
{
    double a, b, c, d;
    cin >> a, b;
    cin >> c, d;
    Punto valor1(a, b), valor2(c, d);
    Vector valor(valor1, valor2);
    cambiar_largo(largo +1);
    array_vector[largo-1] = valor;
}

void Arreglo_vector :: insertar_posicion()
{
    int posicion;
    cin >> posicion;
    double a, b, c, d;
    cin >> a, b;
    cin >> c, d;
    Punto valor1(a, b), valor2(c, d);
    Vector valor(valor1, valor2);
    if (posicion >= largo){
        cambiar_largo(largo+1);
        array_vector[largo-1] = valor;
    }
    else if (posicion <= 0){
        cambiar_largo(largo+1);
        int x;
        x = 0;
        while(x != (largo-1)){
            array_vector[largo-(x+1)] = array_vector[largo-(x+2)];
            ++x;
        }
        array_vector[0] = valor;
    }
    else {
        cambiar_largo(largo+1);
        int x,a;
        x = 0;
        a = posicion;
        while(a != (largo-1)){
            ++a;
            array_vector[largo-(x+1)] = array_vector[largo-(x+2)];
            ++x;
        }
        array_vector[posicion] = valor;
    }

}

const int Arreglo_vector :: obtener_tamanio()
{
    return largo;
}

void Arreglo_vector :: remover()
{
    int posicion;
    cin >> posicion;
    if (posicion >= (largo-1)){
        cambiar_largo(largo-1);
    }
    if (posicion < (largo-1)){
        while (posicion != (largo-1)){
            array_vector[posicion] = array_vector[posicion+1];
            ++posicion;
        }
        cambiar_largo(largo-1);
    }
    if (posicion = 0){
        while(posicion != (largo-1)){
            array_vector[posicion] = array_vector[+1];
            ++posicion;
        }
        cambiar_largo(largo-1);
    }
}

void Arreglo_vector :: limpiar()
{
    delete array_vector;
    cambiar_largo(0);
}
