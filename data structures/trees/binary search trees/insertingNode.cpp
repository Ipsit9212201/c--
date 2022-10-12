#include<bits/stdc++.h>

using namespace std;
struct tree{
    int data;
    struct tree *left, *right;
}*root = NULL;

struct tree* createNode(int data){
    struct tree *temp = new tree;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
struct tree* insert(struct tree *node, int data){
        if(node==NULL){
            return createNode(data);
            
        }
        else if(data<node->data){
            node->left = insert(node->left,data);
            return node;
        }
        else if(data>node->data){
            node->right = insert(node->right,data);
            return node;
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
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 80);
    insert(root, 60);
    inorder(root);
    return 0;
}