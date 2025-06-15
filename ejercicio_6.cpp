#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int usuario, computadora;
    int puntosusuario = 0, puntoscomputadora = 0;

    while (puntosusuario < 3 && puntoscomputadora < 3) 
    
	{
        cout<<"elige una opcion (0=piedra, 1=papel, 2=tijeras):";
        cin>>usuario;

        computadora = rand() % 3;

        cout<<"computadora eligio: ";
        if (computadora == 0) cout<<"piedra"<<endl;
        else if (computadora == 1)
		{
		 cout<<"papel"<<endl;
		}
        else 
		{
		cout<<"tijeras"<<endl;
		}

        if (usuario == computadora)
		 {
            cout<<"empate"<<endl;
        } 
		else if ((usuario == 0 && computadora == 2) ||
                   (usuario == 1 && computadora == 0) ||
                   (usuario == 2 && computadora == 1)) 
				   {
            cout<<"ganaste la ronda"<<endl;
            puntosusuario++;
        } 
		else 
		{
            cout<<"computadora gana la ronda"<<endl;
            puntoscomputadora++;
        }

        cout<<"marcador: tu "<<puntosusuario<<" - computadora "<<puntoscomputadora<<endl<<endl;
    }

    if (puntosusuario == 3) 
	{
        cout<<"felicidades, ganaste el juego"<<endl;
    } 
	else 
	{
        cout<<"la computadora gano el juego"<<endl;
    }

    return 0;
}
