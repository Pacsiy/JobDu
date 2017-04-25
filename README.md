# JobDu
从4月23日开始学习，努力把自己变得更好。
## List
*   [题目1000：计算a+b(简单测试)](#-题目1000计算a+b)
*   [题目1001：A+B for Matrices(简单循环)](#-题目1001A+BforMatrices)
*	[题目1002：Grading(简单判断)](#-题目1002grading)



## Detail


#### <br><font color = Green size=5> <span id="1002">题目1000：计算a+b</span></font>
#### Jobdu Link:<br>
[http://ac.jobdu.com/problem.php?pid=1000](http://ac.jobdu.com/problem.php?pid=1000)
#### Source code:<br>
[http://www.cnblogs.com/AlvinZH/p/6759724.html](http://www.cnblogs.com/AlvinZH/p/6759724.html)
#### Problem description:<br>
>简单a+b测试，没什么限制，入门级题目。<br>
#### <font color = Blue size = 5> Analysis:</font>
>scanf、printf或者cin、cout都可以呀！
## [Back to list](#list)


#### <br><font color = Green size=5> <span id="1001">题目1001：A+B for Matrices</span></font>
#### Jobdu Link:<br>
[http://ac.jobdu.com/problem.php?pid=1001](http://ac.jobdu.com/problem.php?pid=1001)
#### Source code:<br>
[http://www.cnblogs.com/AlvinZH/p/6759742.html](http://www.cnblogs.com/AlvinZH/p/6759742.html)
#### Problem description:<br>
>题目的意思是：给你两个形式相同的矩阵，对应位置相加得到新矩阵，计算里面全为0的行数和列数。<br>
#### <font color = Blue size = 5> Analysis:</font>
>这里其实只需要开一个二维数组就可以，我们可以在输入第二个矩阵时就在第一个矩阵的基础上做运算就可以了。<br>
## [Back to list](#list)


#### <br><font color = Green size=5> <span id="1002">题目1002：Grading</span></font>
#### Jobdu Link:<br>
[http://ac.jobdu.com/problem.php?pid=1002](http://ac.jobdu.com/problem.php?pid=1002)
#### Source code:<br>
[http://www.cnblogs.com/zpfbuaa/p/6711256.html](http://www.cnblogs.com/zpfbuaa/p/6711256.html)
#### Problem description:<br>
>题目背景为高考试卷批改打分制度。<br>
>对于每一道题，至少需要两位评审老师进行打分，当两个老师的打分结果相差在可接受范围内，那么该题最终得分为两位老师所给分数的平均分。<br>
>当打分相差较大超过可接受范围时，需要第三位评审老师打分。<br>
>如果第三位评审老师所给分数之和其中一位老师所给分数相差在可接受范围内，则最终分数为这两位老师所给分数的平均分。<br>
>如果第三位老师所给分数和前面两位老师所给分数之差均为可接受范围内，则最终分数取三位老师所给分数的最高分。<br>
>如果第三位老师所给分数和前面两位所给分数之差均超过可接受范围，则需要第四位评审老师给出分数，最终分数为第四位老师所给分数。
#### <font color = Blue size = 5> Analysis:</font>
>原题目为英文，看懂题目就很简单了，一个一个判断。注意使用类型为double。并要注意输出精确到小数点后一位，使用`printf("%.1lf\n",ans);`
## [Back to list](#list)
