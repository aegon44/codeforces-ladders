#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

 int main()
 {
    int  n, out;
    cin >> out;
    string letter;
    cin >> letter;
    
    
    n=0;
    
        if(letter.size()/sizeof(char)==1) cout <<0;
        else{
        for(int i = 0;i< letter.size()/sizeof(char)-1;i++)
        {
            if(letter[i]==letter[i+1])
               { n++;
                
               }
            
        }

    cout << n;}
    return 0;
 }