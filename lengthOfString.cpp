#include<bits/stdc++.h>
using namespace std;

int lengthOfString(string s){
    int len=0,i=0;

    while(s[i++]!='\0')
        len+=1;

    return len;
}

int main(){
    string s="I love programming";

    cout<<"Length is: "<<s.length()<<endl;
    cout<<"Length is: "<<s.size()<<endl;
    cout<<"Length is: "<<lengthOfString(s)<<endl;
    
    return 0;
}