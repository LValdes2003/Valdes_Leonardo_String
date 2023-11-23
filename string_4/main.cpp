#include <iostream>
#include <string>
using namespace std;

string encontrar(const string& str1, const string& str2) {
    size_t pos = str1.find(str2);
    if(pos != std::string::npos)
        return "Subcadena encontrada en la posición: " + to_string(pos);
    else
        return "Subcadena no encontrada.";
}

string reemplazar(string str1, const string& str2, const string& str3) {
    size_t pos = str1.find(str2);
    if(pos != std::string::npos)
        return str1.replace(pos, str2.length(), str3);
    else
        return "Subcadena no encontrada.";
}

int main() {
    cout << "Escribe tu apellido: " << endl;
    string a;
    cin >> a;
    cout << "Escribe tres caracteres de tu apellido: " << endl;
    string b;
    cin >> b;

    cout << encontrar(a,b) << endl;
    cout << "Tu apellido nuevo es: " << reemplazar(a,b,"XXX") << endl;
    return 0;
}
