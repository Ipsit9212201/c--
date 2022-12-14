#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    int currSum[n+1];
    currSum[0] = 0;
    for(int i=1;i<=n;i++){
        currSum[i] = currSum[i-1]+a[i-1]; //storing the cumulative sum 

    }
    int maxSum = INT_MIN;
    // here we subtract any cumulative sum part from another n check if is maximum 
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum = currSum[i]-currSum[j];
            maxSum = max(sum,maxSum);
        }
    }
    cout<<maxSum;
    return 0;
}