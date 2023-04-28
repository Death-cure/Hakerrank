#include<bits/stdc++.h>
using namespace std;
 struct binaryTreenode{
    int data;
    binaryTreenode *left ;
    binaryTreenode *right;

     };
      
      struct binaryTreenode *CreateNode(int data){
        struct  binaryTreenode  *temp = new  binaryTreenode;
         temp->data=data;
         temp->left = temp->right  = NULL;
     return temp;      

      }

      binaryTreenode* Insertion( struct binaryTreenode *root , int data){
        if(root==NULL){
            root = CreateNode(data);
            return root;
        }
            queue<binaryTreenode*> q;
            q.push(root);
            while(!q.empty()){
             binaryTreenode* temp1 = q.front();
                q.pop();
            if(temp1->left!=NULL){
                q.push(temp1->left);
            }else{
                temp1->left = CreateNode(data);
                return root;
            }
             if(temp1->right!=NULL){
                q.push(temp1->right);
            }else{
                temp1->right = CreateNode(data);
                return root;
            }


            }


      };
      void inorder(binaryTreenode* temp){
        if(temp== NULL){
            return;
        }else {
            inorder(temp->left);
           cout<< temp->data<<" ";
            inorder(temp->right);
        }
      } 

      int main(){
   binaryTreenode* root = CreateNode(10);
    root->left = CreateNode(11);
    root->left->left = CreateNode(7);
    root->right = CreateNode(9);
    root->right->left = CreateNode(15);
    root->right->right = CreateNode(8);
        

        cout<<" inorder traversal before insertion ";
        inorder(root);
        int key =222;
        root= Insertion(root, key);
         cout<<endl; 
        cout<<"inorder traversal after insertion ";
        inorder (root);
        cout<<endl;
        return 0;

      }