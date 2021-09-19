#include "cpatrulla.h"

cPatrulla::cPatrulla(int sm, int nc, int m, bool s) : cAuto(sm, nc, m), sirena(s) {}

void cPatrulla::imprimir() {
    std::cout << "Patrulla." << "\n" << "Modelo: " << modelo << std::endl;

    std::cout << "Datos del motor." << std::endl;
    motor.imprimir();

    std::cout << "La sirena está " << ((sirena == true) ? "encendida" : "apagada") << std::endl;
}
