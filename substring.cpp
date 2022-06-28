#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="I love programming";
    
    //Syntax 1 -- s.substr(start_index);
    string n=s.substr(2);
    cout<<n<<endl;

    //Syntax 2 -- s.substr(start_index,length);
    string n1=s.substr(2,4);
    cout<<n1<<endl;

    return 0;
}