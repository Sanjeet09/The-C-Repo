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
    
    v.erase(v.begin());     //erases the first element 
    printVector(v);         //{-6 8 74 66 41 85 }
    
    v.erase(v.begin()+3);       //erases 66
    printVector(v);             //{-6 8 74 41 85 }
    
    v.erase(v.begin(), v.begin()+3);//erases from 1st to 3rd(exclusive) --> [)
    printVector(v);     
    
    vector <int> v1={25,48,30,14,41,85};
    vector <int> :: iterator it;
    
    for(it=v1.begin(); it!=v1.end(); it++){
        if( (*it)%5 ==0){
            v1.erase(it);
            it--;
        }
    }
    printVector(v1);        //48 14 41 
    
    return 0;
}
