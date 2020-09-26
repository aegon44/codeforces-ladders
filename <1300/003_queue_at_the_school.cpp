#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int c, times;
    cin >> c >> times;
    char queue[c];

    cin >> queue;

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

    
    cout << queue;
    return 0;
}