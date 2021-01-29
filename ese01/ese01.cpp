//OK
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