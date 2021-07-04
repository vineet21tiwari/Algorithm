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
	void postorder(Node* root){
		if(root!=NULL){
			postorder(root->left);
			postorder(root->right);
			cout<<root->data<<" ";
		}
	}
	void iterative_postorder(Node* root){
		stack<Node*> s1;
		stack<Node*> s2;

		if(root==NULL)
			return;
		s1.push(root);
		while(!s1.empty()){
			Node* temp = s1.top();
			s1.pop();
			s2.push(temp);
			if(temp->left!=NULL)
				s1.push(temp->left);
			if(temp->right!=NULL)
				s1.push(temp->right);
		}
		while(!s2.empty()){
			Node* temp = s2.top();
			cout<<temp->data<<" ";
			s2.pop();
		}
	}
};
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Binarytree bt;
    bt.root = new Node(1);
    bt.root->left = new Node(-1);
    bt.root->right = new Node(11);
    bt.root->left->left = new Node(-2);
    bt.root->left->right = new Node(-3);
    bt.root->left->right->right = new Node(5);
    bt.root->right->left = new Node(21);
    bt.root->right->right = new Node(6);

    bt.postorder(bt.root);
    cout<<"\n";
    bt.iterative_postorder(bt.root);


   


   	
   	return 0;

}
