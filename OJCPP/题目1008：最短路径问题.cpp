//
// Created by AlvinZH on 2017/4/29.
// Copyright (c) AlvinZH. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
using namespace std;

#define MAX 1010
#define INF 0x3f3f3f3f

int dis[MAX];//dis[i]表示起点到i的最短距离
int cost[MAX];//cost[i]表示起点到i的花费
bool vis[MAX];//是否访问过点i

struct node
{
    int dis,cost;
}map[MAX][MAX];

int n,m,a,b,d,p,s,t;

void SPFA()
{
    for(int i=1;i<=n;i++)//初始化
    {
        dis[i]=INF;
        cost[i]=INF;
        vis[i]=false;
    }
    queue<int> q;
    q.push(s);
    dis[s]=0;
    cost[s]=0;
    vis[s]=true;

    while(!q.empty())
    {
        int cur=q.front();
        q.pop();
        vis[cur]=false;
        for(int i=1;i<=n;i++)
        {
            if(map[cur][i].dis!=INF&&dis[i]>=dis[cur]+map[cur][i].dis)
            {
                dis[i]=dis[cur]+map[cur][i].dis;
                cost[i]=min(cost[i],cost[cur]+map[cur][i].cost);
                if(!vis[i])
                {
                    vis[i]=true;
                    q.push(i);
                }
            }
        }
    }
}
int main()
{
    while(~scanf("%d%d",&n,&m)&&n&&m)
    {
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                map[i][j].dis=INF;
                map[i][j].cost=INF;
            }

        for(int i=1;i<=m;i++)
        {
            scanf("%d%d%d%d",&a,&b,&d,&p);
            map[a][b].dis=map[b][a].dis=d;
            map[a][b].cost=map[b][a].cost=p;
        }
        scanf("%d%d",&s,&t);
        SPFA();
        printf("%d %d\n",dis[t],cost[t]);
    }
    return 0;
}