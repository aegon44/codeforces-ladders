#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

 int main()
 {
    string letter;
    cin >> letter;
    int u, l;
    char outu[letter.size()/sizeof(char)];
    char outl[letter.size()/sizeof(char)];
    u=0;
    l=0;
    for(int i = 0;i< letter.size()/sizeof(char);i++)
    {
       if(letter[i]< 97){
       u++;
       outl[i]= (char)((int)letter[i] + 32);
       outu[i] = letter[i];
       }
       else {l++;
       outl[i]= letter[i];
       outu[i] = (char)((int)letter[i] - 32);
       };
    }
    if(u>l){ 
    for(int i = 0;i< letter.size()/sizeof(char);i++) cout << outu[i];
    }
    else 
    for(int i = 0;i< letter.size()/sizeof(char);i++) cout << outl[i];
    
    return 0;
 }