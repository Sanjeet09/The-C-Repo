#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s1="I love programming";
    string s2="Hello World";

    reverse(s1.begin(), s1.end());      

    cout<<s1<<endl;         //gnimmargorp evol I

    //reverse first 5 characters of s2
    reverse(s2.begin(), s2.begin()+5);
    cout<<s2<<endl;         //olleH World

    return 0;
}