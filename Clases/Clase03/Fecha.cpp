#include "Fecha.h"
#include <iostream>
using namespace std;

Fecha::Fecha(int dd, int mm, int aaaa) : dia(dd), mes(mm), anio(aaaa)
{
    if ((dia < 1) || (dia > 31))
    {
        cout << "Valor ilegal para el dia" << endl;
        exit(1);
    }
    if ((mes < 1) || (mes > 12))
    {
        cout << "Valor ilegal para el mes" << endl;
        exit(1);
    }
    if ((anio < 0) || (anio > 2019))
    {
        cout << "Valor ilegal para el año" << endl;
        exit(1);
    }
}

void Fecha::muestraFecha()
{
    cout << "La fecha es (dia-mes-año): " << dia << "-" << mes << "-" << anio << endl;
    return;
}

int Fecha::convierte()
{
    return anio * 10000 + mes * 100 + dia;
}
