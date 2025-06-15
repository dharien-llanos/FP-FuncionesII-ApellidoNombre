#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    double discriminante;

    cout<<"ingresa el coeficiente a:";
    cin>>a;

    cout<<"ingresa el coeficiente b:";
    cin>>b;

    cout<<"ingresa el coeficiente c:";
    cin>>c;

    discriminante = b*b - 4*a*c;

    cout<<"discriminante: "<<discriminante<<endl;

    return 0;
}
