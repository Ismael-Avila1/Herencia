#include "cauto.h"

cAuto::cAuto(int sm, int nc, int m) : motor(sm, nc), modelo(m) {}

void cAuto::imprimir() {
    std::cout << "Auto." << "\n" << "Modelo: " << modelo << std::endl;

    std::cout <<"Datos del motor." << std::endl;
    motor.imprimir();
}
