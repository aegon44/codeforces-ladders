#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

 int main()
 {
    string letter;
    cin >> letter;
    if(letter[0]>= 97) letter[0] = letter[0] -32;
    cout << letter;
    return 0;
 }