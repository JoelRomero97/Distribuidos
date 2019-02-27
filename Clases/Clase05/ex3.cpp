#include <iostream>
#include "PoligonoIrreg.h"
#include "Coordenada.h"
#include <vector>
using namespace std;

int main()
{

    int n = 20000;
    vector<PoligonoIrreg> vec;
    vec.reserve(n);
    for (int i = 0, m = 0; i < n; i++)
    {
        PoligonoIrreg p;
        m = rand() % 100;
        /* for (int j = 0; j < m; j++)
            p.anadeVertice(Coordenada(rand(), rand())); */
        p.anadeVertices(m);
        /* vec.push_back(p); */
        vec[i] = p;
    }
    cout << vec[0].getContV() << endl;
    return 0;
}