#include <iostream>
#include <cstdlib> 

using namespace std;

int main() {
    int cantidad, maximo;
    int numero;

    cout<<"Cuantos numeros desea generar:";
    cin>>cantidad;
	
    cout<<"Valor maximo permitido:";
    cin>>maximo;

    srand(1); 

    cout<<"Numeros generados:";

    for (int i=0;i<cantidad;i++) 
	{
       numero=rand() % (maximo + 1);
        cout<<numero;
        if (i<cantidad - 1)
		 {
            cout<<",";
        }
    }

    cout << endl;
    return 0;
}
