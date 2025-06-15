#include <iostream>
#include <cstdlib>

using namespace std;

int generarNumero() 
{
    int numero;
    numero = rand() % 5 + 1;
    return numero;
}

bool esEscalera(int a, int b, int c) 
{
    int maximo, minimo, medio;
    maximo = max(a, max(b, c));
    minimo = min(a, min(b, c));
    medio = a + b + c - maximo - minimo;
    return (maximo - medio == 1 && medio - minimo == 1);
}

void jugarTurno(int& monedas) 
{
    int apuesta;
    int n1, n2, n3;
    int ganancia;

    do 
    {
        cout<<"cuantas monedas deseas apostar (1 a 10):";
        cin>>apuesta;
    } while (apuesta < 1 || apuesta > 10 || apuesta > monedas);

    n1 = generarNumero();
    n2 = generarNumero();
    n3 = generarNumero();

    cout<<"resultado:"<<n1<<" "<<n2<<" "<<n3<<endl;

    if (n1 == n2 && n2 == n3) 
    {
        ganancia = apuesta * 10;
        monedas += ganancia;
        cout<<"3 iguales! ganaste "<<ganancia<<" monedas"<<endl;
    } 
    else if (n1 == n2 || n1 == n3 || n2 == n3)
    {
        ganancia = apuesta * 2;
        monedas += ganancia;
        cout<<"2 iguales! ganaste "<<ganancia<<" monedas"<<endl;
    } 
    else if (esEscalera(n1, n2, n3))
    {
        ganancia = apuesta * 5;
        monedas += ganancia;
        cout<<"escalera! ganaste "<<ganancia<<" monedas"<<endl;
    } 
    else 
    {
        monedas -= apuesta;
        cout<<"perdiste "<<apuesta<<" monedas"<<endl;
    }

    cout<<"monedas restantes:"<<monedas<<endl<<endl;
}

int main() {
    int monedas;
    char opcion;

    monedas = 100;

    while (monedas > 0) 
    {
        jugarTurno(monedas);
        if (monedas <= 0) 
        {
            break;
        }
        cout<<"deseas seguir jugando? (s/n):";
        cin>>opcion;
        if (opcion != 's' && opcion != 'S') 
        {
            break;
        }
    }

    cout<<"juego terminado. monedas finales:"<<monedas<<endl;
    return 0;
}
