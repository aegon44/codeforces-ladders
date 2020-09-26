#include<bits/stdc++.h>

using namespace std;

int IsPrime(int n)
{
    for(int i = 2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    int n , m;
    cin >> n >> m;
    
    if(n==2)
    {
        if(m==3) cout << "YES";
        else cout << "NO";
        return 0;
    }
    for(int i = n+1;i<50; i++)
    {
        if(IsPrime(i))
        {
            
            if(m == i)
            {
                cout << "YES";
                return 0;
            }
            else break;
        }
    }
    cout << "NO";
    return 0;
}