#include <iostream>
#include <math.h>
#include "Rectangulo.h"
#include "Coordenada.h"
using namespace std;

double r(double x, double y);
double theta(double x, double y);

int main()
{
    Coordenada a(r(2, 3), theta(2, 3), true), b(r(5, 1), theta(5, 1), true);
    Rectangulo rectangulo1(Coordenada(a.obtenerX(), a.obtenerY()), Coordenada(b.obtenerX(), b.obtenerY()));
    double ancho, alto;
    cout << "Calculando el área de un rectángulo dadas sus coordenadas en un plano cartesiano :\n ";
    rectangulo1.imprimeEsq();
    cout << "El área del rectángulo es = " << rectangulo1.obtieneArea() << endl;
    return 0;
}

double r(double x, double y)
{
    return sqrt((x * x) + (y * y));
}

double theta(double x, double y)
{
    return atan(y / x);
}