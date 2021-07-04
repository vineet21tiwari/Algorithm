#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

long long int power(long long int x, long long int n){
	long long res = 1;
    while(n) {
        if (n & 1)
            res = res * x % MOD;
        n = n / 2;
        x = x * x % MOD;
    }
    return res;
}
void bubblesort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j = 0;j<n-1-i;j++){
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}
void selection(int a[],int n){
    for(int i=0;i<n-1;i++){
    	int min = i;
    	for(int j=i+1;j<n;j++){
    		if(a[j]<a[min])
    			min=j;
    	}
    	swap(a[i],a[min]);
    }
}
void insertion(int a[],int n){
    for(int i = 1;i<n;i++){
    	int x = a[i];
    	int j = i;
    	while(a[j-1]>x && j>=1){
    		a[j] = a[j-1];
    		j--;
    	}
    	a[j] = x;
    }
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //bubblesort(a,n);
    //selection(a,n);
    insertion(a,n);
    for(int i=0;i<n;i++){
    	cout<<a[i]<<" ";
    }

}
