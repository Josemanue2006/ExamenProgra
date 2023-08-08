#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream archivoSalida("archivo de jose manuel.txt");

    if (archivoSalida.is_open()) {
        cout << "Hola que tal ." << endl;

        string linea;
        while (getline(cin, linea)) {
            archivoSalida << linea << endl;
        }

        archivoSalida.close();
        cout << "Hola que tal." << endl;
    } else {
        cout << "Hola que tal." << endl;
    }

    ifstream archivoEntrada("archivo de Jose Manuel.txt");

    if (archivoEntrada.is_open()) {
        cout << "Contenido de mi archivo nose que poner:" << endl;

        string linea;
        while (getline(archivoEntrada, linea)) {
            cout << linea << endl;
        }

        archivoEntrada.close();
    } else {
        cout << "Hola que tal." << endl;
    }

    return 0;
}
