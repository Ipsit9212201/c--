#include<bits/stdc++.h>

using namespace std;
int sum_till_n(int n){
    if(n==0){
        return n;
    }
    return n + sum_till_n(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sum_till_n(n)<<endl;
    return 0;
}