#include<bits/stdc++.h>

using namespace std;
bool check_sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    return arr[0]<arr[1] && check_sorted(arr+1,n-1);
}
int main(){
    int arr[] = {1,10,2,3,4,5};
    cout<<check_sorted(arr,5);
    return 0;
}