#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Ingresa el valor de n: ";
    cin >> n;
    cout << "Resultado de 'n + (++n)': " << (n + (++n)) << endl;
    return 0;
}
