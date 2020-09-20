#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int c, times;
    cin >> c >> times;
    char queue[c];

    for (int i = 0; i < c; ++i) {
        cin >> queue[i];
    }

    for (int i = 0; i < times; ++i) {
        for (int j = 0; j < c-1; ++j) {
            if(queue[j]=='B' && queue[j+1]== 'G')
            {
                queue[j+1]= 'B';
                queue[j] = 'G';
                j++;
            }
        }
    }

    for (int i = 0; i < c; ++i) {
        cout << queue[i];
    }
    return 0;
}