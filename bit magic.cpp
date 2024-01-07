#include<bits/stdc++.h>
using namespace std;  // to convert into binary
int msb(int n)
{
    for(int i=31;i>=0;i--)
    {
        int mask=1<<i;
        if((n&mask)>0)return i;
        
    }
}

int lcb(int n)
{
    for(int i=0;i<=31;i++)
    {
        int mask=1<<i;
        if((n&mask)>0)return i;
        
    }
}
int main()
{
    int n=5;
    for(int i=31;i>=0;i--)
    {
        int mask=1<<i;
        if((n&mask)>0)cout<<1;
        else
        {
            cout<<0;
        }
    }
}
=====================================

_builtin__clz()  ---->TO COUNT NO. ZEROS FROM LEFT
_builtin_ctz() ---->TO COUNT NO. ZEROS FROM LEFT
_builtin__popcount()---->give number of set bits
_builtin__parity()---->

======================================================================================
To get prime_factors of a number in o(sqrt(n)) ::
least prime factor is 2 so 1st check with 2 after that start another loop from i=3 to sqrt(n) to get remaining prime factors


 int primefac(int n)
    {
        int c=0;
        while(n%2==0)
        {
            c=c+1;
            n=n/2;
        }
        for(int i=3;i<=sqrt(n);i=i+2)
        {
            while(n%i==0)
            {
                c=c+1;
                n=n/i;
            }
        }
        if(n>2)
        {
            c=c+1;
        }
        
        return c;
    }

















