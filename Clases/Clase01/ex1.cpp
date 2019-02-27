#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    const double PI = 3.1415926;
    int radius;
    cout << "Ingresa el radio del círculo: ";
    cin >> radius;
    cout << "Area del círculo: " << (PI * radius * radius) << endl;
    return 0;
}
