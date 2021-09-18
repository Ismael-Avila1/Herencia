#include "ctaxi.h"

cTaxi::cTaxi(int sm, int nc, int m, int s) : cAuto(sm, nc, m), sitio(s) {}

void cTaxi::imprimir() {
    std::cout << "Taxi." << "\n" << "Modelo: " << modelo << std::endl;

    std::cout << "Datos del motor." << std::endl;
    motor.imprimir();

    std::cout << "Taxi del sitio: " << sitio << std::endl;
}


