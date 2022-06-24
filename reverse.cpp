#include <bits/stdc++.h>
using namespace std;

void printVector(vector <int> &v){
    cout<<"The vector is: ";
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
}

int main() {
    vector <int> v={14,-6,8,74,66,41,85};
    
    // reverse(v.begin(), v.end());           
    // reverses complete vector --> 85 41 66 74 8 -6 14 
    
    reverse(v.begin(), v.begin()+4);
    //reverses first four elements of the vector --> (74 8 -6 14) 66 41 85 
    printVector(v);
    
    return 0;
}
