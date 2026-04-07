#include <iostream>
using namespace std;

int main() {

    int temp[7] = {22, 18, 25, 30, 27, 15, 20};

    cout << "Temperaturas Originales ---" << endl;

    for(int i = 0; i < 7; i++){
        cout << "temp[" << i << "] = " << temp[i] << endl;
    }

    int tempJueves = temp[3];
    cout << "Temperatura del jueves (posicion 3): " << tempJueves << endl;

    temp[2] = 28;
    cout << "Modificando temp[2] = 28" << endl;

    temp[5] = 19;
    cout << "Modificando temp[5] = 19" << endl;

    int suma = 0;

    for(int i = 0; i < 7; i++){
        suma += temp[i];
    }

    float promedio = suma / 7.0;
    cout << "Promedio de temperaturas: " << promedio << endl;

    int minimo = temp[0];
    int indiceMin = 0;

    for(int i = 1; i < 7; i++){
        if(temp[i] < minimo){
            minimo = temp[i];
            indiceMin = i;
        }
    }

    cout << "Temperatura minima: " << minimo << " en indice " << indiceMin << endl;

    return 0;
}