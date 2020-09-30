#include<bits/stdc++.h>

using namespace std; 

int alphabet [36];
int main()
{
    string name;
    int n = 2;

    while(n--)
    {
        cin >> name;
        for(auto c: name)
            alphabet[c - 65]++;
    }


    cin >> name;
    for(auto c: name)
        alphabet[c - 65]--;

    
    for(auto c: alphabet)
    {
        if(c!=0) 
        {
            cout << "NO" << '\n';
            return 0;
        }
    }

    cout << "YES";

    return 0;
}