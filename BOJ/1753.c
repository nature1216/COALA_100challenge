#include<stdio.h>
using namespace std;

class Compare
{
	public:
		bool operator()(pair<pair<int, int>, int> a, pair<pair<int, int> int> b)
		{ return a.second>b.second;	}
};

int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>> cost(n,vector<int> (m,0));
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>cost[i][j];
	vector<vector<int>> state(n, vector<int> (m, INT_MAX));
	state[0][0] = cost[0][0];
	priority_queue<pair<pair<int, int>, int>, vector<pair<pair<int, int>, int>>, Compare> pq;
	if(cost[0][0]==-1 | cost[n-1][m-1]==-1)
	{
		cout<<-1;
		return 0;
	}
	pq.push({{0,0},state[0][0]});
	while(!pq.empty())
	{
		int y = pq.top().first.first, x = pq.top().first.second, c = pq.top().second;
		pq.top();
		state[y][x] = min(state[y][x],c);
		for(int i=0;i<4;i++)
		{
			int ny = y+dy[i],nx = x+dx[i];
			if(ny>=n || nx>=m || ny<0 || nx<0) continue;
			if(cost[ny][nx]==-1) continue;
			if(state[ny][nx]>c+cost[ny][nx])
			{
				state[ny][nx] = c+cost[ny][nx];
				pq.push({ny,nx},c+cost[ny][nx]);
			}
		}
	}
	if(state[n-1][m-1]==INT_MAX) cout<<-1;
	else cout<<state[n-1][m-1];
	
	return 0;
}
