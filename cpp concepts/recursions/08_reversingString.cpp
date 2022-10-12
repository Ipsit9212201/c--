#include<bits/stdc++.h>

using namespace std;
void revstr(string name){
    if(name.length()==0){
        return;
    }
    revstr(name.substr(1));
    cout<<name[0];
}
int main(){
    string name = "mahathi";
    int n = name.length();
    revstr(name);
    return 0;
}
