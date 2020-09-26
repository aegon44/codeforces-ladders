#include<bits/stdc++.h> 

using namespace std;

int line[101];

int main()
{
    int n, min, max, imin, imax, aux;
    min = 101;
    max =-1;
    cin >> n;
    for(int i = 0; i < n; i++ )
    {
        cin >> aux;
        if(aux > max)
        {
            max = aux;
            imax = i;
        }
        if(aux <= min)
        {
            min = aux;
            imin = i;
        }
    }
    if(imax > imin) cout << (n - 1 - imin) + imax -1;
    else cout << (n - 1 - imin) + imax;

    return 0;
}