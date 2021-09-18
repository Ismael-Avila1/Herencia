#include "cllanta.h"

cLlanta::cLlanta(int s, int r) : cAutoparte(s), rodado(r) {}

void cLlanta::imprimir() {
    std::cout << "Numero de serie de la llanta: " << serie << "\n" << "Rodado: " << rodado << std::endl;
}


