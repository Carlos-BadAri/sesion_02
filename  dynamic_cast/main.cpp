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

//Clase Derivada
class Automovil : public Vehiculo {
public:
    void abrirMaletero() {
        cout << "El maletero esta abierto." << endl;
    }
};

int main() {

    // Vehiculo* apuntando a un Automovil
    Vehiculo* pVehiculo = new Automovil();

    // Downcast usando dynamic_cast
    Automovil* ptrAuto = dynamic_cast<Automovil*>(pVehiculo);

    // Comprobamos si el cast fue exitoso
    if (ptrAuto != nullptr) {
        cout << "El dynamic_cast fue exitoso." << endl;
        ptrAuto->abrirMaletero();
    } else {
        cout << "El dynamic_cast fallo." << endl;
    }

    delete pVehiculo;

    return 0;
}