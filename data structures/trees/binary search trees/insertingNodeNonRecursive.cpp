#include<bits/stdc++.h>

using namespace std;
struct tree{
    int data;
    struct tree *left, *right;
}*root = NULL;

struct tree* createnode(int data){
    struct tree* temp = new tree;
    temp->data = data;
    temp->right = temp->left = NULL;
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
    insert(50);
    insert(30);
    insert(20);
    insert(40);
    insert(70);
    insert(80);
    insert(60);
    inorder(root);

    
    return 0;
}