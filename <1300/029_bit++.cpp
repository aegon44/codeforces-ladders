#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    string line;
    x =0;
    cin >> n;

    while(n--)
    {
        cin >> line;
        if(line[0] == '+' || line[line.size()-1]=='+') x++;
        else x--;
    }

    cout << x << '\n';
    

    return 0;
}