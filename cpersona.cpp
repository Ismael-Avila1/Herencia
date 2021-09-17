#include "cpersona.h"

cPersona::cPersona(std::string nombre) : cObjeto(), nombre(nombre) {}

void cPersona::imprimir() {
    std::cout << "Soy una persona!" << "\n" << "Mi nombre es: " << nombre << std::endl;
}
