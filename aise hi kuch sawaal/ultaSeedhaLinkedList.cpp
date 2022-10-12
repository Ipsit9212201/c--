#include<bits/stdc++.h>
using namespace std;
// a->b->c->d ans-  a->d->b->c->c->b->d->a
struct node{
    char data;
    struct node* link;
};

void insert(int data,struct node **head){
    if(*head==NULL){
        *head = new node;
        (*head)->data = data;
        (*head)->link = NULL;
    }
    else {
        struct node *temp = new node;
        temp->data = data;
        temp->link = NULL;
        struct node* ptr = *head;
        while(ptr->link!=NULL){
            ptr = ptr->link;
        }
        ptr->link = temp;
    }
}
void print(struct node *head){
    struct node *ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->link;

    }
    cout<<endl;
}
struct node *reverse(struct node *head){
    struct node *next = head->link;
    struct node *prev = NULL;
    while (next!=NULL){
        head->link = prev;
        prev = head;
        head = next;
        next = next->link;
    }
    head->link = prev;
    return head;
    
    
    

}
int main(){
    struct node *head1 = new node;
    head1 = NULL;
    insert('a',&head1);
    insert('b',&head1);
    insert('c',&head1);
    insert('d',&head1);
    struct node *copy = new node;
    copy = NULL;
    struct node *ptr = head1;
    while(ptr!=NULL){
        insert(ptr->data,&copy);
        ptr = ptr->link;
    }
    print(copy);
    copy = reverse(copy);
    print(copy);
    struct node *ptr1 = head1;
    struct node *ptr2 = copy;
    struct node *newhead = new node;
    newhead = NULL;
    while(ptr2!=NULL){
        insert(ptr1->data,&newhead);
        insert(ptr2->data,&newhead);
        ptr1 = ptr1->link;
        ptr2 = ptr2->link;
    }
    print(newhead);
    return 0;
}