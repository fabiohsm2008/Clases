#ifndef POINT_H
#define POINT_H

class Punto{
private:
    double x, y;
public:
    Punto(){
        x = 0.0; y = 0.0;
    }
    Punto(double ax, double ay){
        x = ax; y = ay;
    }
    Punto(Punto &o){
        x = o.x; y = o.y;
    }
    void setX(double nx);
    void setY(double ny);
    double getX();
    double getY();
    void imprimir();
    void modificar(double kx, double ky);
};

#endif // POINT_H
