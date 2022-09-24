#include<bits/stdc++.h>

using namespace std;
int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i = m;i<=n;i++){
        cout<<fibo(i)<<endl;
    }
    return 0;
}