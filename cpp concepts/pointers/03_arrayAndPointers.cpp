#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {10,20,30,40};
    // name of the array stores the address of 0th element
    //but this cannot be incremented or decremented or operated
    cout<<*arr<<endl;//prints first element i.e. 10
    // printing all elements using pointers
    int* ptr = arr;
    for(int i=0;i<4;i++){
        cout<<*ptr<<endl;
        ptr++;
    }
    cout<<"\n\n";
    //++arr is illegal
    // another approach to print using pointers
    for(int i=0;i<4;i++){
        cout<<*(arr+i)<<endl;
        
    }
    return 0;
}