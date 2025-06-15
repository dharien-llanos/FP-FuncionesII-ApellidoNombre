#include <iostream>
#include <cmath>
using namespace std;

void calcularraices(double a, double b, double c, double &x1, double &x2, double &partereal, double &parteimaginaria, bool &esreal) 
{
    double discriminante = b*b - 4*a*c;

    if (discriminante >= 0) 
	{
        esreal = true;
        x1 = (-b + sqrt(discriminante)) / (2*a);
        x2 = (-b - sqrt(discriminante)) / (2*a);
    } 
	else
	 {
        esreal = false;
        partereal = -b / (2*a);
        parteimaginaria = sqrt(-discriminante) / (2*a);
    }
}

int main() 
{
    double a, b, c;
    double x1, x2, partereal, parteimaginaria;
    bool esreal;

    cout<<"ingrese el coeficiente a: ";
    cin>>a;

    cout<<"ingrese el coeficiente b: ";
    cin>>b;

    cout<<"ingrese el coeficiente c: ";
    cin>>c;

    calcularraices(a, b, c, x1, x2, partereal, parteimaginaria, esreal);

    if (esreal) 
	{
        if (x1 == x2) {
            cout<<"raices reales e iguales: "<<x1<<endl;
        } 
		else 
		{
            cout<<"raices reales y distintas: "<<x1<<" , "<<x2<<endl;
        }
    } else 
	{
        cout<<"raices complejas: "<<partereal<<" + "<<parteimaginaria<<" i, "
            <<partereal<<" - "<<parteimaginaria<<" i "<<endl;
    }

    return 0;
}
