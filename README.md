# JobDu
从4月23日开始学习，努力把自己变得更好。
## List
*   [题目1000：计算a+b(简单测试)](#-题目1000计算ab)
*   [题目1001：A+B for Matrices(简单循环)](#-题目1001ab-for-matrices)
*	[题目1002：Grading(简单判断)](#-题目1002grading)
*   [题目1003：A+B(字符串转数字)](#-题目1003ab)
*   [题目1004：Median(查找中位数)](#-题目1004median)
*   [题目1005：Graduate Admission(结构体排序)](#-题目1005graduate-admission)
*   [题目1006：ZOJ问题(字符串处理)](#-题目1006zoj问题)
*   [题目1007：奥运排序问题(结构体排序)](#-题目1007奥运排序问题)
*   [题目1008：最短路径问题](#-题目1008最短路径问题)
*   [题目1010：A + B(字符串拆分)](#-题目1010ab)
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

#### <font color = Green size=5> <span id="1005">题目1005：Graduate Admission</span></font>
#### Jobdu Link:<br>
[http://ac.jobdu.com/problem.php?pid=1005](http://ac.jobdu.com/problem.php?pid=1005)
#### Source code:<br>
[http://www.cnblogs.com/AlvinZH/p/6771713.html](http://www.cnblogs.com/AlvinZH/p/6771713.html)
#### Problem description:<br>
>这道题理解题意有些麻烦，多看几遍先理解题意再说。<br>
>每个学生有自己的三个成绩，一个编号，以及一个志愿列表。<br>
>每个学校有自己的招生人数限制。<br>
>按要求输出每所学校最后的招生情况。<br>
#### <font color = Blue size = 5> Analysis:</font>
>我们按照题目要求一个一个来。使用两个结构体分别为Student和School。<br>
><pre>
>typedef struct Student{
>     int id;
>     int GE;
>     int GI;
>     double Final;
>     int choice[6];
> }Student;
> typedef struct School{
>     int now;//已招人数
>     int Max;//最大人数
>     vector<int> admit;
> }School;
></pre>
>把所有的信息输入之后，对学生进行排序，需要重写sort函数的比较函数。<br>
>在录取过程中，所限判断已录取人数和最大录取人数，如果都是0，那别录了直接break。(这是个坑点)<br>
>如果人没录满，那么就录吧，如果已经录满，那么拿出前一个录取人的信息进行比较，相同也可以录进去。<br>
>另外一个坑点在于输出格式~
## [Back to list](#list)

#### <font color = Green size=5> <span id="1006">题目1006：ZOJ问题</span></font>
#### Jobdu Link:<br>
[http://ac.jobdu.com/problem.php?pid=1006](http://ac.jobdu.com/problem.php?pid=1006)
#### Source code:<br>
[http://www.cnblogs.com/AlvinZH/p/6774968.html](http://www.cnblogs.com/AlvinZH/p/6774968.html)
#### Problem description:<br>
>输入一个只包含'z','o','j'三种字符的字符串，判断是否符合要求。
#### <font color = Blue size = 5> Analysis:</font>
>分析AC的三个条件，用a、b、c代表<a'z'b'j'c>中'o'的数量。<br>
>条件一是(0,1,0)，条件二是(x,1,x)，把条件二代入条件三，可以得到(x,2,2x)满足条件，继续代入会有(x,3,3x)...<br>
>于是我们发现一个问题，那就是a*b=c，注意b>0。<br>
>注意事项：<br>
>①：判断字符串里面只有一个z一个j，且z在j后面。<br>
>②：中间有任何不符合要求的直接结束即可。
## [Back to list](#list)

#### <font color = Green size=5> <span id="1007">题目1007：奥运排序问题</span></font>
#### Jobdu Link:<br>
[http://ac.jobdu.com/problem.php?pid=1007](http://ac.jobdu.com/problem.php?pid=1007)
#### Source code:<br>
[http://www.cnblogs.com/AlvinZH/p/6784616.html](http://www.cnblogs.com/AlvinZH/p/6784616.html)
#### Problem description:<br>
>每个国家根据金牌总数、奖牌总数、金牌人口比例、奖牌人口比例会有四种排序，找到最佳排名。
#### <font color = Blue size = 5> Analysis:</font>
>我们用结构体吧每个国家的信息存下来，在进行处理。<br>
>我们根据四种不同的排序方式计算得出四种排名，记得最后再把国家按照最大是的顺序排回来(事先用id属性记下序号)<br>
>有关于sort函数使用详解请参考：[http://www.cnblogs.com/AlvinZH/p/6784862.html](http://www.cnblogs.com/AlvinZH/p/6784862.html)
## [Back to list](#list)

#### <font color = Green size=5> <span id="1008">题目1008：最短路径问题</span></font>
#### Jobdu Link:<br>
[http://ac.jobdu.com/problem.php?pid=1008](http://ac.jobdu.com/problem.php?pid=1008)
#### Source code:<br>
[http://www.cnblogs.com/AlvinZH/p/6784616.html](http://www.cnblogs.com/AlvinZH/p/6784616.html)
#### Problem description:<br>
>典型的单源最短路径问题，可以使用多种方法完成。
#### <font color = Blue size = 5> Analysis:</font>
>采用SPFA算法，注意在相同长度时取最小花费，多了一次比较而已。<br>
>最短路径四种算法详解：[http://www.cnblogs.com/AlvinZH/p/6789912.html](http://www.cnblogs.com/AlvinZH/p/6789912.html)
## [Back to list](#list)

#### <font color = Green size=5> <span id="1010">题目1010：A+B</span></font>
#### Jobdu Link:<br>
[http://ac.jobdu.com/problem.php?pid=1010](http://ac.jobdu.com/problem.php?pid=1010)
#### Source code:<br>
[http://www.cnblogs.com/AlvinZH/p/6790325.html](http://www.cnblogs.com/AlvinZH/p/6790325.html)
#### Problem description:<br>
>给我们一行标准的字符串，把它拆开转换就可以了。
#### <font color = Blue size = 5> Analysis:</font>
>本题的难点在于拆开字符串。由于在C++里面是没有spilit函数的，但是它有strtok函数，我们可以自己协议标准的spilit函数。<br>
>字符串分割strtok函数详解：[http://blog.csdn.net/mycwq/article/details/14648011](http://blog.csdn.net/mycwq/article/details/14648011)
## [Back to list](#list)