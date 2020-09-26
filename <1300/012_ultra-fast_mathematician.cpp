#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n1, n2;
    cin >> n1 >> n2;

    for(int i=0; i < n1.size(); i++)
        n1[i] = (n1[i]!=n2[i]) ? '1' : '0';
    
    cout << n1;

    
    
    return 0;
}