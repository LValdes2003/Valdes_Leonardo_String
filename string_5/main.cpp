#include <iostream>
#include <string>
using namespace std;

string color(string nombre, const string& color) {
    string nombre_nuevo = nombre.insert(0, color);
    return nombre_nuevo;
}

int main() {
    string mi_nombre = "Leonardo Valdes";
    string apellido = mi_nombre.substr(9, 6);
    cout << "Apellido: " << apellido << endl;

    cout << "Escribe tu nombre: " << endl;
    string a;
    cin >> a;
    cout << "Escribe tu color favorito: " << endl;
    string b;
    cin >> b;
    cout << "Tu nombre nuevo es: " << color(a,b) << std::endl;
    return 0;
}