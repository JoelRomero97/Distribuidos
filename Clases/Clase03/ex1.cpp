#include "Fecha.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    Fecha a(1, 1, 2019), b(21, 9, 0);
    a.muestraFecha();
    b.muestraFecha();
    return 0;
}
