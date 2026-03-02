#include <iostream>
using namespace std;

//Clase Base
class Vehiculo {
public:
    virtual void info() {
        cout << "Soy un vehiculo." << endl;
    }

    virtual ~Vehiculo() {}
};

//Derivada 1
class Automovil : public Vehiculo {
public:
    void abrirMaletero() {
        cout << "El maletero esta abierto." << endl;
    }
};

//Derivada 2
class Moto : public Vehiculo {
public:
    void hacerCaballito() {
        cout << "La moto esta haciendo un caballito." << endl;
    }
};

int main() {

    // Vehiculo* apuntando a un objeto que NO es Automovil
    Vehiculo* pVehiculo = new Moto();

    // Se intenta hacer downcast a Automovil*
    Automovil* ptrAuto = dynamic_cast<Automovil*>(pVehiculo);

    if (ptrAuto != nullptr) {
        cout << "El dynamic_cast fue exitoso." << endl;
        ptrAuto->abrirMaletero();
    } else {
        cout << "El dynamic_cast fallo: el objeto NO es Automovil." << endl;
    }

    delete pVehiculo;

    return 0;
}