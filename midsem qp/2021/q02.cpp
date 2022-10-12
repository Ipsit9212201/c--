#include<bits/stdc++.h>
using namespace std;

struct stacku{
    char data;
    struct stacku *next;
}*top = NULL;

void push(char data){
    
    struct stacku *temp = new stacku;
    temp->data = data;
    temp->next = NULL;
    if(top==NULL){
        top = temp;
    }
    else{
        temp->next = top;
        top = temp;
    }

}
char pop(){
    char retval = top->data;
    struct stacku*ptr = top;
    top = top->next;
    free(ptr);
    ptr = NULL;
    return retval;
}
int main(){
    string query = "EAS*YQUE***ST***IO*N***";
    int i = 0;
    while(query[i]!='\0'){
        if(query[i]!='*'){
            push(query[i]);
        }
        else cout<<pop();   
        i++;
    }
    
    return 0;
}