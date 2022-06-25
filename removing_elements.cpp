#include <bits/stdc++.h>
using namespace std;

void printVector(vector <int> &v){
    cout<<"The vector is: ";
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
}

int main() {
    vector <int> v={10,20,30,40,50,60,70,80,90,100};
    
    printVector(v);     //10 20 30 40 50 60 70 80 90 100 
    
    v.pop_back();       //removes last element
    printVector(v);     //10 20 30 40 50 60 70 80 90
    
    v.erase(v.begin()+3);       //removes the element at 3rd index
    printVector(v);             //10 20 30 50 60 70 80 90 
    
    v.erase(v.begin()+2, v.begin()+5);       //removes from 2nd to 4th index
    printVector(v);         //10 20 70 80 90
    
    return 0;
}
