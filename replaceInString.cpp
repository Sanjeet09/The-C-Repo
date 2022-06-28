#include<bits/stdc++.h>
using namespace std;

void replaceInString(string s, string newString){
    //s.replace(start_index, length_of_new_word, new_word/string)
    s.replace(2,4,newString);

    cout<<"The new string is: "<<s<<endl;
    // I hate programming
}

int main(){
    string s="I love programming";
    replaceInString(s,"hate");

    return 0;
}