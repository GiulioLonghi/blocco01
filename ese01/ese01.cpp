/*
SUP che si fa dare due numeri interi x e y e calcola x^y. Fare due versioni, una che per il loop interno
usa for, l'altra che usa while. Non usare pow(), questo perché se andate a leggere la documentazione,
vedrete che prende in ingresso due double, significa quindi che al suo interno non compie un elevamento a
potenza tra interi, ma tra numeri reali. Pur permettendoci di ottenere lo stesso risultato, questo implica
che l'esecuzione sarà ben più lenta e inoltre potremmo imbatterci in errori numerici.
*/
#include <iostream>
using namespace std;

int main ()
{
    int x, y;
    int conta = 1;
    cout<<"Inserire base ed esponente: "<<endl;
    cin>>x>>y;
    int pow1 = 1;
    int pow2 = 1;

    //1° modo --> for
    for (int i=1; i<=y; i++){
        pow1 *= x;
    }
    cout<<"x^y (con ciclo for) = "<<pow1<<endl;

    //2° modo --> while
    while (conta <= y) {
        pow2 *= x;
        conta ++;
    }
    cout<<"x^y (con ciclo while) = "<<pow2<<endl;


    return 0;
}