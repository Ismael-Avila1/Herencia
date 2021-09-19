#include "cautoparte.h"

cAutoparte::cAutoparte(int s) : cObjeto(), serie(s) {}

void cAutoparte::imprimir() {
    std::cout << "Autoparte." << "\n" << "Numero de serie: " << serie << std::endl;
}
