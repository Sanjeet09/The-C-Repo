#include<bits/stdc++.h>
using namespace std;

int main(){
    //creating a new string
    string s1="Hello World";        //Hello World
    cout<<s1<<endl;             

    string s2(5, 'o');          //ooooo
    cout<<s2<<endl;

    string s3("Hey guys I'm Sanjeet");      //Hey guys I'm Sanjeet
    cout<<s3<<endl;

    //creating strings from an existing string
    string s="I love programming";

    // string from start till end
    string st1(s.begin(), s.end());         //I love programming
    cout<<st1<<endl;

    // string from 5th index till end
    string st2(s, 5);           //e programming
    cout<<st2<<endl;

    // string st3(s.begin()+7) //-- Error
    // string from 7th index till end
    string st3(s.begin()+7,s.end());        //programming
    cout<<st3<<endl;
    
    return 0;
}
