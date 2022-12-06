// https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/
#include <vector>
#include<iostream>
using namespace std;
#define int long long
#define endl "\n"
vector<bool> visited(15000);
vector<int> graph[15000];
void dfs(int vertext)
{
	visited[vertext]=1;
	for(int child:graph[vertext])
	{
		if(!visited[child])
		{
			dfs(child);
		}
	}
}
signed main() {
	int n,m;
	cin>>n>>m;
	while(m--)
	{
		int v1,v2;
		cin>>v1>>v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			dfs(i);
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}