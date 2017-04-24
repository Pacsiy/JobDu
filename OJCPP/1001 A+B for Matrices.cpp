//
// Created by Administrator on 2017/4/24.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,m,a;
    int mat1[100][100];
    int ans;
    while(~scanf("%d",&n))
    {
        if(n==0) break;
        scanf("%d",&m);
        ans=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                scanf("%d",&mat1[i][j]);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                scanf("%d",&a);
                mat1[i][j]+=a;
            }

        for(int i=0;i<n;i++)
        {
            bool flag=true;
            for(int j=0;j<m;j++)
            {
                if(mat1[i][j]!=0)
                {
                    flag=false;
                    break;
                }
            }
            if(flag) ans++;
        }
        for(int j=0;j<m;j++)
        {
            bool flag=true;
            for(int i=0;i<n;i++)
            {
                if(mat1[i][j]!=0)
                {
                    flag=false;
                    break;
                }
            }
            if(flag) ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}