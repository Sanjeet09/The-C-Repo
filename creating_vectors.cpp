#include <bits/stdc++.h>
using namespace std;

void printVector(vector <int> v){
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
}

int main() {
    vector <int> v= {10,20,30,40};
    printVector(v);         
    
    vector <int> v1(4,0);   ////creates a vector with 4 zeroes 
    printVector(v1);        //0 0 0 0
    
    vector <int> v2 (4);    //creates a vector with 4 zeroes 
    printVector(v2);        //0 0 0 0
    
    vector <int> v3 {4};    //creates a vector with 4  
    printVector(v3);        //4
    
    vector <int> v4(4,10);   ////creates a vector with 4 (10)s 
    printVector(v4);         //10 10 10 10
    
    return 0;
}
