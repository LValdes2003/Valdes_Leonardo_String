#include <iostream>
#include <string>
using namespace std;

string concatenar(string str1, string str2) {
    return str1 + str2;
}

int main() {
    cout << "Escribe dos cadenas separadas por un espacio: " << endl;
    string a, b;
    cin >> a >> b;
    cout << "Cadena resultante: " << concatenar(a,b) << endl;
    return 0;
}