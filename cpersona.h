#ifndef CPERSONA_H
#define CPERSONA_H

#include<string>
#include <iostream>

class cPersona {
private:
    std::string nombre;

public:
    cPersona(std::string nombre);

    void imprimir();
};

#endif // CPERSONA_H
