//OK
#include <iostream>
using namespace std;

int main ()
{
    int ind, num, cifra;
    int divisore = 1 ;
    cout<<"Inserire un numero: "<<endl;
    cin>>num;
    cout<<"Inserire un numero indice: "<<endl;
    cin>>ind;

    for (int y=1; y<=ind; y++){
        divisore *= 10;
    }

    for (int i=1; i<=ind; i++){
        cifra = (num % divisore)/(divisore/10);
    }
    
    cout<<"La cifra alla posizione "<<ind<<" nel numero "<<num<<" e' "<<cifra<<endl;

    return 0;
}

