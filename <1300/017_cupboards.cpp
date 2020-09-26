#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, l, r, countl, countr, time;
    cin >> n;
    countl = 0;
    countr = 0;
    time = 0;
    for(int i =0; i < n; i++)
    {
        cin >> l >> r;
        
        countl += l;
        countr += r;
    }
    
    time += (countl > n/2) ? n - countl :  countl;
    
    time += (countr > n/2) ? n - countr :  countr;

    cout << time <<'\n';
    return 0;
}