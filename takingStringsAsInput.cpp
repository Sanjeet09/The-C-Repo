#include<bits/stdc++.h>
using namespace std;

void takeInput1(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    cout<<"The entered string is: "<<s;
}

void takeInput2(){
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);
    cout<<"The entered string is: "<<s;
}

int main(){
    
    // takeInput1();
    /*the above code would give o/p as:
    Enter the string : Hello World
    The entered string is: Hello
    REASON --> cin stops taking input if ' '(space), \n (newline) is encountered
    The solution is as follows:
    */

    // use getline(cin,string_var_name);
    takeInput2();
    /*
    Enter the string : Hello World
    The entered string is: Hello World
    */

    return 0;
}