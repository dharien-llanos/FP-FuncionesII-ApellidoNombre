#include <iostream>
#include <cstdlib>

using namespace std;

int lanzarDado() {
    return rand() % 6 + 1;
}

void jugarRonda(int& puntos1, int& puntos2) {
    int dado1 = lanzarDado();
    int dado2 = lanzarDado();

    cout<<"jugador 1 saca: "<<dado1<<" , jugador 2 saca: "<<dado2<<endl;

    if (dado1 > dado2) {
        puntos1++;
        cout<<"gana jugador 1 "<<endl;
    } else if (dado2 > dado1) {
        puntos2++;
        cout<<"gana jugador 2 "<<endl;
    } else {
        cout<<"empate, no suma nadie "<<endl;
    }

    cout<<"marcador:  jugador 1 :   "<<puntos1<<" _____  jugador 2 :   "<<puntos2<<endl<<endl;
}

int main() {
    int puntos1 = 0;
    int puntos2 = 0;

    while (puntos1 < 3 && puntos2 < 3) {
        jugarRonda(puntos1, puntos2);
    }

    if (puntos1 == 3) {
        cout<<"jugador 1 gana el juego"<<endl;
    } else {
        cout<<"jugador 2 gana el juego"<<endl;
    }

    return 0;
}
