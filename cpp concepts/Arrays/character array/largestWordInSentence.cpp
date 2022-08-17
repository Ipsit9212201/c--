#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    char ch[n+1];
    cin.ignore();
    cin.getline(ch,n);
    int i=0;
    int currlen = 0;
    int maxlen = 0;
    while(1){
        if(ch[i]==' ' || ch[i]=='\0'){
            maxlen = max(maxlen,currlen);
            currlen = 0;
        }
        else
        currlen++;

        if(ch[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxlen<<endl;
    return 0;
}