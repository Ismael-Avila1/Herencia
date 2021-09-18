#include "cmotor.h"

cMotor::cMotor(int s, int n) : cAutoparte(s), numCilindros(n) {}

void cMotor::imprimir() {
    std::cout << "Numero de serie del motor: " << serie << "\n" << "Numero de cilindros: " << numCilindros << std::endl;
}


