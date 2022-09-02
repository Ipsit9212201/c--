#include<bits/stdc++.h>
// to print all the prime numbers in a given range
using namespace std;
void sieve(int n){
    int prime[100] = {0};
    int m = sqrt(n);
    for(int i=2;i<=m;i++){
        if(prime[i]==0){
            for(int j = i*i;j<=n;j+=i){
                prime[j] = 1;
            }
        }
    }

    for (int i=2;i<=n;i++){
        if(prime[i] == 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;

}
int main(){
    int n;
    cin>>n;
    sieve(n);
    return 0;
}