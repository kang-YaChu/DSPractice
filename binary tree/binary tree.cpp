#include <iostream>
#include "node.h"
using namespace std;

int main(int argc, char *argv[]){
    Node tree;
    Node *n1 =new Node();
    Node *n2 =new Node();
    Node *n3 =new Node();
    Node *n4 =new Node();
    Node *n5 =new Node();
    Node *n6 =new Node();
    Node *n7 =new Node();

    cout<<"Please input node data: "<<endl;
    cin>>n1->data>>n2->data>>n3->data>>n4->data>>n5->data>>n6->data>>n7->data;

    Node *root_=n1;
    n1->left=n2;
    n1->right=n3;
    n2->left=n4;
    n2->right=n5;
    n3->left=n6;
    n3->right=n7;
    n4->left=NULL;
    n4->right=NULL;
    n5->left=NULL;
    n5->right=NULL;
    n6->left=NULL;
    n6->right=NULL;
    n7->left=NULL;
    n7->right=NULL;

    cout<<"search_breadth: "<<endl;
    tree.search_breadth(root_);
    cout<< std::endl;
    cout<< "search_preorder: "<<endl;
    tree.search_preorder(root_);
    cout<< std::endl;
    cout<<"search_inorder: "<<endl;
    tree.search_inorder(root_);
    cout<<endl;
    cout<<"search_postorder: "<<endl;
    tree.search_postorder(root_);
}

