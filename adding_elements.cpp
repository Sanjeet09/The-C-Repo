#include <bits/stdc++.h>
using namespace std;

void printVector(vector <int> &v){
    cout<<"The vector is: ";
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
}

int main() {
    vector <int> v;
    
    v.push_back(10);
    v.push_back(20);
    v.push_back(40);
    v.push_back(80);
    
    printVector(v);     //10 20 40 80
    
    v.insert(v.begin()+2,30);    //inserts 30 at 3rd position(2nd index)
    printVector(v);     //10 20 30 40 80
    
    v.insert(v.end(),90);       //inserts 90 at last
    printVector(v);         //10 20 30 40 80 90
    
    v.insert(v.begin()+4,50);   //inserts 50 at 5th position (4th index)
    printVector(v);
    
    return 0;
}
