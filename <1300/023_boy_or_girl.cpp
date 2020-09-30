#include<bits/stdc++.h>

using namespace std;

int main ()
{
    set<char> letters;
    string name;
    cin >> name;
    
    for(auto c : name)
        letters.insert(c);
    
    cout << ((letters.size()%2==1) ? "IGNORE HIM!" : "CHAT WITH HER!") << '\n';
    return 0;
}