#include<bits/stdc++.h>

using namespace std;

int main(){
    int a = 10;//stored in stack
    int* p = new int();//allocate memory in heap
    *p = 10;
    delete(p); //deallocate memory bt the pointer still points to that adress in heap
    p = new int[4];//dynamic array now p stores the address of 0th element
    delete[] p ;
    p = NULL;
    return 0;
}
