#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> v;
    
    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;        //0 0
    
    v.push_back(10);
    
    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;           //1 1

    v.push_back(20);
    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;           //2 2
    
    v.push_back(30);
    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;           //3 4
    
    return 0;
}
