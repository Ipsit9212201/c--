#include<bits/stdc++.h>

using namespace std;
int nPowerp(int n, int p){
    if(p==0){
        return 1;
    }
    return n*(nPowerp(n,p-1));
}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<nPowerp(n,p)<<endl;
    return 0;
}