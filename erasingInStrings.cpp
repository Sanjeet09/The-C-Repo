#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="I love programming";
    
    //Syntax 1 -- erase(start_index);   erases from start to end
    s.erase(2);
    cout<<s<<endl;


    string s1="I love programming";
    //Syntax 2 -- s.erase(start_index,length);      erases from start to uptil length
    s1.erase(2,6);
    cout<<s1<<endl;

    //Syntax 2 -- s.erase(start_iterator,end_iterator);      erases from start_iterator to end_iterator(exclusive)
    string a="Hello World";
    a.erase(a.begin(), a.begin()+4);
    cout<<a<<endl;

    return 0;
}