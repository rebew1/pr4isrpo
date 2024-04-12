#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    double o, v, z, s, n;
    z = 10;
    s = 4;
    o = z / s;
    cout << o << endl;
    v = z * s;
    cout << v << endl;
    n = z * z - s;
    cout << n << endl;
}