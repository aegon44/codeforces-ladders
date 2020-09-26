#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout << setprecision(4) << fixed;
    int n,c;
    double add, aux;
    add = 0;
    cin >> n;
    c = n;
    while(c--)
    {
        cin >> aux;
        add+=aux;
    }
    cout << add/n;


    return 0;
}