#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data= x;
        left=NULL;
        right= NULL;

    }
void inorder(Node* root){
    if(root == nullptr)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    //cout<<root->data<<" ";
}
};

int main(){
    Node* n1= new Node(1);
    Node* n2= new Node(2);
    Node* n3= new Node(3);
    Node* n4= new Node(4);
    Node* n5= new Node(5);
    Node* n6= new Node(6);
    Node* n7= new Node(7);
    Node* root=n1;
    n1->left=n2;
    n1->right=n3;
    n2->left=n4;
    n2->right=n5;
    n3->left=n6;
    n3->right=n7;
    inorder(root);
    while(true){
        int val;
        cin>>val;
        root=insert(root,val);
        int exit;
        cin>>val;
    }
    return 0;
 }
