#include "cpersona.h"

cPersona::cPersona(std::string nombre) {
    this->nombre = nombre;
}

void cPersona::imprimir() {
    std::cout << "Soy una persona!" << "\n" << "Mi nombre es: " << nombre << std::endl;
}
