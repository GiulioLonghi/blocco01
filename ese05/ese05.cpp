//OK
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