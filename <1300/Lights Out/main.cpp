#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;
int main() {
    int matrix[5][5];
    for (int i = 1; i < 4; ++i)
        for (int j = 1; j < 4; ++j) matrix[i][j]=0;
    int n;
    for (int i = 1; i < 4; ++i) {
        for (int j = 1; j < 4; ++j) {
            cin >> n;
            matrix[i][j]+=n;
            matrix[i-1][j]+=n;
            matrix[i+1][j]+=n;
            matrix[i][j-1]+=n;
            matrix[i][j+1]+=n;
        }
    }

    for (int i = 1; i < 4; ++i) {
        for (int j = 1; j < 4; ++j) {
            if(matrix[i][j]%2==0)
                cout<<1;
            else cout<<0;
        }
        cout <<'\n';
    }
    return 0;
}