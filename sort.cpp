#include <bits/stdc++.h>
using namespace std;

void printVector(vector <int> &v){
    cout<<"The vector is: ";
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
}

bool myfunction (int i,int j){
    return (i>j); 
}

int main() {
    vector <int> v={14,-6,8,74,66,41,85};
    
    // sort(v.begin(), v.end());           
    //sorts the complete vector --> -6 8 14 41 66 74 85 
    
    // sort(v.begin(), v.begin()+3);          
    //sorts first 3 elements --> -(6 8 14) 74 66 41 85 
    
    // sort(v.begin(), v.end(), myfunction);
    // sorts in descending --> 85 74 66 41 14 8 -6
    
    sort(v.begin(), v.end(), greater <int>() );
    // sorts in descending --> 85 74 66 41 14 8 -6
    printVector(v);
    
    return 0;
}
