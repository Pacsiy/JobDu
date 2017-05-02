//
// Created by AlvinZH on 2017/5/2.
// Copyright (c) AlvinZH. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

//判断闰年
#define ISYEAP(x) (x%100!=0&&x%4==0)||x%400==0?1:0

int DayOfMonth[13][2]={
        0,0,
        31,31,
        28,29,
        31,31,
        30,30,
        31,31,
        30,30,
        31,31,
        31,31,
        30,30,
        31,31,
        30,30,
        31,31
};

typedef struct Date{
    int day;
    int month;
    int year;
    void nextDay()
    {
        day++;
        if(day>DayOfMonth[month][ISYEAP(year)])
        {
            day=1;
            month++;
            if(month>12)
            {
                month=1;
                year++;
            }
        }
    }
};

int buf[5001][13][32];

int main()
{
    Date tmp;
    int cnt=0;
    tmp.day=1;
    tmp.month=1;
    tmp.year=0;
    while(tmp.year!=5001)//预处理
    {
        buf[tmp.year][tmp.month][tmp.day]=cnt;

        tmp.nextDay();
        cnt++;
    }

    int d1,m1,y1;
    int d2,m2,y2;
    while(~scanf("%4d%2d%2d",&y1,&m1,&d1))
    {
        scanf("%4d%2d%2d",&y2,&m2,&d2);

        printf("%d\n",abs(buf[y1][m1][d1]-buf[y2][m2][d2]));
    }
}
