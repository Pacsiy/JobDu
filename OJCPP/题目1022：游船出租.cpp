//
// Created by AlvinZH on 2017/5/17.
// Copyright (c) AlvinZH. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>

using namespace std;

typedef struct{
    char SorE;
    int h;
    int m;
}Record;

Record R[105];

int main()
{
    int id;
    char c;
    char time[6];
    int sumF=0;
    double sumT=0;
    while(~scanf("%d",&id) && id!=-1)
    {
        scanf(" %c %s",&c,&time);
        if(id==0)
        {
            if(sumF>0)
                printf("%d %.0f\n",sumF,sumT/sumF);
            else printf("0 0\n");

            for(int i=1;i<=100;i++)
                R[i].SorE='0';
            sumF=0;
            sumT=0;
        }
        else
        {
            if(c=='S')
            {
                R[id].SorE='S';
                R[id].h=(time[0]-'0')*10+(time[1]-'0');
                R[id].m=(time[3]-'0')*10+(time[4]-'0');
            }
            else if(c=='E')
            {
                if(R[id].SorE=='S'){
                    int hh=(time[0]-'0')*10+(time[1]-'0');
                    int mm=(time[3]-'0')*10+(time[4]-'0');
                    sumF++;
                    sumT+=(hh-R[id].h)*60+(mm-R[id].m);
                }
            }
        }
    }
}