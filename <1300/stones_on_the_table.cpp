#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

 int main()
 {
    int beg, n, out;
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
                //if(i+1 ==letter.size()/sizeof(char)-1) out+=n;
               }
            /*else if(n!=0) {
                
                out+= n-1;
                if(beg == 0  )
                    out++;   
                beg = i+1; 
            }*/
        }

    cout << n;}
    return 0;
 }