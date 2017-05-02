//
// Created by AlvinZH on 2017/5/2.
// Copyright (c) AlvinZH. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

int a[10005];
int s,e;

int MaxSum(int n)
{
    int sum=0,b=0,tempS=0;
    for(int i=0;i<n;i++)
    {
        if(b>0)
        {
            b+=a[i];
        }
        else
        {
            b=a[i];
            tempS=i;
        }
        if(b>sum)
        {
            sum=b;
            s=tempS;
            e=i;
        }
    }
    return sum;
}

int main()
{
    int n;
    while(~scanf("%d",&n)&&n)
    {
        s=e=0;
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);

        int ans=MaxSum(n);
        printf("%d %d %d\n",ans,a[s],a[e]);
    }
}