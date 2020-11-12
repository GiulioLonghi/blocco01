/*
Il fattoriale di un numero non-negativo n si scrive n!. Ed è definito come segue:
n! = n · (n − 1) · (n − 2) · (n − 3) · . . . · 1
Se n == 0 allora 0! = 1. Per esempio
5! = 5 · 4 · 3 · 2 · 1 = 120
SUP che legge un numero non-negativo e calcolarne il fattoriale. Fino a che numero si ottengono risultati
corretti? Controllare che l'utente inserisca un numero adeguato e in caso contrario scrivere un messaggio
e terminare l'esecuzione.
*/
#include <iostream>
using namespace std;

long long fact (int n);

int main ()
{
    int num;
    cout<<"Inserire un numero positivo: "<<endl;
    cin>>num;

    if (num<0) 
    {
        cout<<"Inserire un numero POSITIVO: "<<endl;
        cin>>num;
    }

    cout<<"Il fattoriale di "<<num<<" e' "<<fact(num)<<endl;
}

long long fact (int n)
{
    int fatt=1;
    for (int i=0; i<n; i++)
        fatt *= (n-i);
    return fatt;
}