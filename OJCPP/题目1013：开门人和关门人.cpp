//
// Created by AlvinZH on 2017/5/5.
// Copyright (c) AlvinZH. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

char S[64];
char E[64];
int Sh,Sm,Ss;//记录最早签到时间
int Eh,Em,Es;//记录最晚签退时间
bool early,later;

void solve(char *id,char *Stime,char *Etime)
{
    int sh=(Stime[0]-'0')*10+(Stime[1]-'0');
    int sm=(Stime[3]-'0')*10+(Stime[4]-'0');
    int ss=(Stime[6]-'0')*10+(Stime[7]-'0');

    int eh=(Etime[0]-'0')*10+(Etime[1]-'0');
    int em=(Etime[3]-'0')*10+(Etime[4]-'0');
    int es=(Etime[6]-'0')*10+(Etime[7]-'0');

    if(sh!=Sh) early=sh<Sh;
    else if(sm!=Sm) early=sm<Sm;
    else early=ss<Ss;

    if(eh!=Eh) later=eh>Eh;
    else if(em!=Em) later=em>Em;
    else later=es<Es;

    if(early)
    {
        strcpy(S,id);
        Sh=sh;Sm=sm;Ss=ss;
    }
    if(later)
    {
        strcpy(E,id);
        Eh=eh;Em=em;Es=es;
    }
}

int main()
{
    int n,m;
    char id[64];
    char Stime[10];
    char Etime[10];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        Sh=24;Sm=60;Ss=60;
        Eh=0;Em=0;Es=0;

        scanf("%d",&m);
        for(int j=0;j<m;j++)
        {
            scanf("%s %s %s",id,Stime,Etime);
            solve(id,Stime,Etime);
        }
        printf("%s %s\n",S,E);
    }
}
