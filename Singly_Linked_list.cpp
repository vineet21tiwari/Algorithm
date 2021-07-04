#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node(int data){
		this->data = data;
		this->next = NULL;
	}
};

class linkedlist{
public:
	Node* head;
	linkedlist(){
		this->head = NULL;
	}

	void insert_at_start(int data){
		Node* newnode = new Node(data);
		if(head==NULL)
			head = newnode;
		else{
			newnode->next = head;
			head = newnode;
		}
	}

	void insert_at_end(int data){
		Node* newnode = new Node(data);
		Node* temp = head;
		if(head==NULL)
			head = newnode;
		else{
			while(temp->next!=NULL){
				temp = temp->next;
			}
			temp->next = newnode;
		}
	}

	void insert_at_pos(int data,int pos){
		Node* newnode = new Node(data);
		Node* temp = head;
		while(pos--){
			temp = temp->next;
		}
		newnode->next = temp->next;
		temp->next = newnode;

	}

};

void printlist(Node* temp){
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<"\n";
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    linkedlist* list = new linkedlist();
    for(int i=0;i<n;i++){
    	int x;
    	cin>>x;
    	list->insert_at_start(x);

    }
    linkedlist* list2 = new linkedlist();
    printlist(list->head);
    for(int i=0;i<n;i++){
    	int x;
    	cin>>x;
    	list2->insert_at_end(x);
    }
    printlist(list2->head);
    

}
