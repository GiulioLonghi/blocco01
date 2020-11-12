/*
SUP che prende in ingresso un intero e calcola il valore della costante di eulero e con la seguente formula:
e = 1 + (1/1!) + (1/2!) + (1/3!) + ...
Usare il valore in ingresso per quanto a fondo esplorare la progressione. Confrontare il valore con la
funzione exp() presente in math.h con argomento 1. Se avete dubbi sulle funzioni di libreria, Google è
tuo amico. Quante iterazioni sono necessarie per far scend
*/
#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>

long long fact (int n);

int main ()
{
    int x;
    float e=0;
    cout<<"Quanto a fondo esplorare la progressione? "<<endl;
    cin>>x;

    for (int i=0; i<=x; i++){
        e +=(1/fact(i));
        cout<<"(da algoritmo) e = "<<e<<endl;
    }

    //cout<<"(da algoritmo) e = "<<e<<endl;
    cout<<"(da libreria) e = "<<M_E;
}

long long fact (int n)
{
    int fatt=1;
    for (int i=0; i<n; i++)
        fatt *= (n-i);
    return fatt;
}