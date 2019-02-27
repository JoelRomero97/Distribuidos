#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n1, n2;
    float f;
    cout << "Ingresa 2 números enteros separados por un espacio: ";
    cin >> n1 >> n2;
    cout << "Ingresa 1 número flotante: ";
    cin >> f;
    cout << "División entre enteros: " << (n1 / n2) << endl;
    cout << "División de entero entre flotante: " << (n1 / f) << endl;
    return 0;
}
