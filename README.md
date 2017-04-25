# JobDu
从4月23日开始学习，努力把自己变得更好。
## List
*   [题目1000：计算a+b(简单测试)](#-题目1000计算a+b)
*   [题目1001：A+B for Matrices(简单循环)](#-题目1001A+BforMatrices)
*	[题目1002：Grading(简单判断)](#-题目1002grading)
*   [题目1003：A+B(字符串转数字)](#-题目1003A+B)
*   [题目1004：Median(查找中位数)](题目1004Median)

## Detail


#### <font color = Green size=5> <span id="1000">题目1000：计算a+b</span></font>
#### Jobdu Link:<br>
[http://ac.jobdu.com/problem.php?pid=1000](http://ac.jobdu.com/problem.php?pid=1000)
#### Source code:<br>
[http://www.cnblogs.com/AlvinZH/p/6759724.html](http://www.cnblogs.com/AlvinZH/p/6759724.html)
#### Problem description:<br>
>简单a+b测试，没什么限制，入门级题目。<br>
#### <font color = Blue size = 5> Analysis:</font>
>scanf、printf或者cin、cout都可以呀！
## [Back to list](#list)


#### <font color = Green size=5> <span id="1001">题目1001：A+B for Matrices</span></font>
#### Jobdu Link:<br>
[http://ac.jobdu.com/problem.php?pid=1001](http://ac.jobdu.com/problem.php?pid=1001)
#### Source code:<br>
[http://www.cnblogs.com/AlvinZH/p/6759742.html](http://www.cnblogs.com/AlvinZH/p/6759742.html)
#### Problem description:<br>
>题目的意思是：给你两个形式相同的矩阵，对应位置相加得到新矩阵，计算里面全为0的行数和列数。<br>
#### <font color = Blue size = 5> Analysis:</font>
>这里其实只需要开一个二维数组就可以，我们可以在输入第二个矩阵时就在第一个矩阵的基础上做运算就可以了。<br>
## [Back to list](#list)


#### <font color = Green size=5> <span id="1002">题目1002：Grading</span></font>
#### Jobdu Link:<br>
[http://ac.jobdu.com/problem.php?pid=1002](http://ac.jobdu.com/problem.php?pid=1002)
#### Source code:<br>
[http://www.cnblogs.com/AlvinZH/p/6759757.html](http://www.cnblogs.com/AlvinZH/p/6759757.html)
#### Problem description:<br>
>题目背景为高考试卷批改打分制度。<br>
>对于每一道题，至少需要两位评审老师进行打分，
当两个老师的打分结果相差在可接受范围内，那么该题最终得分为两位老师所给分数的平均分。<br>
>当打分相差较大超过可接受范围时，需要第三位评审老师打分。<br>
>如果第三位评审老师所给分数之和其中一位老师所给分数相差在可接受范围内，
则最终分数为这两位老师所给分数的平均分。<br>
>如果第三位老师所给分数和前面两位老师所给分数之差均为可接受范围内，
则最终分数取三位老师所给分数的最高分。<br>
>如果第三位老师所给分数和前面两位所给分数之差均超过可接受范围，
则需要第四位评审老师给出分数，最终分数为第四位老师所给分数。
#### <font color = Blue size = 5> Analysis:</font>
>原题目为英文，看懂题目就很简单了，一个一个分别判断。注意使用类型为double。并要注意输出精确到小数点后一位，使用`printf("%.1lf\n",ans);`
## [Back to list](#list)


#### <font color = Green size=5> <span id="1003">题目1003：A+B</span></font>
#### Jobdu Link:<br>
[http://ac.jobdu.com/problem.php?pid=1003](http://ac.jobdu.com/problem.php?pid=1003)
#### Source code:<br>
[http://www.cnblogs.com/AlvinZH/p/6759763.html](http://www.cnblogs.com/AlvinZH/p/6759763.html)
#### Problem description:<br>
>每次给你两个数，数的形式是每三位有一个间隔符',',计算两数之和。<br>
#### <font color = Blue size = 5> Analysis:</font>
>两个问题，一、如何读入？我们可以先用字符串读入，再作处理。<br>
>第二、如何处理？我们可以对字符串逐一处理，转化成数字，吧间隔符忽略就可以了。<br>
>坑点：负数问题，开头注意判断是否是负数，可以用bool保存下来最后处理。
## [Back to list](#list)


#### <font color = Green size=5> <span id="1004">题目1004：Median</span></font>
#### Jobdu Link:<br>
[http://ac.jobdu.com/problem.php?pid=1004](http://ac.jobdu.com/problem.php?pid=1004)
#### Source code:<br>
[http://www.cnblogs.com/AlvinZH/p/6759765.html](http://www.cnblogs.com/AlvinZH/p/6759765.html)
#### Problem description:<br>
>给你两个非降序序列，让你求中位数。<br>
#### <font color = Blue size = 5> Analysis:</font>
>这个问题有很多种解法，题目放的也很松。<br>
>第一种解法：暴力。直接把两个子串读进一个数组，sort一下取中位数。真是暴力。<br>
>第二种解法：读入两个子串A、B后，再开另外一个数组C，用两个索引依次按次序放入C，再求中位数。<br>
>第三种解法：直接用两个索引p、q指向两个数组的开头，索引的移动可以理解为丢掉前面的数。
通过分析我们知道，索引移动次数为(n+m-1)/2，我们要找的中位数就是min(A[p],B[q])。<br>
>注意：解法二三里面有一个坑点，就是可能其中一个索引到头了，这时候只能移动另一个索引了，
最后我们的中位数也是A[p]或者B[q]了，数组越界取值可不行。
## [Back to list](#list)
