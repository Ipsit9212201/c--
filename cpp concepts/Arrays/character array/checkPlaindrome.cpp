#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    char ch[n+1];
    cin>>ch;
    bool check = true;
    int i=0;
    while(ch[i]!='\0'){
        if(ch[i]!=ch[n-i-1]){
            check = false;
            break;
        }
        i++;
    }
    if (check==true){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }

    return 0;
}