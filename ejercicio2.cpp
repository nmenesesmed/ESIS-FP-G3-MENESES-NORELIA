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

void ordenarPorMedallas(Atleta atletas[], int numAtletas) {
    for (int i = 0; i < numAtletas - 1; ++i) {
        for (int j = i + 1; j < numAtletas; ++j) {
            if (atletas[i].medallas < atletas[j].medallas) {
                swap(atletas[i], atletas[j]);
            }
        }
    }
}

int main() {
    const int MAX_ATLETAS = 100;
    Atleta atletas[MAX_ATLETAS];
    int numeroAtletas = 0;

    cout << "Ingrese el numero de atletas: ";
    cin >> numeroAtletas;
    cin.ignore(); 

    return 0;
}