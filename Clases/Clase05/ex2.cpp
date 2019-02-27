#include <iostream>
#include "PoligonoIrreg.h"
#include "Coordenada.h"
#include <vector>
using namespace std;

int main()
{
    PoligonoIrreg p({Coordenada(1,1),Coordenada(2,2)});
    p.anadeVertice(Coordenada(10, 1));
    p.anadeVertice(Coordenada(4, 5));
    p.imprimeVertices();
    return 0;
}