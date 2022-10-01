#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* link;

}*top1 = NULL;

void push(struct node **top,int data){
    struct node *temp = new node;
    temp->data = data;
    temp->link = NULL;
    temp->link = *top;
    *top = temp;
}
int pop(struct node** top){
    int retVal = (*top)->data;
    struct node *temp = *top;
    *top = temp->link;
    delete temp;
    temp = NULL;
    return retVal;
}
void print(struct node *top){
    struct node *ptr = top;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->link;
    }
    cout<<endl;
}
int main(){
    push(&top1,5);
    push(&top1,10);
    push(&top1,15);
    push(&top1,20);
    push(&top1,25);
    push(&top1,30);
    print(top1);
    return 0;
}