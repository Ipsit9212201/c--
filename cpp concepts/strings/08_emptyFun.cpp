#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1 = "abc";
    s1.clear();
    if(s1.empty()){ // gives 1 if string is empty
        cout<<"string is empty"<<endl;
    }
    string s2 = "mahathi";
    s2.erase(3);
    cout<<s2+'i'<<endl;
    return 0;
}