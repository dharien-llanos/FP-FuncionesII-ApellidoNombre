#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double a,b,h;

    cout<<"Ingrese la longitud del primer cateto:";
    cin>>a;

    cout<<"Ingrese la longitud del segundo cateto:";
    cin>>b;

    h=sqrt(pow(a,2) + pow(b, 2));

    cout<<"La hipotenusa es:"<<h<<endl;

    return 0;
}
