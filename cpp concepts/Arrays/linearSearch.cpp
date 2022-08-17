#include<bits/stdc++.h>

using namespace std;
int linearser(int arr[],int n,int key){
    for(int i = 0;i<n;i++){
        if(arr[i]==key){
            return i;
        }

    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    int k;
    cin>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<linearser(a,n,k)<<endl;

    
    return 0;
}