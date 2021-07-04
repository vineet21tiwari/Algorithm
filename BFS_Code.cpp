#define maxSize 1000100
vector<int> arr[maxSize];
queue<int> q;
bool visited[maxSize];
fill(visited,visited+maxSize,false);
int vertices,u,v;
cin >> vertices ;

for(int i=0;i<vertices;i++){
	cin >> u >> v;
	adj[u].push_back(v);
	adj[v].push_back(u);
}
q.push(0);
while(!q.empty){
	int x = q.front();
	cout<<x<<" ";
	q.pop();
	for(int i=0;i<arr[x].size();i++){
		if(!visited[arr[x][i]]){
			visited[arr[x][i]]=true;
			q.push(arr[x][i]);
		
		}
			
	}
	

}