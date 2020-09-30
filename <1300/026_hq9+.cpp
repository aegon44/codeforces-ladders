#include<bits/stdc++.h>

using namespace std;

int main() 
{
    string code;
    cin >> code;

    for(auto c : code)
    {
        if(c == 'H' or c=='Q' or c=='9')
        {
            cout << "YES" << '\n';
            return 0;
        }
    }

    cout << "NO" << '\n';
    return 0;
}