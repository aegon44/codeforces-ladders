#include<bits/stdc++.h>

using namespace std;

bool IsPrime(int n)
{
    if(n==2) return true;
    for(int i = 2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    int n , m;
    cin >> n >> m;
    
    
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