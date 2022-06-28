#include <bits/stdc++.h>
using namespace std;

void findInVector(vector <int> v, int target){
    auto it=find(v.begin(), v.end(), target);
    
    if(it!=v.end())
        cout<<"Element "<<target<<" found at : "<<it-v.begin()<<" index."<<endl;
    else
        cout<<"Element "<<target<<" not found"<<endl;
}

int main() {
    vector <int> v={1,2,3,4,5};
    findInVector(v,4);
    findInVector(v,9);
    
    return 0;
}


/*OUTPUT
Element 4 found at : 3 index.
Element 9 not found
*/
