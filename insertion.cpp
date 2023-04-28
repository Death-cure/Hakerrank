#include<bits/stdc++.h>
using namespace std;

 // define data type 

 struct binaryTreeNode{
    int data;    
    binaryTreeNode *left;                    // define data type 
    binaryTreeNode *right;
 };

  // define variable for that data type 
  
  struct binaryTreeNode *createNode(int data){
    binaryTreeNode *temp = new binaryTreeNode();
    temp->data=data;
    temp->left=temp->right =NULL;
    return temp;
  };

// define level order traversal 
void levelOrderTraversal(binaryTreeNode *root , int key){
    int temp2;
    if(!root){
        return;
    }else{
        queue<binaryTreeNode*> q;
         q.push(root);
        while(!q.empty()){
            binaryTreeNode *temp1 = q.front();
            q.pop();
           

            if(temp1->left!=NULL){
                q.push(temp1->left);
            }else{
            
                temp1->left->data= key;
                q.push(temp1->left);
            }
             if(temp1->right!=NULL){
                q.push(temp1->right);
            }else{
            
                temp1->right->data= key;
                q.push(temp1->right);
            }
             
                  temp2 = temp1->data;
            cout<< temp2  <<"";

        }
    }


}
int main(){
    struct binaryTreeNode *node = new binaryTreeNode();
    node=createNode(90);
     node ->left=createNode(1);
        node ->right=createNode(2);
        node ->left->left=createNode(3);
        node ->left->right=createNode(4);
        node ->right->left=createNode(5);
        node ->right->right=createNode(6); 


     levelOrderTraversal(node , 20 );
}