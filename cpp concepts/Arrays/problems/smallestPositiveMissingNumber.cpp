#include<bits/stdc++.h>
#include<ownfun.h>
using namespace std;
//this came in google and amazon
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    const int N = maxel(a,n);
    bool check[N];
    for(int i=0;i<N;i++){
        check[i] = false;
    }
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            check[a[i]] = true;
        }
    }
    bool flag = false;
    for(int i=0;i<N;i++){
        if(check[i]==false){
            flag = true;
            cout<<i;
            return 0;
        }
    }
    if(flag==false){
        cout<< -1<<endl;
    }

    return 0;
}