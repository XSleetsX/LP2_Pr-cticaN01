#ifndef TARJETA_H
#define TARJETA_H
#include <iostream>
using namespace std;

class Tarjeta {
    private:
        int numero;
        string fecha_venc;
        int CVV;
    public:
        Tarjeta(int numero, string fecha_venc, int CVV) {
            this -> numero = numero;
            this -> fecha_venc = fecha_venc;
            this -> CVV = CVV;
        }
        int getNumero() {
            return numero;
        }
        string getFechaVenc() {
            return fecha_venc;
        }
        int getCVV() {
            return CVV;
        }
        ~Tarjeta() {}
        friend ostream& operator << (ostream&, Tarjeta&);
};
#endif
