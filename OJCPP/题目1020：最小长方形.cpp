//
// Created by AlvinZH on 2017/5/24.
// Copyright (c) AlvinZH. All rights reserved.
//

#include <cstdio>

int main()
{
    int x,y;
    while(~scanf("%d %d",&x,&y))
    {
        if(x==0&&y==0) break;
        else
        {
            int left=x,right=x,up=y,down=y;
            while(~scanf("%d %d",&x,&y))
            {
                if(x==0&&y==0) break;
                else
                {
                    left=left>x?x:left;
                    right=right<x?x:right;
                    up=up<y?y:up;
                    down=down>y?y:down;
                }
            }
            printf("%d %d %d %d\n",left,down,right,up);
        }
    }
}