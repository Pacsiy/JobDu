//
// Created by AlvinZH on 2017/5/3.
// Copyright (c) AlvinZH. All rights reserved.
//

#include <cstdio>
#define N 1000
int uset[N];

void makeSet(int size)//操作一：建立并查集
{
    for(int i=1;i<=size;i++)
        uset[i]=-1;
}
int find(int x)//递归
{
    if(uset[x]==-1) return x;
    else
    {
        uset[x]=find(uset[x]);
        return uset[x];
    }
}
int main()
{
    int n,m;
    while(~scanf("%d",&n)&&n!=0)
    {
        scanf("%d",&m);
        makeSet(n);

        while(m--)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            a=find(a);
            b=find(b);
            if(a!=b) uset[a] = b;//简单合并
        }

        int ans = 0;
        for(int i=1;i<=n;i++)
            if(uset[i]==-1)
                ans++;

        printf("%d\n",ans-1);
    }
    return 0;
}