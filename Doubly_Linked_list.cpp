#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* prev;
	Node* next;

	Node(int data){
		this->data = data;
		this->prev = NULL;
		this->next = NULL;
	}
};

class doubly_ll{
public:
	Node* head ;
	doubly_ll(){
		this->head = NULL;
	}

	void insert_at_start(int data){
		Node* newnode = new Node(data);
		if(head==NULL){
			head = newnode;
		}
		else{
		newnode->next = head;
		head->prev =  newnode;
		head = newnode;
	}

	}

	void insert_at_end(int data){
		Node* newnode = new Node(data);
		if(head==NULL){
			head = newnode;
			return;
		}
		Node* temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->prev = temp;
	}

	void delete_at_start(){
		Node* temp = head;
		if(head==NULL){
			cout<<"deletion cannot be performed"<<"\n";
			return;
		}
		head = temp->next;
		head->prev = NULL;
		free(temp);
	}

	void delete_at_end(){
		Node* temp = head;
		if(head==NULL){
			cout<<"Deletion cannot be performed"<<"\n";
			return;
		}
		Node* temp1;
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		temp1 = temp->next;
		temp->next=NULL;
		free(temp1);
	}


};
void printlist(Node* temp){
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
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
    doubly_ll* list = new doubly_ll();
    for(int i=0;i<n;i++){
    	int x;
    	cin>>x;
    	list->insert_at_start(x);
    }

    doubly_ll* list2 = new doubly_ll();
    printlist(list->head);
    for(int i=0;i<n;i++){
    	int x;
    	cin>>x;
    	list2->insert_at_end(x);
    }
   	printlist(list2->head);
    list2->delete_at_start();
    printlist(list2->head);
    list2->delete_at_end();
    printlist(list2->head);
    

}
