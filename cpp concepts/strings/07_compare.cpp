#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1 = "abc";
    string s2 = "xyz";
    cout<<s2.compare(s1)<<endl;
    // check whether two strings are equal
    if(s2.compare(s1)){
        cout<<"string are not equal"<<endl;
    }
    
    return 0;
}