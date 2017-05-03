//
// Created by AlvinZH on 2017/5/3.
// Copyright (c) AlvinZH. All rights reserved.
//

#include <cstdio>
#include <cstring>

int main()
{
    int n,a;
    int hash[101];
    while(~scanf("%d",&n)&&n)
    {
        memset(hash,0,sizeof(hash));
        while(n--)
        {
            scanf("%d",&a);
            hash[a]++;
        }
        scanf("%d",&a);
        printf("%d\n",hash[a]);
    }
}
