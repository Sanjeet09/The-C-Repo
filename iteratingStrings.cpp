#include<bits/stdc++.h>
using namespace std;

void printString(string s){
    int i=0;
    while(s[i] != '\0')
        cout<<s[i++];

    cout<<endl;
}

void printString2(string s){
    for(auto it=s.begin(); it!=s.end(); it++)
        cout<<*it;
    
    cout<<endl;
}

void printStringInReverse(string s){
    for(auto it=s.rbegin(); it!=s.rend() ;it++)
        cout<<*it;
    
    cout<<endl;
}

int main(){
    
    string s1="I love programming";

    printString(s1);
    printString2(s1);
    printStringInReverse(s1);

    return 0;
}