//
// Created by AlvinZH on 2017/6/22.
// Copyright (c) AlvinZH. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

string S,P;
int LCS[105][105];

int getLCS()
{
    int Slen = S.length();
    int Plen = P.length();

    memset(LCS,0, sizeof(LCS));

    for(int i=0;i<Slen;i++)
    {
        for(int j=0;j<Plen;j++)
        {
            if(S[i] == P[j])
                LCS[i+1][j+1] = LCS[i][j]+1;
            else
            {
                if(LCS[i+1][j] >= LCS[i][j+1])
                    LCS[i+1][j+1] = LCS[i+1][j];
                else
                    LCS[i+1][j+1] = LCS[i][j+1];
            }
        }
    }

    return LCS[Slen][Plen];
}

int main()
{
    while(cin>>S>>P)
    {
        cout<<getLCS()<<endl;
    }
}