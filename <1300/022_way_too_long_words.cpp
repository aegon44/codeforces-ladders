#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    string word;

    while(n--)
    {
        cin >> word;
        cout << ((word.size() > 10) ? word[0] + to_string(word.size()-2) + word[word.size() - 1] : word)
         << '\n';
    }

    return 0;
}