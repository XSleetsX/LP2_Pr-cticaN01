//Programa que contiene a la clase Cliente
#include "tarjeta.h"
#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
using namespace std;

class Cliente {
    private:
        Tarjeta tarjeta;
        string nombre;
        int edad;
    public:
        Cliente (Tarjeta &tarjeta, string nombre, int edad) : tarjeta(tarjeta) {
            this -> tarjeta = tarjeta;
            this -> nombre = nombre;
            this -> edad = edad;
        }
        string getNombre() {
            return nombre;
        }
        int getEdad() {
            return edad;
        }
        ~Cliente() {}
        friend ostream& operator << (ostream&, Cliente&);
};
#endif
