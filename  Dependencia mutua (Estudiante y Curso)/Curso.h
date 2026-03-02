#ifndef CURSO_H
#define CURSO_H

#include <string>
using namespace std;

class Estudiante;//Aqui tambien se declara para qur no se haga una deopendencia circular

class Curso {
private:
    string nombreCurso;
    Estudiante* estudiante;

public:
    Curso(string);

    void asignarEstudiante(Estudiante* );
    void mostrarEstudiante();

    string getNombre();
};

#endif