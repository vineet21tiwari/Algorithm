#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* next;
	Node(int x){
		this->data = x;
		this->next = NULL;
	}
};

class Stack{
public:
	Node* head;
	Stack(){
		this->head=NULL;
	}

	void push(int x){
		Node* newnode = new Node(x);
		if(head==NULL)
			head = newnode;
		else{
			newnode->next = head;
			head=newnode;
		}
	}

	int pop(){
		if(head==NULL){
			cout<<"Stack is empty"<<"\n";
			return INT_MIN;
		}
		else{
			Node* temp = head;
			head = head->next;
			int ans = temp->data;
			free(temp);
			return ans;
		}
	}
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n,element;
    cin>>n;
    Stack st;
    for(int i=0;i<n;i++){
    	cin>>element;
    	st.push(element);
    }
    cout<<"Popping result::"<<"\n";
    for(int i=0;i<n;i++){
    	int x = st.pop();
    	if(x!=INT_MIN)
    		cout<<x<<" ";
    }
    cout<<"\n";
    st.pop();

   	
   	return 0;

}
