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
void inorder(struct tree* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}

int main(){
    insert(25);
    insert(15);
    insert(40);
    insert(5);
    insert(10);
    insert(3);
    insert(6);
    insert(20);
    insert(21);
    
    inorder(root);
    return 0;
}