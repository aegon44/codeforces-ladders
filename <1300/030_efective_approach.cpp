#include<bits/stdc++.h>

using namespace std;



int main()
{
    int n,m, aux;
    long long l, r;
    cin >> n;
    l = 0;
    r = 0;
    vector<int> arrl(n);
    vector<int> arrr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> aux;
        aux--;
        arrl[aux] = i + 1;
        arrr[aux] = n - i;
    }

    cin >> m;

    for(int i = 0; i < m; i++)
    {
        cin >> aux;
        aux--;
        l += arrl[aux];
        r += arrr[aux];   
    }

    cout << l << " " << r <<'\n';  

    return 0;
}