//
// Created by AlvinZH on 2017/5/3.
// Copyright (c) AlvinZH. All rights reserved.
//

#include <cstdio>
#include <cstdlib>
#define MAXN 10010
using namespace std;

int Uset[MAXN];//并查集
int Rank[MAXN];//秩
typedef struct{
    int a, b, price;
}Node;
Node edge[MAXN];

int cmp(const void*a, const void *b){
    return ((Node*)a)->price - ((Node*)b)->price;
}

void Init(int n)//并查集初始化
{
    for(int i = 0; i < n; i++)
    {
        Rank[i] = 0;
        Uset[i] = i;
    }
}

int find(int x)
{
    int root = x;
    while(root != Uset[root]) root = Uset[root];
    while(x != root)
    {
        int t = Uset[x];
        Uset[x] = root;
        x = t;
    }
    return root;
}

void unionSet(int x, int y)
{
    x = find(x);
    y = find(y);
    if(Rank[x] > Rank[y])
        Uset[y] = x;
    else {
        Uset[x] = y;
        if(Rank[x] == Rank[y]) Rank[y]++;
    }
}

int Kruskal(int n, int m)
{
    int nEdge = 0, res = 0;

    qsort(edge, m, sizeof(edge[0]), cmp);//将边按照权值从小到大排序
    for(int i = 0; i < m && nEdge != n - 1; i++)
    {
        if(find(edge[i].a) != find(edge[i].b))//判断当前这条边的两个端点是否属于同一棵树
        {
            unionSet(edge[i].a, edge[i].b);
            res += edge[i].price;
            nEdge++;
        }
    }
    //如果加入边的数量小于m - 1,则表明该无向图不连通,等价于不存在最小生成树
    if(nEdge < n-1) res = -1;
    return res;
}
int main()
{
    int n, m, ans;//n为村庄的数量，m为边的数量
    while(scanf("%d%d", &n, &m)&&n)
    {
        Init(n);
        for(int i = 0; i < m; i++)
            scanf("%d%d%d", &edge[i].a, &edge[i].b, &edge[i].price);

        ans = Kruskal(n, m);
        if(ans == -1) printf("?\n");
        else printf("%d\n", ans);
    }
    return 0;
}