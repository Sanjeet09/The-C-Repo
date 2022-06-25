#include <bits/stdc++.h>
using namespace std;

void printVector(vector <int> v){
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
}

int main() {
    vector <int> v= {10,20,30,40};
    v.clear();
    
    printVector(v);   
    cout<<v.size()<<" "<<v.capacity();
    //the capacity remains the same since the space dosen't gets free
    
    return 0;
}
