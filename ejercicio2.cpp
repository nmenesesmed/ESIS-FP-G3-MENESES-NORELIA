#include <iostream>
#include <string>
using namespace std;

struct Atleta {
    string nombre;
    string pais;
    int medallas;
};

void mostrarAtletas(const Atleta atletas[], int numAtletas) {
    for (int i = 0; i < numAtletas; ++i) {
        cout << "Nombre: " << atletas[i].nombre << endl;
        cout << "Pais: " << atletas[i].pais << endl;
        cout << "Medallas: " << atletas[i].medallas << endl;
        cout << "-------------------------\n";
    }
}
