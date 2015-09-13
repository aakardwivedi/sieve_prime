#include <iostream>
#include<stdio.h>
#include <string.h>
#include<fstream>

using namespace std;

void markMultiples(bool arr[], int a, int n)
{
    int i = 2, num;
    while ( (num = i*a) <= n )
    {
        arr[ num-1 ] = 1;
        ++i;
    }
}

void SieveOfEratosthenes(int u,int l)
{
    if (l >= 2)
    {

        bool arr[u-l];
        memset(arr, 0, sizeof(arr));

        for (int i=l-1; i<u; ++i)
        {
            if ( arr[i] == 0 )
            {
                if(l<(i+1))
                printf("%d ", i+1);

               markMultiples(arr, i+1, u);
            }
        }
     }
}


int main()
{
    long long int u,t,l;
    while(t--)
    {
    cin>>l>>u;
    SieveOfEratosthenes(u,l);
    cout<<"\n";
    }
    return 0;
}
