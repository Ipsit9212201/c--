#include<bits/stdc++.h>

using namespace std;
bool pairsum(int a[],int n,int k){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}
bool pairsumOptim(int a[],int n,int k){
    // here we take the array in the sorted order and then set two index checks at start 
    // and end of the array then we know if we move the start pointer forward then it will
    // give a larger value and if we move end pointer backward it will give a lower value 
    // thus we move the pointers till we get the given sum
    int st = 0;
    int en = n-1;
    while(st<=en){
        if(a[st]+a[en]==k){
            cout<<st<<" "<<en<<endl;
            return true;
        }
        else if(a[st]+a[en]>k){
            en--;
        }
        else if(a[st]+a[en]<k){
            st++;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<pairsumOptim(a,n,31)<<endl;
    return 0;
}