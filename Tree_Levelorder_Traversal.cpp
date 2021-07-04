#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* left;
	Node* right;
	Node(int x){
		this->data = x;
		this->left = NULL;
		this->right = NULL;
	}
};

class Binarytree{
public:
	Node* root;
	Binarytree(){
		this->root = NULL;
	}
	void levelorder(Node* root){
		if(root==NULL)
			return;
		queue <Node*> q;
		q.push(root);
		while(!q.empty()){
			Node* temp = q.front();
			q.pop();
			cout<<temp->data<<" ";
			if(temp->left!=NULL)
				q.push(temp->left);
			if(temp->right!=NULL)
				q.push(temp->right);
		}
		cout<<"\n";
	}
};
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Binarytree bt;
    bt.root = new Node(1);
    bt.root->left = new Node(2);
    bt.root->right = new Node(3);
    bt.root->left->left = new Node(4);
    bt.root->left->right = new Node(5);
    bt.root->right->left = new Node(6);
    bt.root->right->right = new Node(7);

    bt.levelorder(bt.root);
   


   	
   	return 0;

}
