#include<bits/stdc++.h>

using namespace std;
struct tree{
    int data;
    struct tree *left, *right;
}*root = NULL;

struct tree* createnode(int data){
    struct tree *temp = new tree;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
struct tree* insert(int data){
    struct tree* ptr = root;
    if(root==NULL){
        root = createnode(data);
        return root;
    }
    while(1){
        
        if(data<ptr->data && ptr->left!=NULL){
            ptr=ptr->left;
        }
        else if(data>ptr->data && ptr->right!=NULL){
            ptr = ptr->right;
        }
        else if(data<ptr->data && ptr->left == NULL){
            ptr->left = createnode(data);
            break;
        }
        else if(data>ptr->data && ptr->right == NULL){
            ptr->right = createnode(data);
            break;
        }
    }
    
}
//call stack
struct stak{
    struct tree *ptr;
    struct stak *next;
}*head = NULL;

void push(struct tree* ptr){
    
        struct stak *temp = new stak;
        temp->ptr = ptr;
        temp->next = head;
        head = temp;
        
}
    
struct tree *pop(){
    if(head==NULL){
        exit(1);
    }
    struct stak *temp = head;
    head = temp->next;
    struct tree* ret = temp->ptr;
    free(temp);
    temp = NULL;
    return ret;
}



void postorder(struct tree* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    
}

void postorder_nonrec(struct tree* root){
    cout<<endl;
    push(root);
    struct tree* pt = root;
    while(head!=NULL || pt!=NULL){
        if(pt->left!=NULL){
            push(pt->left);
            pt = pt->left;
        }
        else if(pt->left == NULL && pt->right == NULL){
            cout<<pop()->data<<" ";
            pt = pop();
            pt->left = NULL;
            push(pt);
        }
        else if (pt->right!=NULL){
            push(pt->right);
            pt = pt->right;
        }
        else if (pt->right==NULL){
            cout<<pop()->data<<" ";
            cout<<pop()->data<<" ";
            pt = pop();
            pt->left = NULL;
        }
    }
}

int main(){
    insert(25);
    insert(40);
    insert(10);
    insert(20);
    insert(21);
    insert(15);
    insert(5);
    insert(3);
    insert(6);
    
    postorder(root);
    postorder_nonrec(root);
    return 0;
}