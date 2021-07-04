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
	void inorder(Node* root){
		if(root!=NULL){
			inorder(root->left);
			cout<<root->data<<" ";
			inorder(root->right);
		}
	}
	void iterative_inorder(Node* root){
		if(root==NULL)
			return;
		stack<Node*> st;
		while(true){
			if(root!=NULL){
				st.push(root);
				root = root->left;
			}
			else{
				if(st.empty())
					break;
				root = st.top();
				st.pop();
				cout<<root->data<<" ";
				root = root->right;
			}
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
    bt.root->right = new Node(16);
    bt.root->left->left = new Node(2);
    bt.root->left->right = new Node(-1);
    bt.root->right->left = new Node(10);
    bt.root->right->left->left = new Node(9);
    bt.root->right->left->right = new Node(11);

    bt.inorder(bt.root);
    cout<<"\n";
    bt.iterative_inorder(bt.root);


   	
   	return 0;

}
