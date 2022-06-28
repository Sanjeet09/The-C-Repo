#include <bits/stdc++.h>
using namespace std;

void printVector(vector <int> v){
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
}

void copyingVectors(vector <int> v){
    
    vector <int> v1(v);         //copies all elements of v to v1
    printVector(v1);            //10 20 30 40 50 
    
    vector <int> v2(v.begin(), v.end()); 
    //copies all elements of v to v2
    printVector(v2);            //10 20 30 40 50 
    
    // vector <int> v3;
    // v3(v.begin(), v.end());  //--ERROR
    
    vector <int> v4(v.begin(), v.begin()+2);        
    // [) start inclusive,end exclusive
    printVector(v4);            //10 20 
}

int main() {
    vector <int> v= {10,20,30,40,50};
    copyingVectors(v);
    return 0;
}
