//
// Created by AlvinZH on 2017/5/24.
// Copyright (c) AlvinZH. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

typedef struct Stu{
    char id[25];
    int Mark;
};

Stu S[1005];

bool cmp(const Stu &a,const Stu &b)
{
    if(a.Mark!=b.Mark)
        return a.Mark>b.Mark;
    else
        return strcmp(a.id,b.id)<0;
}

int main()
{
    int N,M,G;
    int Grade[11];
    int Count;
    while(~scanf("%d",&N)&&N!=0)
    {
        Count=0;
        scanf("%d %d",&M,&G);
        for(int i=1;i<=M;i++)
            scanf("%d",&Grade[i]);

        char Sid[25];
        int m;
        int Qid;
        int SumG;
        for(int i=1;i<=N;i++)
        {
            SumG=0;
            scanf("%s %d",&Sid,&m);
            for(int j=1;j<=m;j++)
            {
                scanf("%d",&Qid);
                SumG+=Grade[Qid];
            }

            if(SumG>=G)
            {
                strcpy(S[Count].id,Sid);
                S[Count].Mark=SumG;
                Count++;
            }
        }
        sort(S,S+Count,cmp);
        printf("%d\n",Count);
        for(int i=0;i<Count;i++)
            printf("%s %d\n",S[i].id,S[i].Mark);
    }
}