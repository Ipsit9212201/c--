#include<bits/stdc++.h>

using namespace std;

int main(){
    string s = "fghjkjhvhjhghuhb";
    string s1 = "";
    for(int i=0;i<s.size();i++){
        if(s[i] >='a' && s[i] <= 'z'){
            s1 +=(s[i]-32);
        }
        else{
            s1+=s[i];
        }
    }
    cout<<s1<<endl;
    //inbuilt function
    transform(s.begin(),s.end(), s.begin(),::toupper);
    cout<<s<<endl;
    //lowercase
    transform(s.begin(),s.end(), s.begin(),::tolower);
    cout<<s<<endl;
    return 0;
}