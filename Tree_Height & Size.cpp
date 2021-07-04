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

	int height(Node* root){
		int lefttree,righttree;
		if(root==NULL)
			return -1;
		lefttree = height(root->left);
		righttree = height(root->right);
		return max(lefttree,righttree) + 1;

	}

	int size(Node* root){
		int lefttree,righttree;
		if(root==NULL)
			return 0;
		lefttree = size(root->left);
		righttree = size(root->right);
		return lefttree + righttree + 1;

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
    cout<<"Height of tree is :"<<bt.height(bt.root)<<"\n";
    cout<<"Size of tree is :"<<bt.size(bt.root)<<"\n";
   


   	
   	return 0;

}
