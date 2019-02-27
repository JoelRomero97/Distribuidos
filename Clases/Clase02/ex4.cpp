#include "Fecha.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    Fecha a, b, c(21, 9, 1973);
    b.inicializaFecha(17, 6, 2000);
    a.muestraFecha();
    b.muestraFecha();
    c.muestraFecha();
    int cont = 0;
    for (int i = 1; i <= 2019; i++)
    {
        Fecha d(5, 2, i);
        if (d.leapyr())
            cont++;
    }
    cout << "Hay " << cont << " años bisiestos desde el año 1 hasta el 2019" << endl;
    return 0;
}
