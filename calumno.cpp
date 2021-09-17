#include "calumno.h"

cAlumno::cAlumno(std::string n, int c) : cPersona(n), codigo(c) {}

void cAlumno::imprimir() {
    std::cout << "Soy " << nombre << ". Mi codigo de alumno es: " << codigo << std::endl;
}
