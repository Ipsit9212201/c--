#include<bits/stdc++.h>

using namespace std;
int binser(int a[],int n,int key){
    int st = 0;
    int en = n;
    while(st<=en){
        int mid = (st+en)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(key<a[mid]) {
            en=mid-1;
        }
        else {
            st=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    int k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<binser(a,n,k);
    return 0;
}