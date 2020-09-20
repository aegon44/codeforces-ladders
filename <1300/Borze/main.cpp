#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main() {


    string number;
    getline(cin, number);

    for (int i = 0; i < number.size()/ sizeof(char); ++i) {
        if(number[i]=='.')
            cout << 0;
        else
            {
            if(number[i+1]=='.')
                cout << 1;
            else cout << 2;
            i++;
            }

    }

    return 0;
}