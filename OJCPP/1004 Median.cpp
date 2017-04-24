//
// Created by AlvinZH on 2017/4/24.
// Copyright (c) AlvinZH. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int n,m;
long long a[1000005];
long long b[1000005];

int main()
{
    while(~scanf("%d",&n))
    {
        for(int i=0;i<n;i++)
            scanf("%lld",&a[i]);
        scanf("%d",&m);
        for(int i=0;i<m;i++)
            scanf("%lld",&b[i]);

        long long ans;
        int p=0,q=0;
        for(int i=1;i<=(n+m-1)/2;i++)
        {
            if(p==n) q++;
            else if(q==m) p++;
            else if(a[p]<b[q]) p++;
            else q++;
        }
        if(p==n) ans=b[q];
        else if(q==m) ans=a[p];
        else ans=min(a[p],b[q]);
        printf("%lld\n",ans);
    }
}