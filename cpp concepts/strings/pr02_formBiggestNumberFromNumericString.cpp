#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end(), greater<int>());//sorting in descending order
    cout<<s<<endl;
    return 0;
}