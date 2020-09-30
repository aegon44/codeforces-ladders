#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<int> colors;
    int n;
    int c =4;
    while(c--)
    {
        cin >> n;
        colors.insert(n);
    }

    cout << 4 - colors.size() << '\n';

    return 0;
}