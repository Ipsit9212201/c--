#include<bits/stdc++.h>

using namespace std;
int firstoc(int arr[],int n,int key,int i){
    if(arr[i]==key && i!=n){
        return i;
    }
    else return firstoc( arr, n, key, i+1);
}
int lastoc(int arr[],int n,int key, int i){
    if(arr[i]==key && i!=-1){
        return i;
    }
    else return firstoc( arr, n, key, i-1);

}
int main(){
    int arr[] = {4,2,1,2,5,2,7};
    cout<<firstoc(arr,7,2,0)<<" "<<lastoc(arr,7,2,6);
    return 0;
}