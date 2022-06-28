#include<bits/stdc++.h>
using namespace std;

void findInString(string s, char ch){
    size_t pos=s.find(ch);

    if(pos != string::npos)
        cout<<ch<<" found at position "<<pos<<endl;
    else
        cout<<ch<<" not found in the string !"<<s<<endl;
}

void findINString2(string s, string target){
    size_t pos=s.find(target);

    if(pos != string::npos)
        cout<<target<<" found at position "<<pos<<endl;
    else
        cout<<target<<" not found in the string !"<<s<<endl;
}

int main(){
    string s="I love programming";

    //find position of p in string s
    findInString(s,'p');

    //find position of x(which is not present) in string s 
    //returns npos
    findInString(s,'x');

    //finding word
    findINString2(s, "love");

    /*
    p found at position 7
    x not found in the string !I love programming
    love found at position 2
    */
    
    return 0;
}