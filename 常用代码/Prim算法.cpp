//
// Created by AlvinZH on 2017/5/3.
// Copyright (c) AlvinZH. All rights reserved.
//

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

const int INF=0x3f3f3f3f;
const int N=101;

int G[N][N];//邻接矩阵
int Lowest[N];//表示和已选顶点集Vnew的最小距离，Lowest[i]=0表示点i已经在Vnew中
int n,m;

int prim()
{
    int Num=0;//最小生成树权值

    for(int i=2;i<=n;i++)//选取第一个点开始
        Lowest[i]=G[1][i];//取第一行权值

    for(int i=1;i<n;i++)//找到新顶点加入（n-1个）
    {
        int minid=0;
        int mindis=INF;
        for(int j=2;j<=n;j++)//找到距离最小的
        {
            if(Lowest[j]!=0&&Lowest[j]<mindis)
            {
                mindis=Lowest[j];
                minid=j;
            }
        }
        Num+=mindis;
        Lowest[minid]=0;//把点minid加入Vnew

        for(int j=2;j<=n;j++)//更新Lowest数组
            if(Lowest[j]>G[minid][j])
                Lowest[j]=G[minid][j];
    }
    return Num;
}

int main()
{
    while(~scanf("%d%d",&n,&m))
    {
        memset(G,0x3f,sizeof(G));//初始化为最大值
        for(int i=1;i<=n;i++)//对角线为0
            G[i][i]=0;

        int u,v,w;
        for(int i=1;i<=m;i++)
        {
            scanf("%d%d%d",&u,&v,&w);
            G[u][v]=G[v][u]=w;
        }

        int MST=prim();//计算最小生成树总权值

        printf("%d\n",MST);
    }
}