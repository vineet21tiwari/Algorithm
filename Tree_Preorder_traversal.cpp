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
	void preorder(Node* root){
		if(root!=NULL){
			cout<<root->data<<" ";
			preorder(root->left);
			preorder(root->right);
		}
	}
	void iterative_preorder(Node* root){
		Stack <Node*> st;
		st.push(root);
		while(!st.empty()){
			Node* temp = st.top();
			st.pop();
			cout<<temp->data<<" ";
			if(temp->right!=NULL)
				st.push(temp->right);
			if(temp->left!=NULL)
				st.push(temp->left);
		}
	}
};
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Binarytree bt;
    bt.root = new Node(10);
    bt.root->left = new Node(11);
    bt.root->right = new Node(-20);
    bt.root->left->left = new Node(15);
    bt.root->left->right = new Node(12);
    bt.root->right->left = new Node(0);
    bt.root->right->right = new Node(9);
    bt.root->right->left->left = new Node(16);
    bt.root->right->left->right = new Node(18);

    bt.preorder(bt.root);
    cout<<"\n";
    bt.iterative_preorder(bt.root);
   


   	
   	return 0;

}
