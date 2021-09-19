#include "cblindado.h"

cBlindado::cBlindado(int sm, int nc, int m, bool s, int b) : cPatrulla(sm, nc, m, s), blindaje(b) {}

void cBlindado::imprimir() {
    std::cout << "Patrulla blindada." << "\n" << "Modelo: " << modelo << std::endl;

    std::cout << "Datos del motor." << std::endl;
    motor.imprimir();

    std::cout << "La sirena está " << ((sirena == true) ? "encendida" : "apagada") << std::endl;

    std::cout << "Nivel de blindaje: " << blindaje << std::endl;
}
