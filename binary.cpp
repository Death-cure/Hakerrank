#include<bits/stdc++.h>
using namespace std;
 
 struct binaryTreeNode
 {
     int data;
     binaryTreeNode *left;
     binaryTreeNode *right;
 };
 
 binaryTreeNode *newnode(int data){
    binaryTreeNode *temp = new binaryTreeNode;
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;

 }
 void Preorder( struct binaryTreeNode  *node){
    if(node==NULL){
        return;
    }else{
       cout<<node->data<< " ";
        Preorder(node->left);
       Preorder(node->right);
    
    }

 }
void PostOrder(struct binaryTreeNode *node2 ){
     if(node2==NULL){
        return;
    }else{
    PostOrder(node2->left);
    PostOrder(node2->right);
    cout<<node2->data<<" ";
    
}

}
 void InOrder(struct binaryTreeNode *node3){
     if(node3==NULL){
        return;
    }else{
     InOrder(node3->left);
     cout<<node3->data<<" ";
     InOrder(node3->right);
     
}

 }

int main(){
        struct binaryTreeNode *root = newnode(1);
        root->left=newnode(7);
        root->right=newnode(2);
        root->left->left=newnode(3);
        root->left->right=newnode(4);
        root->right->left=newnode(5);
        root->right->right=newnode(6);

        Preorder(root);
        PostOrder(root);
        InOrder(root);


}