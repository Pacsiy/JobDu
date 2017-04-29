//
// Created by AlvinZH on 2017/4/29.
// Copyright (c) AlvinZH. All rights reserved.
//
#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef struct Country{
    int id;
    int gold;
    int sum;
    int pop;

    double gp;//金牌人口比例
    double sp;//奖牌人口比例

    int R[5];

    Country(int a,int b,int c)
    {
        gold=a;sum=b;pop=c;
        gp=(double)a/c;
        sp=(double)b/c;
    }
}Country;

vector<Country> ALL;
vector<Country> C;

bool cmp1(Country a,Country b)
{
    return a.gold>b.gold;
}
bool cmp2(Country a,Country b)
{
    return a.sum>b.sum;
}
bool cmp3(Country a,Country b)
{
    return a.gp>b.gp;
}
bool cmp4(Country a,Country b)
{
    return a.sp>b.sp;
}
bool cmp5(Country a,Country b)
{
    return a.id<b.id;
}

int main()
{
    int n,m;
    while(~scanf("%d %d",&n,&m))
    {
        ALL.clear();
        C.clear();
        int a,b,c;
        for(int i=0;i<n;i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            ALL.push_back(Country(a,b,c));
        }
        for(int i=0;i<m;i++)
        {
            scanf("%d",&a);
            C.push_back(ALL[a]);
            C[i].id=i;
        }

        sort(C.begin(),C.end(),cmp1);
        for(int i=0;i<n;i++)
        {
            int rank=i;
            while(rank>0&&C[i].gold==C[rank-1].gold)
                rank--;

            C[i].R[1]=rank+1;
        }
        sort(C.begin(),C.end(),cmp2);
        for(int i=0;i<n;i++)
        {
            int rank=i;
            while(rank>0&&C[i].sum==C[rank-1].sum)
                rank--;

            C[i].R[2]=rank+1;
        }
        sort(C.begin(),C.end(),cmp3);
        for(int i=0;i<n;i++)
        {
            int rank=i;
            while(rank>0&&C[i].gp==C[rank-1].gp)
                rank--;

            C[i].R[3]=rank+1;
        }
        sort(C.begin(),C.end(),cmp4);
        for(int i=0;i<n;i++)
        {
            int rank=i;
            while(rank>0&&C[i].sp==C[rank-1].sp)
                rank--;

            C[i].R[4]=rank+1;
        }
        sort(C.begin(),C.end(),cmp5);
        for(int k=0;k<m;k++)
        {
            int choice=1;
            int rank=C[k].R[1];
            for(int i=1;i<=4;i++)
            {
                if(C[k].R[i]<rank)
                {
                    choice=i;
                    rank=C[k].R[i];
                }
            }
            printf("%d:%d\n",rank,choice);
        }
        printf("\n");
    }
}
