#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;
int main() {

    int year;
    cin >> year;
    int mil, cent, dec, uni;
    do{
        year++;
        mil= year/1000;
        cent = year/100 - mil*10;
        dec = year/10 - mil*100 - cent*10;
        uni = year - mil*1000 - cent*100 - dec*10;
    }
    while(mil == cent || mil == dec || mil == uni || cent == dec || cent == uni || dec == uni);
    cout <<  year;
    return 0;
}