#include <iostream>
using namespace std;

int main() {

    int notas[4][3] = {
        {85, 90, 78},
        {60, 72, 88},
        {95, 80, 70},
        {55, 65, 92}
    };

    cout << "Tabla de Calificaciones" << endl;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cout << notas[i][j] << "\t";
        }
        cout << endl;
    }

    notas[1][2] = 95;
    cout << "Modificando notas[1][2] = 95" << endl;

    notas[3][0] = 70;
    cout << "Modificando notas[3][0] = 70" << endl;

    cout << "Promedio por estudiante" << endl;

    for(int i = 0; i < 4; i++){
        int suma = 0;

        for(int j = 0; j < 3; j++){
            suma += notas[i][j];
        }

        float promedio = suma / 3.0;
        cout << "Estudiante " << i << ": " << promedio << endl;
    }

    int reprobados = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            if(notas[i][j] < 70){
                reprobados++;
            }
        }
    }

    cout << "Notas reprobadas (menores a 70): " << reprobados << endl;

    cout << "Tabla Actualizada" << endl;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cout << notas[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}