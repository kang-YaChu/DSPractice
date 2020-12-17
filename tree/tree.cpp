#include <iostream>
 
using namespace std;

struct Node {
  int data;
  Node *children;
  Node *parent;
  };

Node *root1,*root2;
Node *node1,*node2,*node3,*node4,*node5;

int root() {
	cout<<"root= "<<root1->data<<endl;
	return root1->data;
	}

void addChild(Node *p, Node *n){
	p->children=n;
	cout<<"設定節點 "<<n->data<<" 為節點 "<<p->data<<" 的子節點"<<endl;
	}

void cut(Node *t) {
	root2=t;
	cout<<"把節點 "<<t->data<<" 設為子樹的根節點"<<endl; 
	}

void paste(Node *n, Node *t) {
	n->children=root2;
	cout<<"把節點 "<<t->data<<" 的子樹貼到節點 "<<n->data<<" 下方"<<endl;
	}

int main() {
	node1=new Node;
	node1->data=1;
	node2=new Node;
	node2->data=2;
	node3=new Node;
	node3->data=3;
	node4=new Node;
	node4->data=4;
	node5=new Node;
	node5->data=5;
	
	root1=node1;
	node2->parent=node1;
	node3->parent=node1;
	node1->children=node2;
	node1->children=node3;
	node4->parent=node2;
	node2->children=node4;
	node5->parent=node3;
	node3->children=node5;
	node4->children=NULL;
	node5->children=NULL;
	
	root();
	addChild(node2,node5); 
	cut(node3);
	paste(node3,node2);
}
/*	 	   n1
         /   \
		n2	  n3
	   /	   \
 	  n4       n5                */
