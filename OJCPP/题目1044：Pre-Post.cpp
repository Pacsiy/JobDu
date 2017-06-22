//
// Created by AlvinZH on 2017/6/22.
// Copyright (c) AlvinZH. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int ans;

int Cal(int n,int m)
{
    if(n==m) return 1;
    else if(m==1) return n;
    else return Cal(n-1,m)+Cal(n-1,m-1);
}

void Solve(char *A,char*B,int n)
{
    int len = strlen(A);
    if(len==1) return;
    A=A++;
    B[len-1]='\0';//忽略开头

    int subtreeCount=0;
    while(*A)
    {
        int i=0;
        char AA[27],BB[27];
        while(A[0]!=B[i])
        {
            AA[i]=A[i];
            BB[i]=B[i];
            i++;
        }
        AA[i]=A[i];AA[i+1]='\0';
        BB[i]=B[i];BB[i+1]='\0';
        subtreeCount++;//统计在当前层的子树个数

        A=A+i+1;
        B=B+i+1;
        Solve(AA,BB,n);
    }
    ans=ans*Cal(n,subtreeCount);
}

int main()
{
    int n;
    char A[27],B[27];
    while(~scanf("%d",&n)&&n)
    {
        scanf("%s%s",&A,&B);
        ans=1;
        Solve(A,B,n);
        printf("%d\n",ans);
    }
}
 