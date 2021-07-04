#include <bits/stdc++.h>
using namespace std;
class Stack{
public:
		int *arr;
		int top;
		int capacity;

		Stack(int x){
			this->capacity = x;
			arr = new int[x];
			top = -1;
		}

		void push(int x){
			if(top+1==capacity)
				cout<<"STack is full"<<"\n";
			else{
				top++;
				arr[top] = x;
			}
		}

		int pop(){
			if(top==-1){
				cout<<"Stack is empty"<<"\n";
				return INT_MIN;}
			else{
				int temp = arr[top];
				top--;
				return temp;
			}
		}
		
};
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int capacity,n,element;
    cin>>capacity>>n;
    Stack st(capacity);
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


   	
   	return 0;

}
