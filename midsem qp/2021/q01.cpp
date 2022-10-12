#include<bits/stdc++.h>
using namespace std;

struct node{
    char data;
    struct node *next;

};
char mysteryFucntion(string str){
    struct node *head = new node;
    struct node *p=head,*q=NULL,*r=NULL;
    int i = 0;
    while(i<(str.length()-1)){
        struct node *temp = new node;
        temp->data = str[i];
        temp->next = NULL;
        p->next = temp;
        p = temp;
        i++;
    }
    p->data = str[str.length()-1]; 
    p = q = head;
    while(p!=NULL){
        p = p->next;
        if(p!=NULL){
            q = q->next;
            p = p->next;
        }

    }
    return q->data;
       
}
int main(){
    string name = "mahathi";
    cout<<mysteryFucntion(name)<<endl;
    return 0;
}