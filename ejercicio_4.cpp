#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    double discriminante;
    double x1, x2, x, partereal, parteimaginaria;

    cout<<"ingrese el coeficiente a:";
    cin>>a;

    cout<<"ingrese el coeficiente b:";
    cin>>b;

    cout<<"ingrese el coeficiente c:";
    cin>>c;

    discriminante = b*b - 4*a*c;

    if (discriminante > 0) 
    {
        x1 = (-b + sqrt(discriminante)) / (2*a);
        x2 = (-b - sqrt(discriminante)) / (2*a);
        cout<<"raices reales y distintas: "<<x1<<" , "<<x2<<endl;
    } 
    else if (discriminante == 0) 
    {
        x = -b / (2*a);
        cout<<"raices reales e iguales: "<<x<<endl;
    } 
    else 
    {
        partereal = -b / (2*a);
        parteimaginaria = sqrt(-discriminante) / (2*a);
        cout<<"raices complejas: "<<partereal<<" + "<<parteimaginaria<<" i, "
            <<partereal<<" - "<<parteimaginaria<<" i "<<endl;
    }

    return 0;
}
