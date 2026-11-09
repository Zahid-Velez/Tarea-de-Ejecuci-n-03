#include <iostream>
#include <array>
#include <fstream>
using namespace std;

struct Estudiante {
    string nombre;
    int anioNacimiento;
    double gpa;
};

int main() {
    array<Estudiante, 10> estudiantes;
    estudiantes[0] = {"Juan", 2000, 3.4};
    estudiantes[1] = {"Maria", 2005, 2.8};

    cout << "\n[a] Ingrese los datos para el 3er y 4to estudiante:" << endl;
    for (int i = 2; i < 4; i++) {
        cout << "Estudiante " << i + 1 << " (Nombre Año_Nacimiento GPA): ";
        cin >> estudiantes[i].nombre >> estudiantes[i].anioNacimiento >> estudiantes[i].gpa;
    }

    string nombres_basicos[] = {"Gaby", "Patty", "Diana"};
    int nacimientos_basicos[] = {2002, 2004, 2006};
    double gpa_basicos[] = {3.8, 3.0, 2.9};

    estudiantes[4] = {nombres_basicos[0], nacimientos_basicos[0], gpa_basicos[0]};
    estudiantes[5] = {nombres_basicos[1], nacimientos_basicos[1], gpa_basicos[1]};

    ifstream archivo("datos.txt");
    if (archivo.is_open()) {
        int idx = 6;
        while (idx < 10 && archivo >> estudiantes[idx].nombre >> estudiantes[idx].anioNacimiento >> estudiantes[idx].gpa) {
            idx++;
        }
        archivo.close();
    } else {
        cout << "[Advertencia] No se pudo abrir el archivo 'datos.txt'. Asegurese de que este creado." << endl;
    }

    const int ANIO_ACTUAL = 2026;
    cout << "\nLISTADO GENERAL DE ESTUDIANTES Y BECASq" << endl;
    
    for (int i = 0; i < 10; i++) {
        int edad = ANIO_ACTUAL - estudiantes[i].anioNacimiento;
        cout << "Estudiante " << i + 1 << ":" << endl;
        cout << " - Nombre: " << estudiantes[i].nombre << endl;
        cout << " - Año de Nacimiento: " << estudiantes[i].anioNacimiento << " (Edad aprox: " << edad << " años)" << endl;
        cout << " - GPA: " << estudiantes[i].gpa << endl;
        
        if (estudiantes[i].gpa >= 3.5) {
            cout << " -> ESTADO: [ CALIFICA A UNA BECA ]" << endl;
        } else {
            cout << " -> ESTADO: [ No califica a beca ]" << endl;
        }
        cout << endl << endl;
    }

    return 0;
}