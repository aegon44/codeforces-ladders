#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;

    cin >> a >> b;

    for(int i =0; i < a.size(); i++)
    {
        if(tolower(a[i]) != tolower(b[i]))
        {
            cout << ( (tolower(a[i])) > tolower(b[i]) ? 1:-1) << '\n';
            return 0;
        }
    }

    cout << 0 << '\n';

    return 0;
}