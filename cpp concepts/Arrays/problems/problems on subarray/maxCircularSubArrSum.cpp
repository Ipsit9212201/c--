#include<bits/stdc++.h>

using namespace std;
int kadane(int a[], int n){
    int currsum = 0;
    int maxsum = INT_MIN;
    for(int i=0;i<n;i++){
        currsum+=a[i];
        if(currsum<0){
            currsum = 0;
        }
        maxsum = max(maxsum,currsum);
    }
    return maxsum;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];    

    int wrapsum;
    int nonwrapsum;
    int totsum = 0;
    nonwrapsum = kadane(a,n);   
    for(int i=0;i<n;i++){
        totsum+=a[i];
        a[i] = -a[i];
    }   
    wrapsum = totsum+kadane(a,n);
    int final = wrapsum>nonwrapsum?wrapsum:nonwrapsum;
    cout<<final;   
    return 0;    
    
}