#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;
	Node(int x){
		data = x;
		left = NULL;
		right = NULL;
	}
};
class BST{
public:
	Node* root;
	BST(){
		root = NULL;
	}
	void inorder(Node* root){
		if(root!=NULL){
			inorder(root->left);
			cout<<root->data<<" ";
			inorder(root->right);
		}
	}
	Node* searchkey(Node* node,int key){
		if(node==NULL ||node->data==key)
			return node;
		if(key < node->data)
			return searchkey(node->left,key);
		else
			return searchkey(node->right,key);
	}
	void search(int key){
			Node* node = searchkey(this->root,key);
			if(node!=NULL)
				cout<<"Key found"<<"\n";
			else
				cout<<"Key mot found"<<"\n";
	}
	Node* insert(Node* temp, int key){
		if(temp==NULL){
			temp = new Node(key);
			return temp;
		}
		if(key<temp->data){
			temp->left = insert(temp->left,key);
		}
		else
			temp->right = insert(temp->right,key);

		return temp;
	}
	void addkey(int key){
		root = insert(root,key);
	}
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    BST bt;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>x;
    	bt.addkey(x);
    }
    bt.inorder(bt.root);
    cout<<"\n";
    bt.search(11);
   	return 0;

}
