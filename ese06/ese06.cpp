//OK
#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>

double fact (double n);

int main ()
{
    int x;
    double e=0;
    cout<<"Quanto a fondo esplorare la progressione? "<<endl;
    cin>>x;

    for (int i=0; i<=x; i++){
        e +=(1/fact(i));
        cout<<"(da algoritmo) e = "<<e<<endl;
    }

    //cout<<"(da algoritmo) e = "<<e<<endl;
    cout<<"(da libreria) e = "<<M_E;
}

double fact (double n)
{
    double fatt=1;
    for (int i=0; i<n; i++)
        fatt *= (n-i);
    return fatt;
}