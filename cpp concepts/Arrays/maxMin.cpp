#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int maxn = INT_MIN;
    int minn = INT_MAX;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    for(int i =0;i<n;i++){
        maxn = max(maxn,a[i]);
        minn = min(minn,a[i]);
    } 
    cout<<maxn<<" "<<minn<<endl;
    

    return 0;
}