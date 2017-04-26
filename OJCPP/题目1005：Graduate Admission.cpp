//
// Created by AlvinZH on 2017/4/27.
// Copyright (c) AlvinZH. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int n,m,k;
typedef struct Student{
    int id;
    int GE;
    int GI;
    double Final;
    int choice[6];
}Student;
typedef struct School{
    int now;//已招人数
    int Max;//最大人数
    vector<int> admit;
}School;

Student Stu[40005];
School Sch[105];

bool cmp(Student a,Student b)
{
    if(a.Final!=b.Final) return a.Final>b.Final;
    else return a.GE>b.GE;
}

int main()
{
    while(~scanf("%d%d%d",&n,&m,&k))
    {
        for(int i=0;i<m;i++)
        {
            scanf("%d",&Sch[i].Max);
            Sch[i].now=0;
            Sch[i].admit.clear();
        }

        for(int i=0;i<n;i++)
        {
            Stu[i].id=i;
            scanf("%d %d",&Stu[i].GE,&Stu[i].GI);
            Stu[i].Final=(Stu[i].GE+Stu[i].GI)/2;
            for(int j=0;j<k;j++)
                scanf("%d",&Stu[i].choice[j]);
        }
        sort(Stu,Stu+n,cmp);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                int quota=Stu[i].choice[j];
                if(Sch[quota].now==0&&Sch[quota].Max==0) break;
                else if(Sch[quota].now<Sch[quota].Max)
                {
                    Sch[quota].now++;
                    Sch[quota].admit.push_back(i);
                    break;//已录取，退出
                }
                else
                {
                    int lastone=Sch[quota].admit[Sch[quota].now-1];
                    if(Stu[lastone].GE==Stu[i].GE&&Stu[lastone].GI==Stu[i].GI)
                    {
                        Sch[quota].now++;
                        Sch[quota].admit.push_back(i);
                        break;//已录取，退出
                    }
                }
            }
        }

        for(int i=0;i<m;i++)//实际ID还原
            for(int j=0;j<Sch[i].now;j++)
                Sch[i].admit[j]=Stu[Sch[i].admit[j]].id;

        for(int i=0;i<m;i++)
        {
            if(Sch[i].now==0) printf("\n");
            else if(Sch[i].now==1) printf("%d\n",Sch[i].admit[0]);
            else
            {
                sort(Sch[i].admit.begin(),Sch[i].admit.end());
                int flag = 1;
                for(int j=0;j<Sch[i].now;j++)
                {
                    if(flag) flag=0;
                    else printf(" ");

                    printf("%d",Sch[i].admit[j]);
                }
                printf("\n");
            }
        }
    }
}