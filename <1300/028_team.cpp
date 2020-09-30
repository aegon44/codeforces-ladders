#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, p,t,v, count;
    count = 0;
    cin >> n;

    while(n--)
    {
        cin >> p >> t >> v;
        if(p+t+v >= 2) count++;
    }

    cout << count << '\n';

    return 0;
}