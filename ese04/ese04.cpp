/*SUP che stampa senza sosta i multipli di due. Quindi 2, 4, 8, 16, eccetera. Il loop è innito. Cosa succede
e perché?
*/
#include <iostream>
using namespace std;

int main ()
{
    int n=1;
    while (n>0)
    {
        n *= 2;
        cout<<n<<endl;
    }
    return 0;
}

/*
2
4  
8  
16 
32 
64 
128
256
512
1024
2048
4096
8192
16384
32768
65536
131072
262144
524288
1048576
2097152
4194304
8388608
16777216
33554432
67108864
134217728
268435456
536870912
1073741824
-2147483648
*/