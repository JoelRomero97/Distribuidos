#include <iostream>
#include "PoligonoIrreg.h"
#include "Coordenada.h"
#include <vector>
using namespace std;

int main()
{
    int n = 5;
    PoligonoIrreg p;
    p.anadeVertices(n);
    p.ordenaA();
    p.imprimeVertices();
    return 0;
}