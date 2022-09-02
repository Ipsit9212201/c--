#include<bits/stdc++.h>

using namespace std;
void primefactor(int n){
    int ans[n] = {0};
    for(int i=2;i<=sqrt(n);i++){
        if(ans[i]==0){
            for(int j=i*i;j<=n;j+=i){
                ans[j] = 1;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(ans[i]==0 && n%i==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    primefactor(n);
    return 0;
}