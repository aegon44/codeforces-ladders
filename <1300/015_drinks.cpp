#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout << setprecision(4) << fixed;
    int n;
    double add, aux;
    add = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> aux;
        add+=aux;
    }
    cout << add/n;


    return 0;
}