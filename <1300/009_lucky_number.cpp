#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

 int main()
 {
    string letter;
    cin >> letter;
    int luckys=0;
    for(int i = 0;i< letter.size()/sizeof(char);i++)
    {
        if(letter[i]=='4'||letter[i]=='7')
         luckys++;
    }
    if(luckys==4 || luckys==7)
    cout << "YES" ;
    else cout<< "NO";
  return 0;  
 }