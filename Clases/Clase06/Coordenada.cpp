#include <math.h>
#include <iostream>
#include "Coordenada.h"
using namespace std;

Coordenada::Coordenada(double xx, double yy, bool polar)
{
    if (polar)
    {
        x = xx * cos(yy);
        y = xx * sin(yy);
    }
    else
    {
        x = xx;
        y = yy;
    }
    m = sqrt((x * x) + (y * y));
}

double Coordenada::obtenerX()
{
    return x;
}

double Coordenada::obtenerY()
{
    return y;
}

double Coordenada::obtenerM()
{
    return m;
}