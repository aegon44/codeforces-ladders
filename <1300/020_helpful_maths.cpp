#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int c1, c2, c3;
    c1 = 0;
    c2 = 0;
    c3 = 0;
    cin >> str;
    for(int i = 0; i < str.size(); i++)
    {
        c1 += str[i]=='1' ? 1 : 0;
        c2 += str[i]=='2' ? 1 : 0;
        c3 += str[i]=='3' ? 1 : 0;
    }
    while(c1--)
    {
        cout << '1';
        if(c1 || c2 || c3) cout << '+';
        else cout << '\n';
    }
    c1++;
    while(c2--)
    {
        cout << '2';
        if(c1 || c2 || c3) cout << '+';
        else cout << '\n';
    }
    c2++;
    while(c3--)
    {
        cout << '3';
        if(c1 || c2 || c3) cout << '+';
        else cout << '\n';
        
    }

    return 0;
}
