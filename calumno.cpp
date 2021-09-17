#include "calumno.h"

cAlumno::cAlumno(int codigo) {
    this->codigo = codigo;
}

void cAlumno::imprimir() {
    std::cout << "\tMi codigo de alumno es: " << codigo << std::endl;
}
