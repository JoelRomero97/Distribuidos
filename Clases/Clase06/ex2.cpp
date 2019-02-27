#include <iostream>
#include "PoligonoIrreg.h"
#include "Coordenada.h"
#include <vector>
using namespace std;

int main()
{
    int n = rand() % 100;
    PoligonoIrreg p({Coordenada(1.201, 2.193)});
    p.anadeVertices(n);
    p.imprimeVertices(n);
    return 0;
}