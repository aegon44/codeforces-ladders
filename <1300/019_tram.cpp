#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b ,suma ,sumb, max;
    max = -1;
    suma =0;
    sumb = 0;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        suma += a;
        sumb +=  b;
        max = max >= sumb - suma ? max : sumb - suma;
    }
    cout << max << '\n';
    return 0;
}