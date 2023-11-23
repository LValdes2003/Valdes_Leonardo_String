#include <iostream>
#include <string>

int main() {
    std::string sentence = "Guantanamera, guajira, Guantanamera";
    std::cout << "Tamaño de la cadena: " << sentence.size() << std::endl;
    std::cout << "¿Está la cadena vacía? " << (sentence.empty() ? "Sí" : "No") << std::endl;
    return 0;
}
