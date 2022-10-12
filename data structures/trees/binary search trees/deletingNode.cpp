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
void deletenode(int data){
    struct tree *child = root;
    struct tree *parent = NULL;
    while(1){
        if(child->data == data){
            break;
        }
        else if(data < child->data){
            parent = child;
            child = child->left;
        }
        else if(data > child->data){
            parent = child;
            child = child->right;
        }
        else{
            cout<<"element not found"<<endl;
            return ;
        }
    }
    
    if(child->left == NULL && child->right == NULL){
        if(parent->left == child){
            parent->left = NULL;
        }
        else{
            parent->right = NULL;
        }
        free(child);
        child = NULL;
    }
    else if(child->left==NULL && child->right!=NULL){
        child->data = child->right->data;
        free(child->right);
        child->right = NULL;
    }
    else if(child->left!=NULL && child->right==NULL){
        child->data = child->left->data;
        free(child->left);
        child->left = NULL;
    }
    
    else if(child->left != NULL && child->right != NULL){
        struct tree* ptr = child->left;
        
        while(ptr->right!=NULL){
            ptr=ptr->right;
        }
            
        if(ptr->left==NULL){
            child->data = ptr->data;
            delete ptr;
        }
        else{
            child->data = ptr->data;
            ptr->data = ptr->left->data;
            delete ptr->left;
        }

    }

}
int main(){
    insert(25);
    insert(15);
    insert(40);
    insert(5);
    insert(3);
    insert(6);
    insert(20);
    insert(16);
    insert(21);
    deletenode(16);
    inorder(root);
    return 0;
}