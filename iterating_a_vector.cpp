#include <bits/stdc++.h>
using namespace std;

void printVector(vector <int> &v){
    cout<<"The vector is: ";
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
}

void printVectorV2(vector <int> &v){
    cout<<"The vector is: ";
    
    vector <int> :: iterator it;
    
    for(it= v.begin(); it!=v.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
}

void printVectorV3(vector <int> &v){
    cout<<"The vector is: ";
    
    for(auto it= v.begin(); it!=v.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
}

int main() {
    vector <int> v={10,20,30,40,50};
    
    printVector(v);     //10 20 30 40 50 
    printVectorV2(v);     //10 20 30 40 50 
    printVectorV3(v);     //10 20 30 40 50 
    
    return 0;
}
