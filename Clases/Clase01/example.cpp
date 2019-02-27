#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int languagesNumber;
    cout << "Hola!!"
         << "Bienvenido a C++.\n";
    cout << "Cuántos lenguajes de programación dominas?";
    cin >> languagesNumber;
    if (languagesNumber < 1)
        cout << "Sería recomendable aprender antes un lenguaje más sencillo...\n" << "por ejemplo C, aunque nada es imposible.\n ";
    else 
    cout << "Este curso será sencillo para ti.\n";
    return 0;
}
