/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int rever(char str)
{ int b ;
 char temp[100] ;
    b=strlen(str);
   if b=0

        else
            rever()
        strncpy(temp,str,1);
        str[1]=str[b];
        for(i=0;i<=b-1;i++)
            str[]

}


int main()
{int b;
    char strr1[100],strr2[100],temp[100];
 gets(strr1);
 strr2=rever(strr1);
 printf("%s",strr2);
 return 0;



}  */




/*#include "stdio.h"
#define M 5;
main()
{   int a[M]={1,2,3,4,5};
    int i,j,*t;
    i=0;j=M-1;
    while(i)
    {
        t=&(a+i);
        *(a+i)=*(a+j);
        *(a+j)=t;
        i++;j++
    }
    for(i=0;i<M;i++) printf("%d",*(a+i));
}*/





//#include<stdio.h>








/*int main()
{



































    return 0;
}





#include<stdio.h>
#include<math.h>
int main()
{ int n,i,a;

scanf("%d",&n);
a=sqrt(n);
for(i=1;i<a;i++)
{
 if (n%i==0)
        printf("%3d",i);
}
if (a%1==0)

  printf("%3d",a);


}
for(i=1;i<a;i++)
{
 if (n%i==0)
        printf("%3d",n/i);
}







#include<stdio.h>

#define MAXN 5001

int n, m;

int milk[MAXN], price[MAXN];

void init();

void sort();

void work();



int main() {

init();

sort();

work();

return 0;

}



void init() {

int i;

scanf("%d %d", &n, &m);

for (i = 0; i < m; i++)

scanf("%d %d", price + i, milk + i);

}



void sort() {

int i, j, temp;

for (i = 0; i < m; i++)

for (j = 0; j <m-i-1; j++) {

if (price[j] > price[j+1])

            {

temp = price[j];

price[j] = price[j+1];

price[j+1] = temp;

temp = milk[j];

milk[j] = milk[j+1];

milk[j+1] = temp;

           }

       }

}



void work() {

int i, sum=0, total=0;



for(i=0;n>0;i++)


 {

if (n > milk[i]) sum = milk[i];

else sum = n;

n -= sum;

total += sum * price[i];



    }

printf("%d\n", total);





}


#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,i;
     char a[100],b[100];
     printf("请输入一个字符串：");
     gets(a);


printf("从第几个字符开始复制？");
scanf("%d",&n);
m=strlen(a);
for(i=0;i<m-n+2;i++)
{
    b[i]=a[i+n-1];
}
printf("复制结果为：");
 puts(b);
 return 0;
}
*/



/*写一个函数，如果它首次被调用，则返回字母A，第二次被调用，则返回字母B，第三次调用，则返回字母C，以此类推。（提示：使用一个static数据类型）
函数原型为：char call_times(void)。
编写main函数测试它。

**输出格式要求："第一次调用返回字符%c!\n" "第二次调用返回字符%c!\n" "第三次调用返回字符%c!\n"*/
/*#include<stdio.h>
char call_times(void)
{
  static int a=0;
 switch(a)
{  case 0 :printf("第一次调用返回字符%c!\n",'A'+a);break;
case 1 :printf("第二次调用返回字符%c!\n",'A'+a);break;
case 2 :printf("第三次调用返回字符%c!\n",'A'+a);break;}


   a++;
}
int main()
{
 call_times();
 call_times();
 call_times();
 return 0;

}*/
/*
任意输入英文的星期几，通过查找星期表，输出其对应的数字，
若查到表尾，仍未找到，则输出错误提示信息。
**输入格式要求："%s" 提示信息："Please enter a string:\n"
**输出格式要求："%s is %d\n" "Not found!\n"
查找表中信息：
"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
程序运行示例1如下：
Please enter a string:
Monday
Monday is 1
程序运行示例2如下：
Monkey
Not found!*/
/*#include<stdio.h>
#include<string.h>
int main()
{  int m=0,i;
   char days[7][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
   char str[10];
   printf("Please enter a string:\n");
   gets(str);
   for(i=0;i<7;i++)
   {
       if(strcmp(str,days[i])!=0) continue;
       else {printf("%s is %d",days[i],i+1);m+=1;break;};
   }
   if(m==0) printf("Not found!");
return 0;
}*/
/*#include <stdio.h>
#include<string.h>
main()
{
    int i = 0;
    char str[6] = {'C', 'h', 'i', 'n', 'a', '\0'}, str1[6] , *ptr, *ptr1, *ptr2 , str2[5];
    while (str[i] != '\0')
    {
        putchar(*(str+i));
        i++;
    }


    gets(str);
    puts(str);

     printf("China\n");
     printf("China\n");
    strcpy(str2, "China");
    printf("%s", str2);
}
*/
/*大奖赛现场统分。已知某大奖赛有n个选手参赛，m（m>2）个评委为参赛选手评分（最高10分，最低0分）。统分规则为：在每个选手的m个得分中，去掉一个最高分和一个最低分后，取平均分作为该选手的最后得分。要求编程实现：
（1）根据n个选手的最后得分，从高到低输出选手的得分名次表，以确定获奖名单；
（2）根据各选手的最后得分与各评委给该选手所评分数的差距，对每个评委评分的准确性和评分水准给出一个定量的评价，每位评委的评分方法：(10 -(评委对选手x的评分 - x的得分)^2 的累加和)，从高到低输出各评委得分的名次表。
程序运行示例如下：
How many Athletes?5
How many judges?5
Scores of Athletes:
Athlete 1 is playing.
Please enter his number code:11
Judge 1 gives score:9.5
Judge 2 gives score:9.6
Judge 3 gives score:9.7
Judge 4 gives score:9.4
Judge 5 gives score:9.0
Delete a maximum score:9.7
Delete a minimum score:9.0
The final score of Athlete 11 is 9.500

Athlete 2 is playing.
Please enter his number code:12
Judge 1 gives score:9.0
Judge 2 gives score:9.2
Judge 3 gives score:9.1
Judge 4 gives score:9.3
Judge 5 gives score:8.9
Delete a maximum score:9.3
Delete a minimum score:8.9
The final score of Athlete 12 is 9.100

Athlete 3 is playing.
Please enter his number code:13
Judge 1 gives score:9.6
Judge 2 gives score:9.7
Judge 3 gives score:9.5
Judge 4 gives score:9.8
Judge 5 gives score:9.4
Delete a maximum score:9.8
Delete a minimum score:9.4
The final score of Athlete 13 is 9.600

Athlete 4 is playing.
Please enter his number code:14
Judge 1 gives score:8.9
Judge 2 gives score:8.8
Judge 3 gives score:8.7
Judge 4 gives score:9.0
Judge 5 gives score:8.6
Delete a maximum score:9.0
Delete a minimum score:8.6
The final score of Athlete 14 is 8.800

Athlete 5 is playing.
Please enter his number code:15
Judge 1 gives score:9.0
Judge 2 gives score:9.1
Judge 3 gives score:8.8
Judge 4 gives score:8.9
Judge 5 gives score:9.2
Delete a maximum score:9.2
Delete a minimum score:8.8
The final score of Athlete 15 is 9.000
Order of Athletes:
order	final score	number code
    1	      9.600	    13
    2	      9.500	    11
    3	      9.100	    12
    4	      9.000	    15
    5	      8.800	    14
Order of judges:
order	final score	number code
    1	      9.980	     1
    2	      9.960	     2
    3	      9.900	     3
    4	      9.860      4
    5	      9.590	     5
Over!Thank you!*/
/*下列给定程序中，函数fun的功能是：用下面的公式求pi的近似值，直到最后一项的绝对值小于指定的数（参数 num）为止。 pi/4≈1-1/3+1/5-1/7+...

例如程序运行后，若输入0.0001，则程序输出3.1414

请修改程序中的错误，使它能得出正确的结果。

注意：
请将修改正确后的完整源程序拷贝粘贴到答题区内。
不得增行或删行，也不得更改程序的结构。
对于没有错误的语句，请不要修改，修改原本正确的语句也要扣分。
当且仅当错误全部改正，且程序运行结果调试正确，才给加5分。
经教师手工核对后，如果未用指针做函数参数编程，那么即使做对也不给分。

#include <stdio.h>
#include <math.h>
int fun(float num)
{
    int s;
    float n,t,pi;
    t=0;
    pi=0;
    n=0;
    s=-1;
    while(t>=num);
    {
        pi=pi+t;
        n=n+1;
        s=+s;
        t=s%n;
    }
    pi=pi*4;
    return pi;
}
main()
{
    float n1,n2;
    printf("Enter a float number: ");
    scanf(" %d",&n1);
    n2=fun(n1);
    printf( "%6.4f\n ",n2);

}
*/
/*计算存款的本金和复利之和。输入存款金额 money、存期 year 和年利率 rate，根据公式计算存款到期时的本息合计sum（税前），输出时保留2位小数。sum = money(1+rate)^year(提示：在C语言里，^要用pow()函数计算，详见书后附录)。
**输入格式要求："%d" "%lf" 提示信息："Enter money:" "Enter year:" "Enter rate:"
**输出格式要求："sum = %.2f\n"
程序运行示例如下：
Enter money:1000
Enter year:3
Enter rate:0.025
sum = 1076.89


*/
/*#include<stdio.h>
#include<math.h>
int main()
{int a[10],min,max,i;
printf("Input 10 numbers:");
for(i=0;i<10;i++)
{
    scanf("%d",a+i);
}

min=a[0];
max=a[0];
for(i=0;i<10;i++)
{
    if(max<=a[i])
    max=a[i];
    if(min>=a[i])
    min=a[i];
}
printf("maxNum=%d\nminNum=%d\n",max,min);
if(min!=0){for(i=min;;i--)
{
    if(max%i==0&&min%15 23 56 87 94 105 78 19 22 43i==0) break;
}
printf("%d",i);}
return 0;
}*/
/*
亲密数。如果整数A的全部因子（包括1，但不包括其自身）之和等于B，且整数B的全部因子（包括1，但不包括B本身）之和等于A，则将整数A和B称为亲密数。3000以内的全部亲密数。
**输出格式要求："There are following friendly-numbers pair smaller than 3000:\n" "   %4d..%4d"
程序运行示例如下：
There are following friendly-numbers pair smaller than 3000:
    220.. 284   1184..1210   2620..2924


    编写程序，打印1~999之间的全部同构数。所谓同构数，是指该数出现在它的平方数的右侧。如25^2=625，25出现在625的右端，25就是同构数。
***输入提示信息：无
***输入数据格式：无
***输出提示信息："Print all the isomorphism between 1-999:\n"
***输出数据格式："%d "
注：输出提示信息请放在循环体之外*/

/*#include <stdio.h>

main()
{
   double b;
    unsigned short a = 65535;
    int k = a;
    char c, d;
    char f, g;

    b = (1234.0 - 1) / 10;
    scanf("%c", &c);
    scanf("%c", &d);
    scanf("%c", &f);
getchar();
    scanf("%c", &g);
    printf("%c,%c,%c,%c,%lf,%d", c, d , f, g, b, k);
}
*/

/*#include "stdio.h"
#define M 5
main()
{   int a[M]={1,2,3,4,5};
    int i,j,t;
    i=0;j=M-1;

    while(i<=j)
    {
       t=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=t;
        i++;j--;
    }
    for(i=0;i<M;i++) printf("%d",*(a+i));
}

*/
/*
用函数编程实现输出 m~n之间所有素数，并求和，m和n由键盘输入。素数是只能被1和自身整除的大于1的正整数。 要求程序能对用户输入的数据进行正确性检查，
满足条件：m和n都是大于1的正整数，并且m<=n。
1. 要求编写函数InputNumber 实现用户输入一个正整数，并对数的合法性进行检查，如果读入不成功(例如：输入字符串)，或者数不合法即不是大于1的正整数，
则重新输入，直到输入正确为止。
函数原型：
unsigned int InputNumber(char ch);
形式参数：ch，用于生成输入提示信息。
返回值：返回正确的输入值。
输入提示信息：printf("Please input the number %c(>1):",ch);
输入格式："%d"
输入错误提示信息："The input must be an integer larger than 1!\n"
提示：测试scanf的返回值来判断是否成功读入数据。
2. 要求编写函数IsPrime判断自然数x是否为素数，如果x是素数则返回1，不是素数返回0。
函数原型：
int IsPrime(unsigned int n);
返回值：如果x是素数则返回1，不是素数返回0。

3. 要求编写函数PrimeSum 输出m到n之间所有素数并返回它们的和。
函数原型：

返回值：m到n之间所有素数的和。
每个素数的输出格式："%d\n"
//http://172.20.2.51.cqu.pt/train/q.aspx?session_id=49dd197732924c5cafe644c31cd02721&auth_id=bbf3076d8ea5436db522d5c2327251ab
主函数定义如下：*//*  
#include<stdio.h>
#include<math.h>
unsigned int InputNumber(char ch)
{   int num,i;

   do
   {fflush(stdin);
    printf("Please input the number %c(>1):",ch);
    i=scanf("%d",&num);
    if(i!=1||num<=1) printf("The input must be an integer larger than 1!\n");
   }
   while(i!=1||num<=1);
   return num;

}

int IsPrime(unsigned int n)
{
    int i,j=1;

   for(i=2;i<=sqrt(n);i++)
   {
       if(n%i==0)
       {
        j=0;
         break;
       }
   }
  return j;
}
int PrimeSum(unsigned int m, unsigned int n)
{ int i,sum=0;

for(i=m;i<=n;i++)
  {
      if(IsPrime(i)==1)
        {printf("%d\n",i);
        sum+=i;}
  }

    return sum;

}
int main()
{
    int m = 0,n = 0,sum = 0;
    do
    {
        m = InputNumber('m');
        n = InputNumber('n');
    }while(m > n && printf("n must be not smaller than m! Input again!\n"));   //保证m<=n
    sum = PrimeSum(m,n);
    printf("sum of prime numbers:%d",sum);
    return 0;
}*/
/*
运行实例：
Please input the number m(>1):abc
The input must be an integer larger than 1!
Please input the number m(>1):-34
The input must be an integer larger than 1!
Please input the number m(>1):56
Please input the number n(>1):23
n must be not smaller than m! Input again!
Please input the number m(>1):23
Please input the number n(>1):57
23
29
31
37
41
43
47
53
sum of prime numbers:304
Process returned 0 (0x0)   execution time : 30.690 s
Press any key to continue.*/
/*
#include<stdio.h>
int main()
{
    char a='A';
    int i;

    i=(int)a;
    printf("%d",i);
    return 0;



}*/
/*#include<stdio.h>
int main()
{
   int countor[30]={0},i,j,max[30],maxx;//[]字母[]排序
   int c;
   for(i=0;;i++)
   {
      c=getchar();
      if(c=='\n') break;
      else
        {
        for(j=0;j<26;j++)
        {
            if(c=='a'+j)
                countor[j]++;

        }}}

for()

















        }














*/

/*
#include<stdio.h>
int main()
{  int  a[100][100],i,j;
     int n;
     scanf("%d",&n);

    for(i=0;i<n;i++)

    {
        a[i][0]=1;
        a[i][i]=1;
        for(j=1;j<i;j++)
        a[i][j]=a[i-1][j-1]+a[i-1][j];





    }

    for(i=0;i<n;i++)
    {
          for(j=0;j<(n-i)/2;j++)
            printf("    ");

        for(j=0;j<=i;j++)
    {
        printf("%-4d",a[i][j]);
    }
printf("\n");

    }

}
*/


/*#include<stdio.h>

static int N ;
float score[30],iniscore[30];
long int id[30],iniid[30];
int menu(void)
{   int choice;
    printf("Management for Students' scores\n1.Input record\n2.Caculate total and average score of course\n3.Sort in descending order by score\n4.Sort in ascending order by score\n5.Sort in ascending order by number\n6.Search by number\n7.Statistic analysis\n8.List record\n0.Exit\nPlease Input your choice:\n");
    scanf("%d",&choice);
    return choice;


}
void fuc1(void)
{  int i;
printf("Input student's ID and score:\n");
   for(i=0;i<N;i++)
   {
       scanf("%ld",&id[i]);
       scanf("%f",&score[i]);
   }
   for(i=0;i<N;i++)
{
    iniid[i]=id[i];
    iniscore[i]=score[i];
}
}
void fuc2(void)
{  int i;
float sum=0;
    for(i=0;i<N;i++)
    {
      sum+=(float)score[i];
    }
   printf("sum=%.0f,aver=%.2f\n",sum,sum/N);
}


void fuc4(void)
{  int i,j,temp;
    for(i=0;i<N-1;i++)

        for(j=0;j<N-1-i;j++)
        {
            if(score[j]>score[j+1])
              {
                  temp=score[j];
                  score[j]=score[j+1];
                  score[j+1]=temp;
                  temp=id[j];
                  id[j]=id[j+1];
                  id[j+1]=temp;

              }
        }


     printf("Sort in ascending order by score:\n");
   for(i=0;i<N;i++)
   {
    printf("%ld\t%.0f\n",id[i],score[i]);
   }
}void fuc3(void)
{  int i,j,temp;
    for(i=0;i<N-1;i++)

        for(j=0;j<N-1-i;j++)
        {
            if(score[j]<score[j+1])
              {
                  temp=score[j];
                  score[j]=score[j+1];
                  score[j+1]=temp;
                  temp=id[j];
                  id[j]=id[j+1];
                  id[j+1]=temp;

              }
        }
   printf("Sort in descending order by score:\n");
   for(i=0;i<N;i++)
   {
    printf("%ld\t%.0f\n",id[i],score[i]);
   }

}
void fuc5(void)
{  int i,j,temp;
    for(i=0;i<N-1;i++)

        for(j=0;j<N-1-i;j++)
        {
            if(id[j]>id[j+1])
              {
                  temp=score[j];
                  score[j]=score[j+1];
                  score[j+1]=temp;
                  temp=id[j];
                  id[j]=id[j+1];
                  id[j+1]=temp;

              }
        }
   for(i=0;i<N;i++)
   {
       printf("Sort in ascending order by number:\n%ld\t%.0f\n",id[i],score[i]);
   }

}
void fuc6()
{int c,i;
printf("Input the number you want to search:\n");
scanf("%d",&c);
for(i=0;i<N;i++)
        {
            if(c==id[i])
            {
                printf("%ld\t%.0f\n",id[i],score[i]);
                break;
            }

        }
   if(c==N) printf("Not found!\n");
}

void fuc7()
{ int b[7]={0},i;
for(i=0;i<N;i++)
{
    switch((int)score[i]/10)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:b[0]++;break;
        case 6:b[1]++;break;
         case 7:b[2]++;break;
        case 8:b[3]++;break;
        case 9:b[4]++;break;
        case 10:b[5]++;break;

    }
}

printf("<60\t%d\t%.2f%%\n",b[0],((float)b[0]/N)*100);
printf("60-69\t%d\t%.2f%%\n",b[1],((float)b[1]/N)*100);
printf("70-79\t%d\t%.2f%%\n",b[2],((float)b[2]/N)*100);
printf("80-89\t%d\t%.2f%%\n",b[3],((float)b[3]/N)*100);
printf("90-99\t%d\t%.2f%%\n",b[4],((float)b[4]/N)*100);
printf("100\t%d\t%.2f%%\n",b[5],((float)b[5]/N)*100);
}
void fuc888(void)
{ int i;
    for(i=0;i<N;i++)
    printf("%ld\t%.0f\n",iniid[i],iniscore[i]);
}



int main()
{

            int choice;
               printf("Input student number(n<30):\n");
               scanf("%d",&N);

                            for(;;)
                               {choice=menu();
                                switch(choice)
                                {
                                    case 1 :{fuc1();continue;}
                                    case 2 :{fuc2();continue;}
                                    case 3 :{fuc3();continue;}
                                    case 4 :{fuc4();continue;}
                                    case 5 :{fuc5();continue;}
                                    case 6 :{fuc6();continue;}
                                    case 7 :{fuc7();continue;}
                                    case 8 :{fuc888();continue;}
                                case 0:{printf("End of program!");break;}
                                    default :{printf("Input error!\n");continue;}
                                }
                                if(choice==0) break;
                            }
                return 0;

}
*/

/*
#include<stdio.h>
#include<math.h>

float a[100][100],inia[100][100] ,b[100]={0},b2[100]={0};
int id[100],id2[100];
int n ,m;


void switchit(float*p,float*q,int*p1,int*q1)
{float temp;
int temp2;
   temp=*p;
   *p=*q;
   *q=temp;
   temp2=*p1;
   *p1=*q1;
   *q1=temp2;
}

void SortIt(float*q,int*p,int len)
{   int i,j;
    for(i=0;i<len-1;i++)
        for(j=0;j<len-1-i;j++)
    {
        if(*(q+j)>*(q+j+1))
        switchit((q+j),(q+j+1),(p+j),(p+j+1));

    }


}
void SortIt2(float*q,int*p,int len)
{   int i,j;
    for(i=0;i<len-1;i++)
        for(j=0;j<len-1-i;j++)
    {
        if(*(q+j)>*(q+j+1))
        {switchit((q+j),(q+j+1),(p+j),(p+j+1));
        }
    }


}
 float  averg(float*p,int len)
{
    int i;
    float sum=0;
    for(i=0;i<len;i++)
    {
        sum+=*(p+i+1);
    }
    return (sum/len);

}

void fuc1()
{ int i,j,empty[100]={0};
  for(i=0;i<n;i++)
  {
      printf("Athlete %d is playing.\nPlease enter his number code:",i+1);
      scanf("%f",&a[i][0]);
      for(j=0;j<m;j++)
      {
          printf("Judge %d gives score:",j+1);
          scanf("%f",&a[i][j+1]);
       inia[i][j+1]=a[i][j+1] ;
      }
      SortIt(*(a+i)+1,empty,m);
printf("Delete a maximum score:%.1f\nDelete a minimum score:%.1f\n",a[i][m],a[i][1]);
a[i][m+1]=averg(*(a+i)+1,m-2);
inia[i][m+1]=a[i][m+1];
b[i]=a[i][m+1];
id[i]=(int)a[i][0];

    printf("The final score of Athlete %.0f is %.3f\n\n",a[i][0],a[i][m+1]);


  }}
void fuc2()
{int i;
 printf("Order of Athletes:\norder	final score	number code\n") ;
 SortIt(b,id,n);

 for(i=0;i<n;i++)
 {
    printf("    %d	      %.3f	    %d\n",i+1,b[n-i-1],id[n-i-1]);
 }
}


void fuc3()
{ int i,j;
  printf("Order of judges:\norder	final score	number code\n");
  for(i=0;i<m;i++)
  {   id2[i]=i+1;
      for(j=0;j<n;j++)
      {
       b2[i]+=-pow(inia[j][i+1]-a[j][m+1] ,2);

      }


 b2[i]+=10;
  }
   SortIt2(b2,id2,m);
   for(i=0;i<m;i++)
  printf("    %d	      %.3f	     %d\n",i+1,b2[m-i-1],id2[m-i-1]);




}


int  main()
{
printf("How many Athletes?");
scanf("%d",&n);
printf("How many judges?");
scanf("%d",&m);
printf("Scores of Athletes:");
fuc1();
fuc2();
fuc3();
printf("Over!Thank you!");

}

*/

/*
#include<stdio.h>
int main()
{
   printf("Press a key and then press Enter:") ;
   putchar(getchar()+32);
   printf("\n");

}

*/
/*求三角形面积。输入三角形的三个边长，计算三角形的面积。设三角形的三个边长分别为a、b、c，为简单起见，我们认为输入的三个边长数据是正确的，可以组成一个三角形。
**输入格式要求："%f,%f,%f"  提示信息："Enter 3 floats:"
**输出格式要求："area=%.2f\n"
程序运行示例如下：
Enter 3 floats:2,2,3
area=1.98

#include<stdio.h>
#include<math.h>
int main()
{ float a,b,c;
   printf("请输入三个单精度数：") ;
   scanf("%f%f%f",&a,&b,&c);


   printf("三个数的和为%.3f，均值为%.3f",(a+b+c),(a+b+c)/3);


}





*/
/* test of paixu
#include<stdio.h>
float a[30]={0,7,9,3,5,4,8,6,1,2};
void switchit(float*p,float*q)
{float temp;
   temp=*p;
   *p=*q;
   *q=temp;


}
void SortIt(float*q,int len)
{   int i,j;
    for(i=0;i<len-1;i++)
        for(j=0;j<len-1-i;j++)
    {
        if(*(q+j+1)>*(q+j+2))
        switchit((q+j+1),(q+j+2));
    }


}
int main()
{ int i;

    SortIt(a,9);
    for(i=0;i<9;i++)
    {
     printf("%.0f ",a[i+1]);
    }


}
*/
/*
编写一C语言程序，从键盘输入10个整数，求出它们的和与平均值并输出  (请不要使用数组或指针)。
输入要求：输入一个变量前要有提示信息"input a integer:"
输入格式："%d"
输出要求：和值格式"sum=%d\n"，平均值格式"avg=%.2f\n"

#include<stdio.h>
int main()
{ int i, sum=0,a;

  for(i=0;i<10;i++)
  {     printf("input a integer:");
      scanf("%d",&a);
      sum+=a;
  }
   printf("sum=%d\navg=%.2f\n",sum,(float)sum/10);

}
*/
/*
有10个评委参加打分。输入10个评委打的分数（1—10之间的数字），找出一个最高分和一个最低分后，并输出是第几个评委打的最高分，第几个评委打的最低分。
函数原型如下：
void ReadScore(int Score[]) ; //用于输入评委的分数
void MaxMin(int ore[],int *MaxNum,int *MinNum) ;//用于找出最高分和最低分的评委
**输入提示信息：无
**输入格式："%d"
**输出提示信息及格式："最高分为第%d个评委，最低分为第%d个评委\n"
按如下框架编写程序：*/
/*#include <stdio.h>
#define N 5

void ReadScore(int Score[])
{ int i;
     for(i=0;i<N;i++)
     {
         scanf("%d",&Score[i]);

     }

}
void MaxMin(int Score[],int *MaxNum,int *MinNum)
{   int j;
     *MaxNum=0;
      *MinNum=0;
   for(j=0;j<N-1;j++)

   {
       if(*(Score+j)>*(Score+j+1))
        {*MaxNum=j;*MinNum=j+1;}
         if(*(Score+j)<*(Score+j+1)){ *MaxNum=j+1;
          *MinNum=j;}



   }
}

main()
{
    int i,a[100] ,maxp,minp;
  ReadScore(a);
  for(i=0;i<N;i++)
  {
      printf("%d\n",*a+i);
  }
    MaxMin(a,&maxp,&minp);
    printf("最高分为第%d个评委，最低分为第%d个评委\n",maxp+1,minp+1);
}
*/
/*
#include <stdio.h>
#define N 20
void fun(int *a,int n)
{
    int i, m, t, k;
    for(i=0; i<2; i++)
    {
        m=i;
        for(k=i; k<n; k++)
        {if(*(a+k)<*(a+m))
            m=k;}
        t=*(a+m) ; //交换 ak ai
        *(a+m)=*(a+i);
        *(a+i)=t;
    }
}
int main()
{
    int b[N]={11,5,12,0,3,6,9,7,10,8},n=10,i;
    for(i=0; i<n; i++)
        printf("%d ",b[i]);
    printf("\n");
     fun(b,n);
    for(i=0; i<n; i++)
        printf("%d ", b[i]);
    printf("\n");
    return 0;
}
*//*
#include<stdio.h>
int HuiwenOrnot(int x)
{  int a[10]={0},len=1,i,inix=x;

   for(i=0;;i++)
   {  if(x/10!=0) break;
       else{a[i]=x%10;
     x/=10;
     printf("%d\n",a[i]);
      len++;}
   }
   for(i=0;i<len/2;i++)
   {if (a[i]!=a[len-i-1])
    return 0;}

    printf("  %d \n%d",len,inix);
    return 1;
}


int main()
{
    int  i, count=0,max;
    printf( "Input n:");
    scanf("%d",&max);
    for(i=100;i<=max;i++)
    {
        count+=HuiwenOrnot(i);
    }
    printf("\n");
    printf("count=%d",count);



}
*/


/*用二维数组作为函数参数，实现矩阵转置。按如下函数原型编程计算并输出m×n阶矩阵的转置矩阵。其中，m和n的值由用户从键盘输入。已知m和n的值都不超过10。
void Transpose(int a[][N], int at[][M], int m, int n);
void InputMatrix(int a[][N], int m, int n);
void PrintMatrix(int at[][M], int n, int m);
输入提示信息："Input m, n:"  "Input %d*%d matrix:\n"
输入格式："%d,%d"
输出提示信息和格式："The transposed matrix is:\n"
输出格式（输完矩阵的一行要换行）："%d\t"



#include<stdio.h>
#define M 10
#define N 10


void Transpose(int a[][N], int at[][M], int m, int n)
{  int i, j;

    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
    {
        at[j][i]=a[i][j];
    }
}

void InputMatrix(int a[][N], int m, int n)
{
    int i,j;
    printf("Input %d*%d matrix:\n",m,n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
    {
        scanf("%d",*(a+i)+j);

    }
}
void PrintMatrix(int at[][M], int n, int m)
{

    int i,j;
  printf("The transposed matrix is:\n");
    for(i=0;i<n;i++)
    {

        for(j=0;j<m;j++)
    {
        printf("%d\t",*(*(at+i)+j));


    }
     printf("\n");}

}
int main()
{   int m,n,a[M][N],at[N][M];

     printf("Input m, n:");
     scanf("%d,%d",&m,&n);
    InputMatrix(a,m,  n);

    Transpose(a,at,m,n);
     PrintMatrix(at,n,m);
}


*//*
#include<stdio.h>
#define N 10000
float fff1(float x)
{
    return(1+x*x);
}
float fff2(float x )
{
    return(x/(1+x*x));
}
float Integral(float (*f)(float), float a, float b)
{    int i;
     float h ,sum=0;
     h=(b-a)/N;
     sum+=(f(a)+f(b))/2;
     for (i=1;i<=N-1;i++)
     {
         sum+=f(a+i*h);
     }
      return sum*h;

}
int main()
{


 printf("y1=%f\ny2=%f\n",Integral(fff1,0,1),Integral(fff2,0,3));








}
梅森尼数
形如2^i-1的素数，称为梅森尼数。编程计算并输出指数i在[2,n]中的所有梅森尼数，并统计这些梅森尼数的个数，其中n的值由键盘输入，并且n的值不能大于50。其中，2^i表示2的i次方，请不要使用pow(2,i)编程计算，应采用循环累乘求积的方式计算2^i。
提示：当i超过30以后，2^i-1的值会很大，不能用long型变量来存储，必须使用double类型来存储。对于double类型变量x（不是整型）不能执行求余运算，即不能用x%i == 0来判断x是否能被i整除，可以使用x/i == (int)(x/i)来判断x是否能被i整除。

程序运行示例
Input n:
50↙
2^2-1=3
2^3-1=7
2^5-1=31
2^7-1=127
2^13-1=8191
2^17-1=131071
2^19-1=524287
2^31-1=2147483647
2^49-1=562949953421311
count=9

输入提示信息："Input n:\n"
输入格式: "%d"
输出格式： "2^%d-1=%.0lf\n"
           "count=%d\n"*/
/*           用字符指针作函数参数编程实现字符串逆序存放功能。
输入提示信息："Input a string:"
输入字符串用gets()
输出提示信息："Inversed results:%s\n"
*/




/*
#include<stdio.h>
int main()
{   int i,len;
     char a[100];
    printf("Input a string:");
    gets(a);
    for(i=0;a[i]!='\0';i++)
        len=i+1;
    for(i=0;i<len;i++)
     { printf("%c",a[len-1-i]);

    }

}
*/
/*
编写程序统计从键盘输入的一行文本中各个字母的个数。
输入以回车键结束。
不区分大小写，大写字母与相应的小写字母按照同一个字母看待。
要求输出按照各个字母出现的个数从大到小进行排序，出现的个数相同的，按照字母在字母表中的先后顺序进行排序。
***输入格式：调用getchar()函数依次输入每个字符
***输出格式："%c(%c):%d\n"
例如输入以下文本：
Hello World
程序将输出：
L(l):3
O(o):2
D(d):1
E(e):1
H(h):1
R(r):1
W(w):1
A(a):0
B(b):0
C(c):0
F(f):0
G(g):0
I(i):0
J(j):0
K(k):0
M(m):0
N(n):0
P(p):0
Q(q):0
S(s):0
T(t):0
U(u):0
V(v):0
X(x):0
Y(y):0
Z(z):0




#include<stdio.h>

void getit(char*p)
{
    for(i=;c=getchar()!='\n';i++)
    {

    }

}


int main()
{
    char hehe[2][100];

}*/
/*写一个程序显示如下的金字塔树，从键盘输入层数。
树有一系列逐渐增加的层构成。上面显示的树有3层。
**输入提示信息："请输入树的层数："
**输入格式要求："%d"

（注意：每行左侧的空格数与n的数量有关，例如：如果是2层，最多一行会有5个*，则第一行开始会空出2个空格，第二行开始会空出一个空格，而5个*的那一行不空。|的左侧空两个空格。
另外，最后一行的V两侧的=的数量也与层数n相等）

程序运行示例：
请输入树的层数： 2

 *↙
***
  x-i

  *↙
 ***↙
  *↙
 ***↙
*****↙
  |↙
==V==↙
↙
程序运行示例：
请输入树的层数： 3
   *↙
  ***↙
   *↙
  ***↙
 *****↙
   *↙
  ***↙
 *****↙
*******↙
   |↙
===V===↙
↙
请输入树的层数： 3
   *
  ***
   *
  ***
 *****
   *
  ***
 *****
*******
   |
===V===
*//*
#include<stdio.h>
int N;
void emptyit(int x,char p)
{ int i;
    for(i=0;i<x;i++)
    {
        printf("%c",p);
    }
}
void  print_star(int x)
{ int i,j;
     for(i=0;i<=x;i++)
    {   emptyit(N-i,' ');
        for(j=0;j<2*i+1;j++)
        {

            printf("*");
        }
        printf("\n");
    }

}
void  print_gen()
{
    emptyit(N,' ');
    emptyit(1,'|');
  emptyit(1,'\n');

    emptyit(N,'=');
    emptyit(1,'V');
    emptyit(N,'=');
}

int main()
{   int i;
    printf("请输入树的层数：");
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        print_star(i);
    }
    print_gen();
}


*/

/*
    大数存储问题

   题目：读入n,m,输出 n!*m!. (1<=n,m<=100) 结果的位数不超过400.

         提示：定义一个数组a[400],定义乘法运算，每次乘法结果用数组保存

  输入:

    输入仅一行,有两个数n,m.输入格式：scanf("%d %d",&n,&m);

   输出:


    输出仅一行,为题目所要求的答案.最后换行.

    输出格式：printf("%d",a[i]);

              .................

              printf("\n");

  样例输入：

   100 90

   样例输出：

   138656248189732152054159609718432247180282092567575172939636909

   224427929240834642263988043338170905744175653189424779336521852

   536242160190545537133916649622615351174407746524657461692702500

   613722228638559932561661493048332720605069264786823205531680768

   000000000000000000000000000000000000000000000





   99*99=(9*10+9)*99=           9801
   m*n=







   */

   /*根据最大公约数的如下3条性质，采用递归法编写计算最大公约数的函数Gcd()，在主函数中调用该函数计算并输出从键盘任意输入的两正整数的最大公约数。
性质1  如果a>b，则a和b与a-b和b的最大公约数相同，即Gcd(a, b) = Gcd(a-b, b)
性质2  如果b>a，则a和b与a和b-a的最大公约数相同，即Gcd(a, b) = Gcd(a, b-a)
性质3  如果a=b，则a和b的最大公约数与a值和b值相同，即Gcd(a, b) = a = b
要求如下：
（1）从键盘任意输入的两整数
     主函数调用Gcd()函数，并输出两整数的最大公约数。
（2）Gcd函数原型为：
     int Gcd(int a, int b);
     如果输入的数不是正整数，则返回-1，否则，返回两个数的最大公约数。
（3）**输入提示信息格式要求："Input a,b:"
       输入格式："%d,%d"
     **输出提示信息要求：
       若输入不是正整数，则输出"Input number should be positive!\n"
       否则输出"Greatest Common Divisor of %d and %d is %d\n"
注：不允许使用goto语句
*//*
#include<stdio.h>
int Gcd(int x,int y)
{   if  (x<=0||y<=0) return -1;
    else if(x==y) return x;
    else if (x>y) return Gcd(x-y,y);
    else return Gcd(x,y-x);
}
int main()
 {  int a,b ,c;
      printf("Input a,b:");
      c=scanf("%d,%d",&a,&b);
      if(c!=2||a<=0||b<=0) printf("Input number should be positive!\n");
      else
     printf("Greatest Common Divisor of %d and %d is %d\n", a,b,Gcd(a,b));
}

*/
/*输入2个学生5门课的成绩，分别用函数求：（1）每个学生的平均分；（2）每门课的平均分；（3）找出最高的分数所对应的学生和课程；（4）求出每个学生平均分的方差：(1/n)(∑xi2) - （（∑xi）/ n）2。
**输入提示："\n输入学生%4d的5个成绩：\n"
**输入成绩格式："%f"
**输出提示："\n 序号     课程1     2     3     4     5     平均分\n"
**序号输出格式："\n NO%2d"
**成绩输出格式（提示：5个成绩）："%8.2f"
**平均分输出提示："\n课平均"
**平均分输出格式："%8.2f"
**输出格示："\n\n最高分%8.2f是%d号学生的第%d门课\n"
**输出格示："\n方差 %8.2f"

程序运行示例：
↙
输入学生   1的5个成绩：↙
89 96 88 90 76↙
↙
输入学生   2的5个成绩：↙
66 89 87 85 67↙
↙
 序号     课程1     2     3     4     5     平均分↙
↙
 NO 1   89.00   96.00   88.00   90.00   76.00   87.80↙
 NO 2   66.00   89.00   87.00   85.00   67.00   78.80↙
课平均   77.50   92.50   87.50   87.50   71.50↙
↙
最高分   96.00是1号学生的第2门课↙
↙
方差    20.25  */
/*
#include<stdio.h>
#include<math.h>
float grade[2][10];
void getin()
{ int i,j;
 printf("\n");
   for(i=0;i<2;i++)
    {printf("输入学生   %d的5个成绩：\n\n",i+1);
   for(j=0;j<5;j++)
   {
       scanf("%f",*(grade+i)+j);

   }
    }
}
float countaver(float *p)
{  int i;
float sum =0;
   for(i=0;i<5;i++)
   {
      sum+=*(p+i) ;
   }
   return sum/5;
}
void averr()
{   int i,j;
     printf(" 序号     课程1     2     3     4     5     平均分\n\n");
     for(i=0;i<2;i++)
     {
         printf(" NO %d",i+1);
         grade[i][5]=countaver(*(grade+i));

         for(j=0;j<5;j++)
         {
             printf("%8.2f",grade[i][j]);
         }
         printf("%8.2f\n",grade[i][5]);
     }
}
void grade_per_subject()
{  printf("课平均");
    int i;
    for(i=0;i<5;i++)
    {
    printf("%8.2f",(grade[0][i]+grade[1][i])/2);
    }
    printf("\n\n");
}
void maxx()
{ float max=grade[0][0];
int maxp[2]={0,0};
int i,j;
  for(i=0;i<2;i++)
    for(j=0;j<5;j++)
  {
      if(grade[i][j]>max)
        {max=grade[i][j];
          maxp[0]=i;
          maxp[1]=j;

  }

}printf("最高分%8.2f是%d号学生的第%d门课\n\n",max,maxp[0]+1,maxp[1]+1);
}
void dxit()
{
    float mid;
    mid=(pow(grade[0][5],2)+pow(grade[1][5],2))/2;
    printf("方差 %8.2f",mid-pow((grade[0][5]+grade[1][5])/2,2));


}



int main()
{
   getin();
   averr();
   grade_per_subject();
   maxx();
   dxit();


}*/
/*口袋中有若干红、黄、蓝、白、黑5种颜色的球，每次从口袋中取出3个球，定义如下指针数组，编程打印出得到3种不同颜色的球的所有可能取法。
char *bColor[] = {"RED", "YELLOW", "BLUE", "WHITE", "BLACK"};
输入提示信息和数据格式：无
输出提示信息和数据格式："%d:%s,%s,%s\n"
请按如下框架编程：*/
/*
#include <stdio.h>





int main()
{    int i,j,m,count=1;
    char *bColor[] = {"RED", "YELLOW", "BLUE", "WHITE", "BLACK"};
    for(i=0;i<5;i++)
    {   for(j=i+1;j<5;j++)
          {for(m=j+1;m<5;m++)

          {printf("%d:%s,%s,%s\n",count,bColor[i],bColor[j],bColor[m]);
          count++;}}
    }
    return  0;
}

*/

/*


以下程序有若干语法错误。请找出并改正之。
#include <stdio.h>
struct date
{
    int  y;m;d;
}
struct stu
{   char n[10];
    struct date b;
    int a;
}s={“Wang”,{1980,11,11},30};
main()
{
    printf(“%c,%d,%d\n”,s.n,s.d,s.a);
}
以下程序有若干语法错误。请找出并改正之。*/
/*#include <stdio.h>
struct date
{
    int  y,m,d;
}  ;
struct stu
{   char n[10];
    struct date b;
    int a;
} s={"Wang",{1980,11,11},30};
main()
{
    printf("%s,%d,%d\n",s.n,s.b.d,s.a);
}

在一个有序(按非递减顺序)的链表中插入一个元素为x的结点，使插入后的链表仍然有序（链表数据域为整型数，N为6）。
**输入提示："输入数组6个元素的值。\n"
**输入格式："%d"
**输出提示："此链表各个结点的数据域为："
**输出格式："%d "
**输入提示："输入要插入的数据x:"
**输入格式："%d"
**输出提示："插入后链表各个结点的数据域为："
**输出格式："%d "


程序运行示例如下：
输入数组6个元素的值。
12 23 34 45 56 67
此链表各个结点的数据域为：12 23 34 45 56 67
输入要插入的数据x:36
插入后链表各个结点的数据域为：12 23 34 36 45 56 67
*/
/*提交
  此题重复我要跳过（04:19)  此题暂时不会以后再做（04:19)
延长答题时间
 梅森尼数
形如2^i-1的素数，称为梅森尼数。编程计算并输出指数i在[2,n]中的所有梅森尼数，并统计这些梅森尼数的个数，其中n的值由键盘输入，并且n的值不能大于50。其中，2^i表示2的i次方，请不要使用pow(2,i)编程计算，应采用循环累乘求积的方式计算2^i。
提示：当i超过30以后，2^i-1的值会很大，不能用long型变量来存储，必须使用double类型来存储。对于double类型变量x（不是整型）不能执行求余运算，即不能用x%i == 0来判断x是否能被i整除，可以使用x/i == (int)(x/i)来判断x是否能被i整除。

程序运行示例
Input n:
50↙
2^2-1=3
2^3-1=7
2^5-1=31
2^7-1=127
2^13-1=8191
2^17-1=131071
2^19-1=524287
2^31-1=2147483647
2^49-1=562949953421311
count=9

输入提示信息："Input n:\n"
输入格式: "%d"
输出格式： "2^%d-1=%.0lf\n"
           "count=%d\n"
*/

/*
#include<stdio.h>
#include<math.h>
int N;
int sushuornot(double x)
{
     double i,t;

     for(i=2;i<=sqrt(x);i++)
        {    t=x/i;


        if(t==1) return 0;
            if(((int)t==t))
            {
                return 0;
                break;
            }

        }

    return 1;
}
int fuck_it(int n)
{  int i,count=0;
    double res=1;
for(i=0;i<n;i++)
res*=2;

res-=1;

    if(sushuornot(res)==1)
    {   count++;
        printf("2^%d-1=%.0lf\n",n,res);
    }
    return count;
}
int main()
{    int i,count=0;
    printf("Input n:\n");
    scanf("%d",&N);
    for(i=2;i<=N;i++)
    {
      count+=fuck_it(i);
    }
     printf("count=%d\n",count);
}
*/
/*给定如下定义：
struct date_rec
  {
    int day ;
    int month ;
    int year ;
  } ;
  struct date_rec current_date ;
写一个程序包含如下的函数，完成：
(a) 输入current_date的值：
void input_date(struct date_rec *current_date)
(b) 将current_date增加1天：
void increment_date(struct date_rec *current_date)
(c) 显示current_date的值：
void output_date(struct date_rec *current_date)
考虑每个月的实际天数，同时也考虑闰年的情况。

**输入格式要求："%d%d%d" 提示信息："请输入当前日期（年 月 日）："
**输出格式要求："当前日期：%d年%d月%d日！" （加1天后的新日期）
*//*
#include<stdio.h>
int main()
{
struct date_rec
  {
    int day ;
    int month ;
    int year ;
  } ;
  struct date_rec current_date ;

  printf("请输入当前日期（年 月 日）：");
  scanf("%d%d%d",&current_date.year,&current_date.month,&current_date.day);
  if((current_date.year%4==0&&current_date.year%100!=0)||current_date.year%400==0)//闰年
  {
      switch(current_date.month)
      {
  case 1 :case 3:case 5:case 7:case 8:case 10:
        {
            if(current_date.day==31)
            {
                current_date.month+=1;
                current_date.day=1;
            }
            else{current_date.day+=1;}
        }
      break;
      case  12:
    {
       if(current_date.day==31)
            {
                current_date.month=1;
                current_date.day=1;
                current_date.year+=1;
            }
            else {current_date.day+=1;}
        }

        break ;
      case 2:
        {
            if(current_date.day==29)
            {
                current_date.month+=1;
                current_date.day=1;

            }
            else {current_date.day+=1;}
        }
         break;
        default: {
            if(current_date.day==30)
            {
                current_date.month+=1;
                current_date.day=1;
            }
                        else {current_date.day+=1;}
        }
      }}
  else {
      switch(current_date.month)
      {
  case 1 :case 3:case 5:case 7:case 8:case 10:
        {
            if(current_date.day==31)
            {
                current_date.month+=1;
                current_date.day=1;
            }
            else{current_date.day+=1;}
        }
      break;
      case  12:
    {
       if(current_date.day==31)
            {
                current_date.month=1;
                current_date.day=1;
                current_date.year+=1;
            }
            else {current_date.day+=1;}
        }

        break ;
      case 2:
        {
            if(current_date.day==28)
            {
                current_date.month+=1;
                current_date.day=1;

            }
            else {current_date.day=+1;}
        }
         break;
        default: {
            if(current_date.day==30)
            {
                current_date.month+=1;
                current_date.day=1;
            }
                        else {current_date.day+=1;}
        }
      }}

    printf("当前日期：%d年%d月%d日！",current_date.year,current_date.month,current_date.day);
}
*/

/*编程统计候选人的得票数。设有3个候选人zhang、li、wang（候选人姓名不区分大小写），10个选民，选民每次输入一个得票的候选人的名字，若选民输错候选人姓名，则按废票处理。选民投票结束后程序自动显示各候选人的得票结果和废票信息。要求用结构体数组candidate表示3个候选人的姓名和得票结果。最后输出格式为："%8s:%d\n"，"Wrong election:%d\n"
例如：
Input vote 1:li
Input vote 2:li
Input vote 3:Zhang
Input vote 4:wang
Input vote 5:zhang
Input vote 6:Wang
Input vote 7:Zhang
Input vote 8:wan
Input vote 9:li
Input vote 10:lii
Election results:
      li:3
   zhang:3
    wang:2
Wrong election:2
*//*
#include<stdio.h>
#include<string.h>
int main()
{   int i,wn=0;
char a[10][10];
    struct candidate{
    char name[10];
    int vote;

    };
    struct candidate can[10]={{"li",0},{"zhang",0},{"wang",0}};
    for(i=1;i<=10;i++)
    {
        printf("Input vote %d:",i);
        gets(a[i-1]);


       if(strcmp(a[i-1],"zhang")==0)
            {
                can[1].vote++;
            }
    else if(strcmp(a[i-1],"li")==0)
            {
                can[0].vote++;
            }
          else  if(strcmp(a[i-1],"wang")==0)
            {
                can[2].vote++;
            }
       else wn++;
        }


    printf("Election results:\n");
    for(i=0;i<3;i++)
       {
          printf("%8s:%d\n",can[i].name,can[i].vote);
       }
        printf("Wrong election:%d\n",wn);
}



*/
/*
#include<stdio.h>
int main()
{ int sum=0,a[12]={31,28,31,30,31,30,31,31,30,31,30,31},i;
struct date_rec
  {
    int day ;
    int month ;
    int year ;
  } ;
  struct date_rec current_date ;

  printf("请输入日期（年，月，日）\n");
  scanf("%d,%d,%d",&current_date.year,&current_date.month,&current_date.day);

  if(((current_date.year%4==0&&current_date.year%100!=0)||current_date.year%400==0)&&current_date.month>=3)//闰年
   sum+=1;
  for(i=0;i<current_date.month-1;i++)
  {
      sum+=a[i];
  }
  sum+=current_date.day;
  printf("\n%d月%d日是%d年的第%d天。",current_date.month,current_date.day,current_date.year,sum);
}*/
/*



#include<stdio.h>
int main()
{
    struct people
    {
        char id[10];
        int num
    };
    struct people a[13]
    for(i=0;i<13;i++)
    {
        a[i].id=i+1;
        switch(i%3)
    {
        case 0:a[i].num=1;break;
        case 1:a[i].num=2;break;
        case 2:a[i].num=3;break;
    }

    }
    for()
}

*//*
第12章实验1：学生成绩管理系统V5.0
某班有最多不超过30人（具体人数由键盘输入）参加期末考试，最多不超过6门（具体门数由键盘输入）。参考学生成绩管理系统V4.0，定义结构体类型，用结构体数组作函数参数，编程实现如下菜单驱动的学生成绩管理系统：
（1）录入每个学生的学号、姓名和各科考试成绩；
（2）计算每门课程的总分和平均分；
（3）计算每个学生的总分和平均分；
（4）按每个学生的总分由高到低排出名次表；
（5）按每个学生的总分由低到高排出名次表；
（6）按学号由小到大排出成绩表；
（7）按姓名的字典顺序排出成绩表；
（8）按学号查询学生排名及其考试成绩；
（9）按姓名查询学生排名及其考试成绩；
（10）按优秀（90~100）、良好（80~89）、中等（70~79）、及格（60~69）、不及格（0~59）5个类别，对每门课程分别统计每个类别的人数以及所占的百分比；
（11）输出每个学生的学号、姓名、各科考试成绩，以及每门课程的总分和平均分。

要求程序运行后先显示如下菜单，并提示用户输入选项：
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
然后，根据用户输入的选项执行相应的操作。

请按照下面的定义及函数原型编程
#define   MAX_LEN  10                	   // 字符串最大长度
#define   STU_NUM 30
#define   COURSE_NUM 6                     //最多的考试科目数
typedef struct student
{
    long num;	// 每个学生的学号
    char name[MAX_LEN];            	//每个学生的姓名
    float score[COURSE_NUM];	//每个学生COURSE_NUM门功课的成绩
    float sum;                       // 每个学生的总成绩
    float aver;                   //每个学生的平均成绩
}STU;
int   Menu(void);
void  ReadScore(STU stu[], int n, int m);
void  AverSumofEveryStudent(STU stu[], int n, int m);
void  AverSumofEveryCourse(STU stu[], int n, int m);
void  SortbyScore(STU stu[],int n,int m,int (*compare)(float a,float b));
int   Ascending(float a, float b);
int   Descending(float a, float b);
void  SwapFloat(float *x, float *y);
void  SwapLong(long *x, long *y);
void  SwapChar(char x[], char y[]);
void  AsSortbyNum(STU stu[], int n, int m);
void  SortbyName(STU stu[], int n, int m);
void  SearchbyNum(STU stu[], int n, int m);
void  SearchbyName(STU stu[], int n, int m);
void  StatisticAnalysis(STU stu[], int n, int m);
void  PrintScore(STU stu[], int n, int m);

下面是程序运行示例：
Input student number(n<30):
6↙
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
1↙
Input course number(m<=6):
3↙
Input student's ID, name and score:
11003001↙
lisi↙
87↙
82↙
89↙
11003005↙
heli↙
98↙
92↙
90↙
11003003↙
ludi↙
75↙
78↙
80↙
11003002↙
dumo↙
48↙
50↙
67↙
11003004↙
zuma↙
65↙
69↙
72↙
11003006↙
suyu↙
100↙
95↙
94↙
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
2↙
course 1:sum=473,aver=79
course 2:sum=466,aver=78
course 3:sum=492,aver=82
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
3↙
student 1: sum=258,aver=86
student 2: sum=280,aver=93
student 3: sum=233,aver=78
student 4: sum=165,aver=55
student 5: sum=206,aver=69
student 6: sum=289,aver=96
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
4↙
Sort in descending order by score:
11003006        suyu    100     95      94      289     96
11003005        heli    98      92      90      280     93
11003001        lisi    87      82      89      258     86
11003003        ludi    75      78      80      233     78
11003004        zuma    65      69      72      206     69
11003002        dumo    48      50      67      165     55
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
5↙
Sort in ascending order by score:
11003002        dumo    48      50      67      165     55
11003004        zuma    65      69      72      206     69
11003003        ludi    75      78      80      233     78
11003001        lisi    87      82      89      258     86
11003005        heli    98      92      90      280     93
11003006        suyu    100     95      94      289     96
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
6↙
Sort in ascending order by number:
11003001        lisi    87      82      89      258     86
11003002        dumo    48      50      67      165     55
11003003        ludi    75      78      80      233     78
11003004        zuma    65      69      72      206     69
11003005        heli    98      92      90      280     93
11003006        suyu    100     95      94      289     96
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
7↙
Sort in dictionary order by name:
11003002        dumo    48      50      67      165     55
11003005        heli    98      92      90      280     93
11003001        lisi    87      82      89      258     86
11003003        ludi    75      78      80      233     78
11003006        suyu    100     95      94      289     96
11003004        zuma    65      69      72      206     69
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
8↙
Input the number you want to search:
11003007↙
Not found!
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
8↙
Input the number you want to search:
11003004↙
11003004        zuma    65      69      72      206     69
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
9↙
Input the name you want to search:
lili↙
Not found!
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
9↙
Input the name you want to search:
lisi↙
11003001        lisi    87      82      89      258     86
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
10↙
For course 1:
<60     1       16.67%
60-69   1       16.67%
70-79   1       16.67%
80-89   1       16.67%
90-99   1       16.67%
100     1       16.67%
For course 2:
<60     1       16.67%
60-69   1       16.67%
70-79   1       16.67%
80-89   1       16.67%
90-99   2       33.33%
100     0       0.00%
For course 3:
<60     0       0.00%
60-69   1       16.67%
70-79   1       16.67%
80-89   2       33.33%
90-99   2       33.33%
100     0       0.00%
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
11↙
11003002        dumo    48      50      67      165     55
11003005        heli    98      92      90      280     93
11003001        lisi    87      82      89      258     86
11003003        ludi    75      78      80      233     78
11003006        suyu    100     95      94      289     96
11003004        zuma    65      69      72      206     69
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
12↙
Input error!
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
0↙
End of program!


输入格式:
（ 1 ）录入学生的人数：
                 **要求输入数据格式为："%d"
                 **提示信息为："Input student number(n<30):\n"
（ 2 ）录入课程数：
               **要求输入数据格式为："%d"
               **提示信息为："Input course number(m<=%d):\n"
（ 3 ）录入每个学生的学号、姓名和考试成绩：
               **要求学号、姓名的输入数据格式为："%ld%s"
               **要求考试成绩的输入数据格式为："%f"
               **提示信息为："Input student's ID, name and score:\n"

输出格式：
计算每门课程的总分和平均分：
              **要求输出总分与平均分格式为："course %d:sum=%.0f,aver=%.0f\n"
计算每个学生的总分和平均分：
              **要求输出总分与平均分格式为："student %d: sum=%.0f,aver=%.0f\n"
按成绩由高到低排出名次表：
              **要求学号、姓名的输出格式为："%ld\t%s\t"
              **要求成绩的输出格式为："%.0f\t"
              **要求总分及平均分的输出格式为："%.0f\t%.0f\n"
              **提示信息为："Sort in descending order by score:\n"
按成绩由低到高排出名次表:
              **要求学号、姓名的输出格式为："%ld\t%s\t"
              **要求成绩的输出格式为："%.0f\t"
              **要求总分及平均分的输出格式为："%.0f\t%.0f\n"
              **提示信息为："Sort in ascending order by score:\n"
按学号由小到大排出成绩表：
              **要求学号、姓名的输出格式为："%ld\t%s\t"
              **要求成绩的输出格式为："%.0f\t"
              **要求总分及平均分的输出格式为："%.0f\t%.0f\n"
              **提示信息为："Sort in ascending order by number:\n"
按姓名的字典顺序排出成绩表
              **要求学号、姓名的输出格式为："%ld\t%s\t"
              **要求成绩的输出格式为："%.0f\t"
              **要求总分及平均分的输出格式为："%.0f\t%.0f\n"
              **提示信息为："Sort in dictionary order by name:\n"
按学号查询学生排名及其考试成绩：
               **如果未查到此学号的学生，提示信息为："Not found!\n"；
               **如果查询到该学生
                   # 要求学号、姓名的输出格式为："%ld\t%s\t"
                   # 要求成绩的输出格式为："%.0f\t"
                   # 要求总分及平均分的输出格式为："%.0f\t%.0f\n"
               **提示信息为："Input the number you want to search:\n"
按姓名查询学生排名及其考试成绩；
               **如果未查到此学号的学生，提示信息为："Not found!\n"；
               **如果查询到该学生
                   # 要求学号、姓名的输出格式为："%ld\t%s\t"
                   # 要求成绩的输出格式为："%.0f\t"
                   # 要求总分及平均分的输出格式为："%.0f\t%.0f\n"
               **提示信息为："Input the name you want to search:\n"
按优秀（90~100）、良好（80~89）、中等（70~79）、及格（60~69）、不及格（0~59）5个类别，统计每个类别的人数以及所占的百分比：
                **成绩<60输出提示格式为："<60\t%d\t%.2f%%\n"；
                **成绩=100输出格式为："%d\t%d\t%.2f%%\n"；
                **其他要求输出百分比格式为："%d-%d\t%d\t%.2f%%\n"
                **提示信息为： "For course %d:\n"
输出每个学生的学号、姓名、考试成绩，以及课程总分和平均分
              **要求学号、姓名的输出格式为："%ld\t%s\t"
              **要求成绩的输出格式为："%.0f\t"
              **要求总分及平均分的输出格式为："%.0f\t%.0f\n"
选择退出（菜单项0）
                **提示信息："End of program!"
菜单项选择错误（不在0-11之间）
                **提示信息："Input error!\n"
*/
/*从键盘任意输入一个数n（0<n<=10），编程计算并输出S=1!+2!+...+n!的末6位数字（不含前导0）。若S超过6位数字，则只输出其末6位数字。若S不足6位数字，则直接输出S，不输出前导0，不输出前导0的含义是，如果末6位为001234，则只输出1234即可。如果输入的n不在1到10之间，则输出“Input error!”。
请安如下函数原型编写程序：
//函数功能：计算1!+2!+...+n!的末6位数
int Func(int n);
输入数据提示信息："Input n:"
输入数据格式："%d"
输出数据格式："%d"
输入数据不在合法范围时，输出"Input error!\n"
程序运行示例1：
Input n:5↙
153
程序运行示例2：
Input n:10↙
3791*/
/*马克思手稿中有一道趣味数学题：有30个人，其中可能有男人、女人和小孩，在一家饭馆里吃饭共花了50先令，每个男人各花3先令，每个女人各花2先令，每个小孩各花1先令，问男人、女人和小孩各有几人？
假设男人为x人，女人为y人，小孩为z人，则有以下方程组：
{x+y+z=30
3x+2y+z=50*//*
#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Man \t Women \t Childern\n");
    for (x=1; x<=16; x++)
        for (y=1; y<=25; y++)
        {
            z = 30-x - y;
            if (3 * x + 2 * y + z ==50)
                printf("%3d\t %5d\t %8d\n",x,y,z);
        }
}
*/
/*输入两点坐标(x1,y1),(x2,y2),并用函数计算两点间的距离。
要求可以输入多组数据，每组数据占一行；
Input:x1 y1 x2 y2
输入提示："输入你要输入的数据组数n=" "Input:\n"
输出提示："Input:\n" "%.2f\n"
例：
输入你要输入的数据组数n= 2
Input: 0 0 0 1
       1 0 0 1
Ouput: 1.00
       1.41*/

/*


#include<stdio.h>
#include<math.h>
int main()
{  int i,n;
     float a[10][10];
  printf("输入你要输入的数据组数n=");
  scanf("%d",&n);
  printf("Input: ");
  for(i=0;i<n;i++)
  {    if(i!=0)  printf("       ");
      scanf("%f%f%f%f",&a[i][0],&a[i][1],&a[i][2],&a[i][3]);
      a[i][4]=sqrt(pow(a[i][0]-a[i][2],2)+pow(a[i][1]-a[i][3],2));
  }
  printf("Ouput: ");
   for(i=0;i<n;i++)
  {    if(i!=0)  printf("       ");
      printf("%.2f\n",a[i][4]);

  }
}
*/

/*建立一个链表，使链表中从头到尾的结点数据域依次是一个数组的各个元素的值。程序先建立链表然后再遍历输出（假定链表和数组均有6个整型元素）。

**输入提示："输入数组%d个元素的值。\n"
**输入格式："%d"
**输出格式："%d "



程序运行示例如下：
输入数组6个元素的值。↙
1 3 5 7 9 11↙
此链表各个结点的数据域为：1 3 5 7 9 11
#include<stdio.h>
int main()
{
    struct xx {
    int num;
    struct xx*next;
    };
      struct xx a1 ,a2,a3,a4,a5,a6,*head,*p;
      int i,a[6];
      printf("输入数组6个元素的值。\n");
      for(i=0;i<6;i++)
      {
          scanf("%d",&a[i]);
      }
      a1.num=a[0];
      a2.num=a[1];
      a3.num=a[2];
      a4.num=a[3];a5.num=a[4];a6.num=a[5];
      head=&a1;
      a1.next=&a2;
      a2.next=&a3;
      a3.next=&a4;
      a4.next=&a5;
      a5.next=&a6;
      a6.next=NULL;
      p=head;
      printf("此链表各个结点的数据域为：");
      do{
        printf("%d ",p->num);
        p=p->next;
      }while(p!=NULL);
}
*//*
已知今年的工业产值为100万元，产值增长率为从键盘输入，请编程计算工业产值过多少年可实现翻一番（即增加一倍）。
参考答案：用符号常量CURRENT表示今年的工业产值为100万元，用变量growRate表示产值增长率，用变量year表示产值翻番所需的年数，则计算年产值增长额的计算公式为：
output  = output * (1 + growRate)
利用迭代法循环计算，直到output >= 2*CURRENT时为止。当output >= 2*CURRENT时，表示已实现产值翻番。此时，循环被执行的次数year即为产值翻番所需的年数。
**输入格式要求："%lf" 提示信息："Input grow rate:"
**输出格式要求："When grow rate is %.0f%%, the output can be doubled after %d years.\n"
程序运行示例如下：
Input grow rate:0.08
When grow rate is 8%, the output can be doubled after 10 years.*/
//按如下函数原型用函数编程解决如下的日期转换问题（要求考虑闰年的问题）：
/* 函数功能：  对给定的某年某月某日，计算它是这一年的第几天
函数参数：  整型变量year、month、day，分别代表年、月、日
函数返回值：这一年的第几天 */
//int  DayofYear(int year, int month, int day);
/* 函数功能：    对给定的某一年的第几天，计算它是这一年的第几月第几日
函数入口参数：整型变量year，存储年
                 整型变量yearDay，存储这一年的第几天
函数出口参数：整型指针pMonth，指向存储这一年第几月的整型变量
                 整型指针pDay，指向存储第几日的整型变量
函数返回值：  无 */
/*void  MonthDay(int year, int yearDay, int *pMonth, int *pDay);
输出如下菜单，用switch语句实现根据用户输入的选择执行相应的操作。
1. year/month/day -> yearDay
2. yearDay -> year/month/day
3. Exit
Please enter your choice:
输入提示信息：
"Please enter year, month, day:"
"Please enter year, yearDay:"
输入格式：
"%d,%d,%d"
"%d,%d"
输出提示信息和格式：
"yearDay = %d\n"
"month = %d, day = %d\n"\*/

/*
#include<stdio.h>

struct date_rec
  {
    int day ;
    int month ;
    int year ;
  } ;
  struct date_rec current_date ;
  int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
void fuc1()
{ int i;
   int sum=0;

  printf("Please enter year, month, day:");
  scanf("%d,%d,%d",&current_date.year,&current_date.month,&current_date.day);

  if(((current_date.year%4==0&&current_date.year%100!=0)||current_date.year%400==0)&&current_date.month>=3)//闰年
   sum+=1;
  for(i=0;i<current_date.month-1;i++)
  {
      sum+=a[i];
  }
  sum+=current_date.day;
  printf("yearDay = %d\n",sum);
}
void fuc2()
{   int sum=0,i;
      printf("Please enter year, yearDay:");
      scanf("%d,%d",&current_date.year,&sum);
    if(((current_date.year%4==0&&current_date.year%100!=0)||current_date.year%400==0))
    a[1]+=1;
    for(i=0;sum>a[i];i++)
    {
        sum-=a[i];
    }

    current_date.day=i;
    printf("month = %d, day = %d\n",i+1,sum);
}



int main()
{
    int c;
    printf("1. year/month/day -> yearDay\n2. yearDay -> year/month/day\n3. Exit\nPlease enter your choice:");
    scanf("%d",&c);
    switch(c)
    {
        case 1: fuc1();break;
        case 2: fuc2();break;
        default:break;
    }
}
*/
/*提交
  此题重复我要跳过（04:35)  此题暂时不会以后再做（04:35)
延长答题时间
 某班期末考试科目为数学（MT）、英语（EN）和物理（PH），有最多不超过40人参加考试。请编程计算：（1）每个学生的总分和平均分；（2）每门课程的总分和平均分。
**输入格式要求："%d" "%ld"(学号) 提示信息："Input the total number of the students(n<40):" "Input student’s ID and score as: MT  EN  PH:\n"
**输出格式要求："Counting Result:\n" "Student’s ID\t  MT \t  EN \t  PH \t SUM \t AVER\n" "%12ld\t"(打印学号) "%4d\t"（打印每门课成绩）"%4d\t%5.1f\n"（打印总分和平均分） "SumofCourse \t" "%4d\t"(打印每门课的总分) "\nAverofCourse\t" "%4.1f\t"(每门课的平均分)
程序的运行示例如下：
Input the total number of the students(n<=40):4
Input student’s ID and score as: MT  EN  PH:
070310122  97  87  92
070310123  92  91  90
070310124  90  81  82
070310125  73  65  80
Counting Result:
Student’s ID    MT	EN	PH	SUM	AVER
070310122	97	87	92	276	92.0
070310123	92	91	90	273	91.0
070310124	90	81	82	253	84.3
070310125	73	65	80	218	72.7
SumofCourse	352	324	344
AverofCourse	88.0	81.0	86.0
#include<stdio.h>
struct student{
long int id;
int math;
int en;
int ph;
int sum;
float aver;
};
struct student  stu[40];
int n;
int sum_of_sub[3]={0};
void inppp()
{   int i;
printf("Input student’s ID and score as: MT  EN  PH:\n");
    for(i=0;i<n;i++)
    {
        scanf("%ld%d%d%d",&stu[i].id,&stu[i].math,&stu[i].en,&stu[i].ph);
        stu[i].sum=stu[i].math+stu[i].en+stu[i].ph;
        stu[i].aver=(float)stu[i].sum/3;
            sum_of_sub[0]+=stu[i].math;
             sum_of_sub[1]+=stu[i].en;
              sum_of_sub[2]+=stu[i].ph;
    }
}

void outpp()
{  int i;
    printf("Counting Result:\nStudent’s ID\t  MT \t  EN \t  PH \t SUM \t AVER\n");
    for(i=0;i<n;i++)
    {
        printf("%12ld\t%4d\t%4d\t%4d\t%4d\t%5.1f\n",stu[i].id,stu[i].math,stu[i].en,stu[i].ph,stu[i].sum,stu[i].aver);


    }
    printf( "SumofCourse \t" );
    for(i=0;i<3;i++)
        printf("%4d\t",sum_of_sub[i]);
    printf( "\nAverofCourse\t");
       for(i=0;i<3;i++)
           printf("%4.1f\t",(float)sum_of_sub[i]/n);

}
int main()
{
    printf("Input the total number of the students(n<40):");
    scanf("%d",&n);
    inppp();
    outpp();



}
*/
/*
#include <stdio.h>
#include<math.h>
main()
{
  int m,i,n[100],count=0;
  float k;

  for(m=101;m<=200;m++)
  {

      k=sqrt(m);
      for(i= 2;i<=k;i++)
         if(m%i==0)
             break;
      if(m%i!=0)
      { n[count]=m;
          count++;


      }

  }
  for(i=0;i<count;i++)
  { if(i%10==0)
  printf("\n");
  printf("%d ",n[i]);


  }
}

回文素数
所谓回文素数是指对一个素数n，从左到右和从右到左读是相同的，这样的数就称为回文素数，例如11，101，313等。编程计算并输出不超过n（100<=n<1000）的回文素数，并统计这些回文素数的个数，其中n的值从键盘输入。

程序运行示例1
Input n:
100↙
  11
count=1

程序运行示例2
Input n:
1000↙
  11 101 131 151 181 191 313 353 373 383 727 757 787 797 919 929
count=16

输入格式:"%d"
输出格式：
输入提示信息："Input n:\n"
输出格式："%4d"
          "\ncount=%d\n"



          */

/*写一个程序，将接收的摄氏温度转换为对应的华氏温度。程序应显示如下的提示信息：
       Please input cels:
然后输入一个十进制数并回车，然后程序以合适的消息形式输出转换后的华氏温度。
程序使用如下的公式完成转换：华氏温度=摄氏温度*9.0/5.0+32.0
**输入格式要求："%lf" 提示信息："Please input cels: "
**输出格式要求："The fahr is: %.2f"

程序运行结果示例：
Please input cels: 32
The fahr is: 89.60

*//*
#include<stdio.h>
int main()
{
    double t;
    printf("Please input cels: ");
    scanf("%lf",&t);
    printf("The fahr is: %.2f",t*9/5+32);
}*/
/*写一个程序从键盘输入两个整数，然后显示第1个整数占第二个整数的百分比，保留到小数点后1位。例如输入5和40，程序输出结果如下：
   5 is 12.5 percent of 40

**输入格式要求："%d%d" 提示信息："请输入两个整数："
**输出格式要求："%d is %.1f percent of %d"*/
/*

#include<stdio.h>
int main()
{
    int a ,b;
    printf("请输入两个整数：");
    scanf("%d%d",&a,&b);
    printf("%d is %.1f percent of %d",a,((float)a/b)*100,b);
}

*//*13个人围成一圈，从第1个人开始顺序报号1、2、3，凡报到3的人退出圈子。找出最后留在圈子里的人原来的序号。要求用结构体编程实现。
程序的运行示例如下：
出圈成员及顺序：  3  6  9 12  2  7 11  4 10  5  1  8
最后的成员是： 13
*/
/*
#include<stdio.h>
int main()
{    int count=0;
int t;
    struct people{
    int ix;
    int se;
    int nn;

    };
    struct people p[13];
    int i,j;
    for(i=0;i<13;i++)
    {p[i].se=1;
    p[i].ix=i+1;}


     printf("出圈成员及顺序：");
    for(i=0;count!=12;i++)
    {
        for(j=0;j<13;j++)
        {  t=(t+j)%13;
            if(p[t].se==1)
            {
              p[t].nn=(i%3)+1;
              if(p[t].nn%3==0)
       {

           p[t].se=0;
           printf("%4d",p[t].ix);
           count++;

       }

              break;
            }

        }



    }
    printf("\n最后的成员是： ");
    for(i=0;i<13;i++)
    {
        if(p[i].se==1)
        {
            printf("%d",p[i].ix);
            break;
        }

    }

}
*/

/*
#include<stdio.h>
#include<string.h>
void insert(char*a,char  b,int c)
{
    int m=strlen(a),i;
    for(i=m;i>=c-1;i--)
    {
        a[i+1]=a[i];

    }
    a[c-1]=b;
    printf("%s",a);
}
void delet(char*a,char ,)



int main()
{   char a[100],b;
int c;
    printf("input the string:");
    gets(a);
    printf("the char :");
    scanf("%c",&b);
    printf("the pos :");
    scanf("%d",&c);

    insert(a,b,c);




}
*/

/*
#include<stdio.h>
#include<string.h>
static int N ;
static int M;
struct people {
    long int id;
    float score[6];
    char name[10];
    float aver;
    float sum;
}stu[30];

float score[30],iniscore[30];
long int id[30],iniid[30];
int menu(void)
{   int choice;
    printf("Management for Students' scores\
\n1.Input record\
\n2.Caculate total and average score of every course\
\n3.Caculate total and average score of every student\
\n4.Sort in descending order by score\
\n5.Sort in ascending order by score\
\n6.Sort in ascending order by number\
\n7.Sort in dictionary order by name\
\n8.Search by number\
\n9.Search by name\
\n10.Statistic analysis\
\n11.List record\
\n0.Exit\n\
Please Input your choice:\n");
scanf("%d",&choice);
    return choice;


}
void fuc1(void)
{  int i,j;
printf("Input course number(m<=6):\n");
scanf("%d",&M);
printf("Input student's ID and score:\n");
   for(i=0;i<N;i++)
   {
       scanf("%ld",&stu[i].id);
       getchar();
      gets(stu[i].name);

       for(j=0;j<M;j++)
       scanf("%f",&stu[i].score[j]);

   }

}
void fuc2(void)
{  int i,j;
float sum[6]={0};
    for(j=0;j<M;j++)
    {for(i=0;i<N;i++)
    {
      sum[j]+=stu[i].score[j];
    }}
   for(i=0;i<M;i++)
   printf("course %d:sum=%.0f,aver=%.0f\n",i+1,sum[i],sum[i]/N);
}

void fuceverystudent()
{  int i,j;
   for(i=0;i<N;i++)
   {  for(j=0;j<M;j++)
       stu[i].sum+=stu[i].score[j];


      stu[i].aver=stu[i].sum/M;

      printf("student %d: sum=%.0f,aver=%.0f\n",i+1,stu[i].sum,stu[i].aver);

   }

}
void fuc4(void)
{  int i,j;
    struct people temp;
    for(i=0;i<N-1;i++)

        for(j=0;j<N-1-i;j++)
        {
            if(stu[j].sum>stu[j+1].sum)
              {
                  temp=stu[j];
                  stu[j]=stu[j+1];
                  stu[j+1]=temp;

              }
        }


     printf("Sort in ascending order by score:\n");
   for(i=0;i<N;i++)
   {
    printf("%ld\t%s\t%.0f\t%.0f\t%.0f\t%.0f\t%.0f\n",stu[i].id,stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].sum,stu[i].aver);
   }
}
void fuc3(void)

{  int i,j;
    struct people temp;
    for(i=0;i<N-1;i++)

        for(j=0;j<N-1-i;j++)
        {
            if(stu[j].sum<stu[j+1].sum)
              {
                  temp=stu[j];
                  stu[j]=stu[j+1];
                  stu[j+1]=temp;

              }
        }


     printf("Sort in descending order by score:\n");
   for(i=0;i<N;i++)
   {
    printf("%ld\t%s\t",stu[i].id,stu[i].name);
    for(j=0;j<M;j++)
    {
        printf("%.0f\t",stu[i].score[j]);
    }
    printf("%.0f\t%.0f\n"    ,stu[i].sum,stu[i].aver);





   }
}
void fuc5(void)
{  int i,j;
struct people temp;
    for(i=0;i<N-1;i++)

        for(j=0;j<N-1-i;j++)
        {
            if(stu[j].id>stu[j+1].id)
              {
                  temp=stu[j];
                  stu[j]=stu[j+1];
                  stu[j+1]=temp;

              }
        }
   for(i=0;i<N;i++)
   {
    printf("%ld\t%s\t",stu[i].id,stu[i].name);
    for(j=0;j<M;j++)
    {
        printf("%.0f\t",stu[i].score[j]);
    }
    printf("%.0f\t%.0f\n"    ,stu[i].sum,stu[i].aver);





   }
}

void fucdictonorder(void)
{  int i,j;
struct people temp;
    for(i=0;i<N-1;i++)

        for(j=0;j<N-1-i;j++)
        {
            if  (strcmp(stu[j].name,stu[j+1].name)>0)
              {
                  temp=stu[j];
                  stu[j]=stu[j+1];
                  stu[j+1]=temp;

              }
        }
   for(i=0;i<N;i++)
   {
    printf("%ld\t%s\t",stu[i].id,stu[i].name);
    for(j=0;j<M;j++)
    {
        printf("%.0f\t",stu[i].score[j]);
    }
    printf("%.0f\t%.0f\n"    ,stu[i].sum,stu[i].aver);
   }
}


void fuc6()
{int i,j,st=0;
long int c;
printf("Input the number you want to search:\n");
scanf("%ld",&c);
for(i=0;i<N;i++)
        {
            if(c==stu[i].id)


    {printf("%ld\t%s\t",stu[i].id,stu[i].name);
    for(j=0;j<M;j++)
    {
        printf("%.0f\t",stu[i].score[j]);
    }
    printf("%.0f\t%.0f\n",stu[i].sum,stu[i].aver);
    st=1;
    break;
            }}


   if(st==0) printf("Not found!\n");
}
void fucserchbyname()
{int i,j,st=0;
char c[10];
printf("Input the name you want to search:\n");
getchar();
gets(c);

for(i=0;i<N;i++)
{if(strcmp(c,stu[i].name)==0)
{
printf("%ld\t%s\t",stu[i].id,stu[i].name);
for(j=0;j<M;j++)
{
    printf("%.0f\t",stu[i].score[j]);
}
printf("%.0f\t%.0f\n",stu[i].sum,stu[i].aver);
st=1;
break;
}}

if(st==0) printf("Not found!\n");
}
void fuc7()
{ int j,b[6][7]={0},i;
for(j=0;j<M;j++)
{for(i=0;i<N;i++)

{
    switch((int)stu[i].score[j]/10)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:b[j][0]++;break;
        case 6:b[j][1]++;break;
         case 7:b[j][2]++;break;
        case 8:b[j][3]++;break;
        case 9:b[j][4]++;break;
        case 10:b[j][5]++;break;

    }
}
printf("For course %d:\n",j+1);
printf("<60\t%d\t%.2f%%\n",b[j][0],((float)b[j][0]/N)*100);
printf("60-69\t%d\t%.2f%%\n",b[j][1],((float)b[j][1]/N)*100);
printf("70-79\t%d\t%.2f%%\n",b[j][2],((float)b[j][2]/N)*100);
printf("80-89\t%d\t%.2f%%\n",b[j][3],((float)b[j][3]/N)*100);
printf("90-99\t%d\t%.2f%%\n",b[j][4],((float)b[j][4]/N)*100);
printf("100\t%d\t%.2f%%\n",b[j][5],((float)b[j][5]/N)*100);}
}
void fuc888(void)
{ int i,j;
    for(i=0;i<N;i++)
    {printf("%ld\t%s\t",stu[i].id,stu[i].name);
    for(j=0;j<M;j++)
    {
        printf("%.0f\t",stu[i].score[j]);
    }
    printf("%.0f\t%.0f\n"    ,stu[i].sum,stu[i].aver);}

}


int main()
{

            int choice;
               printf("Input student number(n<30):\n");
               scanf("%d",&N);

                            for(;;)
                               {choice=menu();
                                switch(choice)
                                {
                                    case 1 :{fuc1();continue;}
                                    case 2 :{fuc2();continue;}
                                    case 3 :{fuceverystudent();continue;}
                                    case 4 :{fuc3();continue;}
                                    case 5 :{fuc4();continue;}
                                    case 6 :{fuc5();continue;}
                                    case 7 :{fucdictonorder();continue;}
                                    case 8 :{fuc6();continue;}
                                    case 9 :{fucserchbyname();continue;}
                                    case 10 :{fuc7();continue;}
                                    case 11 :{fuc888();continue;}
                                case 0:{printf("End of program!");break;}
                                    default :{printf("Input error!\n");continue;}
                                }
                                if(choice==0) break;
                            }
                return 0;

}*/


/*
#include<stdio.h>


int yinshuhe(int x)
{
    int sum=0,i;
    for(i=1;i<x;i++)
    {
        if(x%i==0)
            sum+=i;
    }
    return sum;
}
void fuckitup(int x)
{printf("相亲数：%d,%d\n",x,yinshuhe(x));
printf("%d 的真因数之和为：\n",x);


}



int main()
{
    int i;
    for(i=1;i<=9999;i++)
    {
        if(i==yinshuhe(yinshuhe(i)))
          fuckitup(i);
    }
}
*//*
#include<stdio.h>
int main()
{ float t;
    printf("Please input cels: ");
    scanf("%f",&t);
    printf("The fahr is: %.2f",9*t/5+32);
}
*//*
按如下公式递归计算矩阵行列式的值：



**输入格式要求："%d" "%lf"

提示信息："Please enter matrix size n(1<=n<20):"  "Please input matrix line by line:\n"  "matrix a:\n"
**输出格式要求："Submatrix:\n"  "DValue of the Submatrix is %6.1f\n"  "%6.1f\t"  "result = %f\n"

程序运行结果如下：

Please enter matrix size n(1<=n<20):3< span="">
Please input matrix line by line:

1 2 3
4 5 7
8 9 11
matrix a:
   1.0     2.0     3.0
   4.0     5.0     7.0
   8.0     9.0    11.0

Submatrix:
   5.0     7.0
   9.0    11.0
DValue of the Submatrix is   -8.0
Submatrix:
   4.0     7.0
   8.0    11.0
DValue of the Submatrix is  -12.0
Submatrix:
   4.0     5.0
   8.0     9.0
DValue of the Submatrix is   -4.0
result = 4.000000

 *//*
 #include<stdio.h>
#define pi 3.14
int main()
{float r;
printf("请输入半径的值：");
scanf("%f",&r);
printf("半径为%5.2f的圆的面积为%5.1f,圆的周长为%5.1f\n" ,r,pi*r*r,2*pi*r);}**/
/*
#include <stdio.h>

main()
{ int n;
   printf( "Please input your age: ");
scanf("%d",&n);
printf("The heart beats in your life: %d",n*60*24*365);
}*/
/*#include <stdio.h>

int main()
{ double sum=1;
int i, n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sum*=i;
}


printf("%.0lf\n",sum);
return 0;
}*/
/*
#include<stdio.h>
#include<stdlib.h>
void print_column(int(*a)[n],x)
{  int i;
    for(i=0;i<;i++)
}
int main()
{  int m,n,i,j;
    scanf("%d%d",&,m,&n);


  return 0;
}
*//*
#include<stdio.h>
int main()
{
    int i,j ,minp=0,temp,a[10]={9,8,7,6,4,5,3,2,1,-11};
    for(i=0;i<9;i++)
    {
        minp=i;

       for(j=i;j<9;j++)
    {
        if(a[j]<a[minp])
        minp=j;

    }
    temp=a[i];
    a[i]=a[minp];
    a[minp]=temp;
    }
    for(i=0;i<10;i++)
        printf("% d",a[i]);
}*/



/*
 #include<stdio.h>

 int IsPerfect(int x)
 {
     int i,sum=0,t=0;
     for(i=1;i<x;i++)
     {
         if(x%i==0)
            sum+=i;

     }
     if(x==sum)
        t++;
     return t;
 }
main()
{ int x;
    printf("Input m:\n");
    scanf("%d",&x);
    if(IsPerfect(x)==1)
        printf("%d is a perfect number\n",x);
    else
        printf("%d is not a perfect number\n",x);


}
*/

/*

#include<stdio.h>

int Fib(int x)
{

    if(x==1||x==2)
        return 1;
    else return Fib(x-1)+Fib(x-2);

}
int count(int x)
{
     if(x==1)
        return 1;
        else if(x==2)
            return 3;
    else return count(x-1)+count(x-2)+1;

}
int main()
{
    int x,i,q;
    printf("Input n:");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {  q=Fib(i);
        printf("Fib(%d)=%d, count=%d\n",i,q,count(i));
    }

}
*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int i,RB[10]={0},count=0,k,j,temp;
srand(time(NULL));
for(;count<6;)
{
    k=rand()%33+1;
    for(i=0;i<count+1;i++)
    {
        if(*(RB+i)==k)
            break;
        else if(*(RB+i)==0)
        {
          *(RB+i)=k;
          printf("红球%d；%d\n",i+1,k);
          count++;
          break;
        }
    }
}

printf("蓝球%d；%d\n",1,rand()%16+1);
printf("红球顺序排序\n");
for(i=0;i<5;i++)
   for(j=0;j<5-i;j++)
{
    if(*(RB+j)>*(RB+j+1))
       {
      temp=*(RB+j);
         *(RB+j)=*(RB+j+1);
         *(RB+j+1)=temp; }
}
for(i=0;i<6;i++)
    printf("%d\t",*(RB+i));
}
*//*
#include<stdio.h>
int main()
{   int*p,*x,*y,a=3,b=4,c;
    x=&a;
    y=&b;
    p=&c;
    *p=*x;
    *x=*y;
    *y=*p;
    printf("%d,%d",*x,*y);

}

*/

#include<stdio.h>
int main()
{    int x=11;
    printf("%d",(x++*1/3));

}

/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int rever(char str)
{ int b ;
 char temp[100] ;
    b=strlen(str);
   if b=0

        else
            rever()
        strncpy(temp,str,1);
        str[1]=str[b];
        for(i=0;i<=b-1;i++)
            str[]

}


int main()
{int b;
    char strr1[100],strr2[100],temp[100];
 gets(strr1);
 strr2=rever(strr1);
 printf("%s",strr2);
 return 0;



}  */




/*#include "stdio.h"
#define M 5;
main()
{   int a[M]={1,2,3,4,5};
    int i,j,*t;
    i=0;j=M-1;
    while(i)
    {
        t=&(a+i);
        *(a+i)=*(a+j);
        *(a+j)=t;
        i++;j++
    }
    for(i=0;i<M;i++) printf("%d",*(a+i));
}*/





//#include<stdio.h>








/*int main()
{
  return 0;
}





#include<stdio.h>
#include<math.h>
int main()
{ int n,i,a;

scanf("%d",&n);
a=sqrt(n);
for(i=1;i<a;i++)
{
 if (n%i==0)
        printf("%3d",i);
}
if (a%1==0)

  printf("%3d",a);


}
for(i=1;i<a;i++)
{
 if (n%i==0)
        printf("%3d",n/i);
}







#include<stdio.h>

#define MAXN 5001

int n, m;

int milk[MAXN], price[MAXN];

void init();

void sort();

void work();



int main() {

init();

sort();

work();

return 0;

}



void init() {

int i;

scanf("%d %d", &n, &m);

for (i = 0; i < m; i++)

scanf("%d %d", price + i, milk + i);

}



void sort() {

int i, j, temp;

for (i = 0; i < m; i++)

for (j = 0; j <m-i-1; j++) {

if (price[j] > price[j+1])

            {

temp = price[j];

price[j] = price[j+1];

price[j+1] = temp;

temp = milk[j];

milk[j] = milk[j+1];

milk[j+1] = temp;

           }

       }

}



void work() {

int i, sum=0, total=0;



for(i=0;n>0;i++)


 {

if (n > milk[i]) sum = milk[i];

else sum = n;

n -= sum;

total += sum * price[i];



    }

printf("%d\n", total);





}


#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,i;
     char a[100],b[100];
     printf("请输入一个字符串：");
     gets(a);


printf("从第几个字符开始复制？");
scanf("%d",&n);
m=strlen(a);
for(i=0;i<m-n+2;i++)
{
    b[i]=a[i+n-1];
}
printf("复制结果为：");
 puts(b);
 return 0;
}
*/



/*写一个函数，如果它首次被调用，则返回字母A，第二次被调用，则返回字母B，第三次调用，则返回字母C，以此类推。（提示：使用一个static数据类型）
函数原型为：char call_times(void)。
编写main函数测试它。

**输出格式要求："第一次调用返回字符%c!\n" "第二次调用返回字符%c!\n" "第三次调用返回字符%c!\n"*/
/*#include<stdio.h>
char call_times(void)
{
  static int a=0;
 switch(a)
{  case 0 :printf("第一次调用返回字符%c!\n",'A'+a);break;
case 1 :printf("第二次调用返回字符%c!\n",'A'+a);break;
case 2 :printf("第三次调用返回字符%c!\n",'A'+a);break;}


   a++;
}
int main()
{
 call_times();
 call_times();
 call_times();
 return 0;

}*/
/*
任意输入英文的星期几，通过查找星期表，输出其对应的数字，
若查到表尾，仍未找到，则输出错误提示信息。
**输入格式要求："%s" 提示信息："Please enter a string:\n"
**输出格式要求："%s is %d\n" "Not found!\n"
查找表中信息：
"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
程序运行示例1如下：
Please enter a string:
Monday
Monday is 1
程序运行示例2如下：
Monkey
Not found!*/
/*#include<stdio.h>
#include<string.h>
int main()
{  int m=0,i;
   char days[7][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
   char str[10];
   printf("Please enter a string:\n");
   gets(str);
   for(i=0;i<7;i++)
   {
       if(strcmp(str,days[i])!=0) continue;
       else {printf("%s is %d",days[i],i+1);m+=1;break;};
   }
   if(m==0) printf("Not found!");
return 0;
}*/
/*#include <stdio.h>
#include<string.h>
main()
{
    int i = 0;
    char str[6] = {'C', 'h', 'i', 'n', 'a', '\0'}, str1[6] , *ptr, *ptr1, *ptr2 , str2[5];
    while (str[i] != '\0')
    {
        putchar(*(str+i));
        i++;
    }


    gets(str);
    puts(str);

     printf("China\n");
     printf("China\n");
    strcpy(str2, "China");
    printf("%s", str2);
}
*/
/*大奖赛现场统分。已知某大奖赛有n个选手参赛，m（m>2）个评委为参赛选手评分（最高10分，最低0分）。统分规则为：在每个选手的m个得分中，去掉一个最高分和一个最低分后，取平均分作为该选手的最后得分。要求编程实现：
（1）根据n个选手的最后得分，从高到低输出选手的得分名次表，以确定获奖名单；
（2）根据各选手的最后得分与各评委给该选手所评分数的差距，对每个评委评分的准确性和评分水准给出一个定量的评价，每位评委的评分方法：(10 -(评委对选手x的评分 - x的得分)^2 的累加和)，从高到低输出各评委得分的名次表。
程序运行示例如下：
How many Athletes?5
How many judges?5
Scores of Athletes:
Athlete 1 is playing.
Please enter his number code:11
Judge 1 gives score:9.5
Judge 2 gives score:9.6
Judge 3 gives score:9.7
Judge 4 gives score:9.4
Judge 5 gives score:9.0
Delete a maximum score:9.7
Delete a minimum score:9.0
The final score of Athlete 11 is 9.500

Athlete 2 is playing.
Please enter his number code:12
Judge 1 gives score:9.0
Judge 2 gives score:9.2
Judge 3 gives score:9.1
Judge 4 gives score:9.3
Judge 5 gives score:8.9
Delete a maximum score:9.3
Delete a minimum score:8.9
The final score of Athlete 12 is 9.100

Athlete 3 is playing.
Please enter his number code:13
Judge 1 gives score:9.6
Judge 2 gives score:9.7
Judge 3 gives score:9.5
Judge 4 gives score:9.8
Judge 5 gives score:9.4
Delete a maximum score:9.8
Delete a minimum score:9.4
The final score of Athlete 13 is 9.600

Athlete 4 is playing.
Please enter his number code:14
Judge 1 gives score:8.9
Judge 2 gives score:8.8
Judge 3 gives score:8.7
Judge 4 gives score:9.0
Judge 5 gives score:8.6
Delete a maximum score:9.0
Delete a minimum score:8.6
The final score of Athlete 14 is 8.800

Athlete 5 is playing.
Please enter his number code:15
Judge 1 gives score:9.0
Judge 2 gives score:9.1
Judge 3 gives score:8.8
Judge 4 gives score:8.9
Judge 5 gives score:9.2
Delete a maximum score:9.2
Delete a minimum score:8.8
The final score of Athlete 15 is 9.000
Order of Athletes:
order	final score	number code
    1	      9.600	    13
    2	      9.500	    11
    3	      9.100	    12
    4	      9.000	    15
    5	      8.800	    14
Order of judges:
order	final score	number code
    1	      9.980	     1
    2	      9.960	     2
    3	      9.900	     3
    4	      9.860      4
    5	      9.590	     5
Over!Thank you!*/
/*下列给定程序中，函数fun的功能是：用下面的公式求pi的近似值，直到最后一项的绝对值小于指定的数（参数 num）为止。 pi/4≈1-1/3+1/5-1/7+...

例如程序运行后，若输入0.0001，则程序输出3.1414

请修改程序中的错误，使它能得出正确的结果。

注意：
请将修改正确后的完整源程序拷贝粘贴到答题区内。
不得增行或删行，也不得更改程序的结构。
对于没有错误的语句，请不要修改，修改原本正确的语句也要扣分。
当且仅当错误全部改正，且程序运行结果调试正确，才给加5分。
经教师手工核对后，如果未用指针做函数参数编程，那么即使做对也不给分。

#include <stdio.h>
#include <math.h>
int fun(float num)
{
    int s;
    float n,t,pi;
    t=0;
    pi=0;
    n=0;
    s=-1;
    while(t>=num);
    {
        pi=pi+t;
        n=n+1;
        s=+s;
        t=s%n;
    }
    pi=pi*4;
    return pi;
}
main()
{
    float n1,n2;
    printf("Enter a float number: ");
    scanf(" %d",&n1);
    n2=fun(n1);
    printf( "%6.4f\n ",n2);

}
*/
/*计算存款的本金和复利之和。输入存款金额 money、存期 year 和年利率 rate，根据公式计算存款到期时的本息合计sum（税前），输出时保留2位小数。sum = money(1+rate)^year(提示：在C语言里，^要用pow()函数计算，详见书后附录)。
**输入格式要求："%d" "%lf" 提示信息："Enter money:" "Enter year:" "Enter rate:"
**输出格式要求："sum = %.2f\n"
程序运行示例如下：
Enter money:1000
Enter year:3
Enter rate:0.025
sum = 1076.89


*/
/*#include<stdio.h>
#include<math.h>
int main()
{int a[10],min,max,i;
printf("Input 10 numbers:");
for(i=0;i<10;i++)
{
    scanf("%d",a+i);
}

min=a[0];
max=a[0];
for(i=0;i<10;i++)
{
    if(max<=a[i])
    max=a[i];
    if(min>=a[i])
    min=a[i];
}
printf("maxNum=%d\nminNum=%d\n",max,min);
if(min!=0){for(i=min;;i--)
{
    if(max%i==0&&min%15 23 56 87 94 105 78 19 22 43i==0) break;
}
printf("%d",i);}
return 0;
}*/
/*
亲密数。如果整数A的全部因子（包括1，但不包括其自身）之和等于B，且整数B的全部因子（包括1，但不包括B本身）之和等于A，则将整数A和B称为亲密数。3000以内的全部亲密数。
**输出格式要求："There are following friendly-numbers pair smaller than 3000:\n" "   %4d..%4d"
程序运行示例如下：
There are following friendly-numbers pair smaller than 3000:
    220.. 284   1184..1210   2620..2924


    编写程序，打印1~999之间的全部同构数。所谓同构数，是指该数出现在它的平方数的右侧。如25^2=625，25出现在625的右端，25就是同构数。
***输入提示信息：无
***输入数据格式：无
***输出提示信息："Print all the isomorphism between 1-999:\n"
***输出数据格式："%d "
注：输出提示信息请放在循环体之外*/

/*#include <stdio.h>

main()
{
   double b;
    unsigned short a = 65535;
    int k = a;
    char c, d;
    char f, g;

    b = (1234.0 - 1) / 10;
    scanf("%c", &c);
    scanf("%c", &d);
    scanf("%c", &f);
getchar();
    scanf("%c", &g);
    printf("%c,%c,%c,%c,%lf,%d", c, d , f, g, b, k);
}
*/

/*#include "stdio.h"
#define M 5
main()
{   int a[M]={1,2,3,4,5};
    int i,j,t;
    i=0;j=M-1;

    while(i<=j)
    {
       t=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=t;
        i++;j--;
    }
    for(i=0;i<M;i++) printf("%d",*(a+i));
}

*/
/*
用函数编程实现输出 m~n之间所有素数，并求和，m和n由键盘输入。素数是只能被1和自身整除的大于1的正整数。 要求程序能对用户输入的数据进行正确性检查，
满足条件：m和n都是大于1的正整数，并且m<=n。
1. 要求编写函数InputNumber 实现用户输入一个正整数，并对数的合法性进行检查，如果读入不成功(例如：输入字符串)，或者数不合法即不是大于1的正整数，
则重新输入，直到输入正确为止。
函数原型：
unsigned int InputNumber(char ch);
形式参数：ch，用于生成输入提示信息。
返回值：返回正确的输入值。
输入提示信息：printf("Please input the number %c(>1):",ch);
输入格式："%d"
输入错误提示信息："The input must be an integer larger than 1!\n"
提示：测试scanf的返回值来判断是否成功读入数据。
2. 要求编写函数IsPrime判断自然数x是否为素数，如果x是素数则返回1，不是素数返回0。
函数原型：
int IsPrime(unsigned int n);
返回值：如果x是素数则返回1，不是素数返回0。

3. 要求编写函数PrimeSum 输出m到n之间所有素数并返回它们的和。
函数原型：

返回值：m到n之间所有素数的和。
每个素数的输出格式："%d\n"

主函数定义如下：*//*
#include<stdio.h>
#include<math.h>
unsigned int InputNumber(char ch)
{   int num,i;

   do
   {fflush(stdin);
    printf("Please input the number %c(>1):",ch);
    i=scanf("%d",&num);
    if(i!=1||num<=1) printf("The input must be an integer larger than 1!\n");
   }
   while(i!=1||num<=1);
   return num;

}

int IsPrime(unsigned int n)
{
    int i,j=1;

   for(i=2;i<=sqrt(n);i++)
   {
       if(n%i==0)
       {
        j=0;
         break;
       }
   }
  return j;
}
int PrimeSum(unsigned int m, unsigned int n)
{ int i,sum=0;

for(i=m;i<=n;i++)
  {
      if(IsPrime(i)==1)
        {printf("%d\n",i);
        sum+=i;}
  }

    return sum;

}
int main()
{
    int m = 0,n = 0,sum = 0;
    do
    {
        m = InputNumber('m');
        n = InputNumber('n');
    }while(m > n && printf("n must be not smaller than m! Input again!\n"));   //保证m<=n
    sum = PrimeSum(m,n);
    printf("sum of prime numbers:%d",sum);
    return 0;
}*/
/*
运行实例：
Please input the number m(>1):abc
The input must be an integer larger than 1!
Please input the number m(>1):-34
The input must be an integer larger than 1!
Please input the number m(>1):56
Please input the number n(>1):23
n must be not smaller than m! Input again!
Please input the number m(>1):23
Please input the number n(>1):57
23
29
31
37
41
43
47
53
sum of prime numbers:304
Process returned 0 (0x0)   execution time : 30.690 s
Press any key to continue.*/
/*
#include<stdio.h>
int main()
{
    char a='A';
    int i;

    i=(int)a;
    printf("%d",i);
    return 0;



}*/
/*#include<stdio.h>
int main()
{
   int countor[30]={0},i,j,max[30],maxx;//[]字母[]排序
   int c;
   for(i=0;;i++)
   {
      c=getchar();
      if(c=='\n') break;
      else
        {
        for(j=0;j<26;j++)
        {
            if(c=='a'+j)
                countor[j]++;

        }}}

for()

















        }














*/

/*
#include<stdio.h>
int main()
{  int  a[100][100],i,j;
     int n;
     scanf("%d",&n);

    for(i=0;i<n;i++)

    {
        a[i][0]=1;
        a[i][i]=1;
        for(j=1;j<i;j++)
        a[i][j]=a[i-1][j-1]+a[i-1][j];





    }

    for(i=0;i<n;i++)
    {
          for(j=0;j<(n-i)/2;j++)
            printf("    ");

        for(j=0;j<=i;j++)
    {
        printf("%-4d",a[i][j]);
    }
printf("\n");

    }

}
*/


/*#include<stdio.h>

static int N ;
float score[30],iniscore[30];
long int id[30],iniid[30];
int menu(void)
{   int choice;
    printf("Management for Students' scores\n1.Input record\n2.Caculate total and average score of course\n3.Sort in descending order by score\n4.Sort in ascending order by score\n5.Sort in ascending order by number\n6.Search by number\n7.Statistic analysis\n8.List record\n0.Exit\nPlease Input your choice:\n");
    scanf("%d",&choice);
    return choice;


}
void fuc1(void)
{  int i;
printf("Input student's ID and score:\n");
   for(i=0;i<N;i++)
   {
       scanf("%ld",&id[i]);
       scanf("%f",&score[i]);
   }
   for(i=0;i<N;i++)
{
    iniid[i]=id[i];
    iniscore[i]=score[i];
}
}
void fuc2(void)
{  int i;
float sum=0;
    for(i=0;i<N;i++)
    {
      sum+=(float)score[i];
    }
   printf("sum=%.0f,aver=%.2f\n",sum,sum/N);
}


void fuc4(void)
{  int i,j,temp;
    for(i=0;i<N-1;i++)

        for(j=0;j<N-1-i;j++)
        {
            if(score[j]>score[j+1])
              {
                  temp=score[j];
                  score[j]=score[j+1];
                  score[j+1]=temp;
                  temp=id[j];
                  id[j]=id[j+1];
                  id[j+1]=temp;

              }
        }


     printf("Sort in ascending order by score:\n");
   for(i=0;i<N;i++)
   {
    printf("%ld\t%.0f\n",id[i],score[i]);
   }
}void fuc3(void)
{  int i,j,temp;
    for(i=0;i<N-1;i++)

        for(j=0;j<N-1-i;j++)
        {
            if(score[j]<score[j+1])
              {
                  temp=score[j];
                  score[j]=score[j+1];
                  score[j+1]=temp;
                  temp=id[j];
                  id[j]=id[j+1];
                  id[j+1]=temp;

              }
        }
   printf("Sort in descending order by score:\n");
   for(i=0;i<N;i++)
   {
    printf("%ld\t%.0f\n",id[i],score[i]);
   }

}
void fuc5(void)
{  int i,j,temp;
    for(i=0;i<N-1;i++)

        for(j=0;j<N-1-i;j++)
        {
            if(id[j]>id[j+1])
              {
                  temp=score[j];
                  score[j]=score[j+1];
                  score[j+1]=temp;
                  temp=id[j];
                  id[j]=id[j+1];
                  id[j+1]=temp;

              }
        }
   for(i=0;i<N;i++)
   {
       printf("Sort in ascending order by number:\n%ld\t%.0f\n",id[i],score[i]);
   }

}
void fuc6()
{int c,i;
printf("Input the number you want to search:\n");
scanf("%d",&c);
for(i=0;i<N;i++)
        {
            if(c==id[i])
            {
                printf("%ld\t%.0f\n",id[i],score[i]);
                break;
            }

        }
   if(c==N) printf("Not found!\n");
}

void fuc7()
{ int b[7]={0},i;
for(i=0;i<N;i++)
{
    switch((int)score[i]/10)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:b[0]++;break;
        case 6:b[1]++;break;
         case 7:b[2]++;break;
        case 8:b[3]++;break;
        case 9:b[4]++;break;
        case 10:b[5]++;break;

    }
}

printf("<60\t%d\t%.2f%%\n",b[0],((float)b[0]/N)*100);
printf("60-69\t%d\t%.2f%%\n",b[1],((float)b[1]/N)*100);
printf("70-79\t%d\t%.2f%%\n",b[2],((float)b[2]/N)*100);
printf("80-89\t%d\t%.2f%%\n",b[3],((float)b[3]/N)*100);
printf("90-99\t%d\t%.2f%%\n",b[4],((float)b[4]/N)*100);
printf("100\t%d\t%.2f%%\n",b[5],((float)b[5]/N)*100);
}
void fuc888(void)
{ int i;
    for(i=0;i<N;i++)
    printf("%ld\t%.0f\n",iniid[i],iniscore[i]);
}



int main()
{

            int choice;
               printf("Input student number(n<30):\n");
               scanf("%d",&N);

                            for(;;)
                               {choice=menu();
                                switch(choice)
                                {
                                    case 1 :{fuc1();continue;}
                                    case 2 :{fuc2();continue;}
                                    case 3 :{fuc3();continue;}
                                    case 4 :{fuc4();continue;}
                                    case 5 :{fuc5();continue;}
                                    case 6 :{fuc6();continue;}
                                    case 7 :{fuc7();continue;}
                                    case 8 :{fuc888();continue;}
                                case 0:{printf("End of program!");break;}
                                    default :{printf("Input error!\n");continue;}
                                }
                                if(choice==0) break;
                            }
                return 0;

}
*/

/*
#include<stdio.h>
#include<math.h>

float a[100][100],inia[100][100] ,b[100]={0},b2[100]={0};
int id[100],id2[100];
int n ,m;


void switchit(float*p,float*q,int*p1,int*q1)
{float temp;
int temp2;
   temp=*p;
   *p=*q;
   *q=temp;
   temp2=*p1;
   *p1=*q1;
   *q1=temp2;
}

void SortIt(float*q,int*p,int len)
{   int i,j;
    for(i=0;i<len-1;i++)
        for(j=0;j<len-1-i;j++)
    {
        if(*(q+j)>*(q+j+1))
        switchit((q+j),(q+j+1),(p+j),(p+j+1));

    }


}
void SortIt2(float*q,int*p,int len)
{   int i,j;
    for(i=0;i<len-1;i++)
        for(j=0;j<len-1-i;j++)
    {
        if(*(q+j)>*(q+j+1))
        {switchit((q+j),(q+j+1),(p+j),(p+j+1));
        }
    }


}
 float  averg(float*p,int len)
{
    int i;
    float sum=0;
    for(i=0;i<len;i++)
    {
        sum+=*(p+i+1);
    }
    return (sum/len);

}

void fuc1()
{ int i,j,empty[100]={0};
  for(i=0;i<n;i++)
  {
      printf("Athlete %d is playing.\nPlease enter his number code:",i+1);
      scanf("%f",&a[i][0]);
      for(j=0;j<m;j++)
      {
          printf("Judge %d gives score:",j+1);
          scanf("%f",&a[i][j+1]);
       inia[i][j+1]=a[i][j+1] ;
      }
      SortIt(*(a+i)+1,empty,m);
printf("Delete a maximum score:%.1f\nDelete a minimum score:%.1f\n",a[i][m],a[i][1]);
a[i][m+1]=averg(*(a+i)+1,m-2);
inia[i][m+1]=a[i][m+1];
b[i]=a[i][m+1];
id[i]=(int)a[i][0];

    printf("The final score of Athlete %.0f is %.3f\n\n",a[i][0],a[i][m+1]);


  }}
void fuc2()
{int i;
 printf("Order of Athletes:\norder	final score	number code\n") ;
 SortIt(b,id,n);

 for(i=0;i<n;i++)
 {
    printf("    %d	      %.3f	    %d\n",i+1,b[n-i-1],id[n-i-1]);
 }
}


void fuc3()
{ int i,j;
  printf("Order of judges:\norder	final score	number code\n");
  for(i=0;i<m;i++)
  {   id2[i]=i+1;
      for(j=0;j<n;j++)
      {
       b2[i]+=-pow(inia[j][i+1]-a[j][m+1] ,2);

      }


 b2[i]+=10;
  }
   SortIt2(b2,id2,m);
   for(i=0;i<m;i++)
  printf("    %d	      %.3f	     %d\n",i+1,b2[m-i-1],id2[m-i-1]);




}


int  main()
{
printf("How many Athletes?");
scanf("%d",&n);
printf("How many judges?");
scanf("%d",&m);
printf("Scores of Athletes:");
fuc1();
fuc2();
fuc3();
printf("Over!Thank you!");

}

*/

/*
#include<stdio.h>
int main()
{
   printf("Press a key and then press Enter:") ;
   putchar(getchar()+32);
   printf("\n");

}

*/
/*求三角形面积。输入三角形的三个边长，计算三角形的面积。设三角形的三个边长分别为a、b、c，为简单起见，我们认为输入的三个边长数据是正确的，可以组成一个三角形。
**输入格式要求："%f,%f,%f"  提示信息："Enter 3 floats:"
**输出格式要求："area=%.2f\n"
程序运行示例如下：
Enter 3 floats:2,2,3
area=1.98
//http://172.20.2.51.cqu.pt/train/view.aspx?session_id=79ab51571f484673b3a4ae12cee36880&auth_id=bbf3076d8ea5436db522d5c2327251ab
#include<stdio.h>
#include<math.h>
int main()
{ float a,b,c,p;
   printf("Enter 3 floats:") ;

   scanf("%f,%f,%f",&a,&b,&c);

p=(a+b+c)/2;
   printf("area=%.2f\n",sqrt(p*(p-a)*(p-c)*(p-b)));


}

#include<stdio.h>
#include<math.h>
int main()
{ float a,b,c;
   printf("请输入三个单精度数：") ;
   scanf("%f%f%f",&a,&b,&c);


   printf("三个数的和为%.3f，均值为%.3f",(a+b+c),(a+b+c)/3);


}





*/
/* test of paixu
#include<stdio.h>
float a[30]={0,7,9,3,5,4,8,6,1,2};
void switchit(float*p,float*q)
{float temp;
   temp=*p;
   *p=*q;
   *q=temp;


}
void SortIt(float*q,int len)
{   int i,j;
    for(i=0;i<len-1;i++)
        for(j=0;j<len-1-i;j++)
    {
        if(*(q+j+1)>*(q+j+2))
        switchit((q+j+1),(q+j+2));
    }


}
int main()
{ int i;

    SortIt(a,9);
    for(i=0;i<9;i++)
    {
     printf("%.0f ",a[i+1]);
    }


}
*/
/*
编写一C语言程序，从键盘输入10个整数，求出它们的和与平均值并输出  (请不要使用数组或指针)。
输入要求：输入一个变量前要有提示信息"input a integer:"
输入格式："%d"
输出要求：和值格式"sum=%d\n"，平均值格式"avg=%.2f\n"

#include<stdio.h>
int main()
{ int i, sum=0,a;

  for(i=0;i<10;i++)
  {     printf("input a integer:");
      scanf("%d",&a);
      sum+=a;
  }
   printf("sum=%d\navg=%.2f\n",sum,(float)sum/10);

}
*/
/*
有10个评委参加打分。输入10个评委打的分数（1—10之间的数字），找出一个最高分和一个最低分后，并输出是第几个评委打的最高分，第几个评委打的最低分。
函数原型如下：
void ReadScore(int Score[]) ; //用于输入评委的分数
void MaxMin(int ore[],int *MaxNum,int *MinNum) ;//用于找出最高分和最低分的评委
**输入提示信息：无
**输入格式："%d"
**输出提示信息及格式："最高分为第%d个评委，最低分为第%d个评委\n"
按如下框架编写程序：*/
/*#include <stdio.h>
#define N 5

void ReadScore(int Score[])
{ int i;
     for(i=0;i<N;i++)
     {
         scanf("%d",&Score[i]);

     }

}
void MaxMin(int Score[],int *MaxNum,int *MinNum)
{   int j;
     *MaxNum=0;
      *MinNum=0;
   for(j=0;j<N-1;j++)

   {
       if(*(Score+j)>*(Score+j+1))
        {*MaxNum=j;*MinNum=j+1;}
         if(*(Score+j)<*(Score+j+1)){ *MaxNum=j+1;
          *MinNum=j;}



   }
}

main()
{
    int i,a[100] ,maxp,minp;
  ReadScore(a);
  for(i=0;i<N;i++)
  {
      printf("%d\n",*a+i);
  }
    MaxMin(a,&maxp,&minp);
    printf("最高分为第%d个评委，最低分为第%d个评委\n",maxp+1,minp+1);
}
*/
/*
#include <stdio.h>
#define N 20
void fun(int *a,int n)
{
    int i, m, t, k;
    for(i=0; i<2; i++)
    {
        m=i;
        for(k=i; k<n; k++)
        {if(*(a+k)<*(a+m))
            m=k;}
        t=*(a+m) ; //交换 ak ai
        *(a+m)=*(a+i);
        *(a+i)=t;
    }
}
int main()
{
    int b[N]={11,5,12,0,3,6,9,7,10,8},n=10,i;
    for(i=0; i<n; i++)
        printf("%d ",b[i]);
    printf("\n");
     fun(b,n);
    for(i=0; i<n; i++)
        printf("%d ", b[i]);
    printf("\n");
    return 0;
}
*//*
#include<stdio.h>
int HuiwenOrnot(int x)
{  int a[10]={0},len=1,i,inix=x;

   for(i=0;;i++)
   {  if(x/10!=0) break;
       else{a[i]=x%10;
     x/=10;
     printf("%d\n",a[i]);
      len++;}
   }
   for(i=0;i<len/2;i++)
   {if (a[i]!=a[len-i-1])
    return 0;}

    printf("  %d \n%d",len,inix);
    return 1;
}


int main()
{
    int  i, count=0,max;
    printf( "Input n:");
    scanf("%d",&max);
    for(i=100;i<=max;i++)
    {
        count+=HuiwenOrnot(i);
    }
    printf("\n");
    printf("count=%d",count);



}
*/


/*用二维数组作为函数参数，实现矩阵转置。按如下函数原型编程计算并输出m×n阶矩阵的转置矩阵。其中，m和n的值由用户从键盘输入。已知m和n的值都不超过10。
void Transpose(int a[][N], int at[][M], int m, int n);
void InputMatrix(int a[][N], int m, int n);
void PrintMatrix(int at[][M], int n, int m);
输入提示信息："Input m, n:"  "Input %d*%d matrix:\n"
输入格式："%d,%d"
输出提示信息和格式："The transposed matrix is:\n"
输出格式（输完矩阵的一行要换行）："%d\t"



#include<stdio.h>
#define M 10
#define N 10


void Transpose(int a[][N], int at[][M], int m, int n)
{  int i, j;

    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
    {
        at[j][i]=a[i][j];
    }
}

void InputMatrix(int a[][N], int m, int n)
{
    int i,j;
    printf("Input %d*%d matrix:\n",m,n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
    {
        scanf("%d",*(a+i)+j);

    }
}
void PrintMatrix(int at[][M], int n, int m)
{

    int i,j;
  printf("The transposed matrix is:\n");
    for(i=0;i<n;i++)
    {

        for(j=0;j<m;j++)
    {
        printf("%d\t",*(*(at+i)+j));


    }
     printf("\n");}

}
int main()
{   int m,n,a[M][N],at[N][M];

     printf("Input m, n:");
     scanf("%d,%d",&m,&n);
    InputMatrix(a,m,  n);

    Transpose(a,at,m,n);
     PrintMatrix(at,n,m);
}


*//*
#include<stdio.h>
#define N 10000
float fff1(float x)
{
    return(1+x*x);
}
float fff2(float x )
{
    return(x/(1+x*x));
}
float Integral(float (*f)(float), float a, float b)
{    int i;
     float h ,sum=0;
     h=(b-a)/N;
     sum+=(f(a)+f(b))/2;
     for (i=1;i<=N-1;i++)
     {
         sum+=f(a+i*h);
     }
      return sum*h;

}
int main()
{


 printf("y1=%f\ny2=%f\n",Integral(fff1,0,1),Integral(fff2,0,3));








}
梅森尼数
形如2^i-1的素数，称为梅森尼数。编程计算并输出指数i在[2,n]中的所有梅森尼数，并统计这些梅森尼数的个数，其中n的值由键盘输入，并且n的值不能大于50。其中，2^i表示2的i次方，请不要使用pow(2,i)编程计算，应采用循环累乘求积的方式计算2^i。
提示：当i超过30以后，2^i-1的值会很大，不能用long型变量来存储，必须使用double类型来存储。对于double类型变量x（不是整型）不能执行求余运算，即不能用x%i == 0来判断x是否能被i整除，可以使用x/i == (int)(x/i)来判断x是否能被i整除。

程序运行示例
Input n:
50↙
2^2-1=3
2^3-1=7
2^5-1=31
2^7-1=127
2^13-1=8191
2^17-1=131071
2^19-1=524287
2^31-1=2147483647
2^49-1=562949953421311
count=9

输入提示信息："Input n:\n"
输入格式: "%d"
输出格式： "2^%d-1=%.0lf\n"
           "count=%d\n"*/
/*           用字符指针作函数参数编程实现字符串逆序存放功能。
输入提示信息："Input a string:"
输入字符串用gets()
输出提示信息："Inversed results:%s\n"
*/




/*
#include<stdio.h>
int main()
{   int i,len;
     char a[100];
    printf("Input a string:");
    gets(a);
    for(i=0;a[i]!='\0';i++)
        len=i+1;
    for(i=0;i<len;i++)
     { printf("%c",a[len-1-i]);

    }

}
*/
/*
编写程序统计从键盘输入的一行文本中各个字母的个数。
输入以回车键结束。
不区分大小写，大写字母与相应的小写字母按照同一个字母看待。
要求输出按照各个字母出现的个数从大到小进行排序，出现的个数相同的，按照字母在字母表中的先后顺序进行排序。
***输入格式：调用getchar()函数依次输入每个字符
***输出格式："%c(%c):%d\n"
例如输入以下文本：
Hello World
程序将输出：
L(l):3
O(o):2
D(d):1
E(e):1
H(h):1
R(r):1
W(w):1
A(a):0
B(b):0
C(c):0
F(f):0
G(g):0
I(i):0
J(j):0
K(k):0
M(m):0
N(n):0
P(p):0
Q(q):0
S(s):0
T(t):0
U(u):0
V(v):0
X(x):0
Y(y):0
Z(z):0




#include<stdio.h>

void getit(char*p)
{
    for(i=;c=getchar()!='\n';i++)
    {

    }

}


int main()
{
    char hehe[2][100];

}*/
/*写一个程序显示如下的金字塔树，从键盘输入层数。
树有一系列逐渐增加的层构成。上面显示的树有3层。
**输入提示信息："请输入树的层数："
**输入格式要求："%d"

（注意：每行左侧的空格数与n的数量有关，例如：如果是2层，最多一行会有5个*，则第一行开始会空出2个空格，第二行开始会空出一个空格，而5个*的那一行不空。|的左侧空两个空格。
另外，最后一行的V两侧的=的数量也与层数n相等）

程序运行示例：
请输入树的层数： 2

 *↙
***
  x-i

  *↙
 ***↙
  *↙
 ***↙
*****↙
  |↙
==V==↙
↙
程序运行示例：
请输入树的层数： 3
   *↙
  ***↙
   *↙
  ***↙
 *****↙
   *↙
  ***↙
 *****↙
*******↙
   |↙
===V===↙
↙
请输入树的层数： 3
   *
  ***
   *
  ***
 *****
   *
  ***
 *****
*******
   |
===V===
*//*
#include<stdio.h>
int N;
void emptyit(int x,char p)
{ int i;
    for(i=0;i<x;i++)
    {
        printf("%c",p);
    }
}
void  print_star(int x)
{ int i,j;
     for(i=0;i<=x;i++)
    {   emptyit(N-i,' ');
        for(j=0;j<2*i+1;j++)
        {

            printf("*");
        }
        printf("\n");
    }

}
void  print_gen()
{
    emptyit(N,' ');
    emptyit(1,'|');
  emptyit(1,'\n');

    emptyit(N,'=');
    emptyit(1,'V');
    emptyit(N,'=');
}

int main()
{   int i;
    printf("请输入树的层数：");
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        print_star(i);
    }
    print_gen();
}


*/

/*
    大数存储问题

   题目：读入n,m,输出 n!*m!. (1<=n,m<=100) 结果的位数不超过400.

         提示：定义一个数组a[400],定义乘法运算，每次乘法结果用数组保存

  输入:

    输入仅一行,有两个数n,m.输入格式：scanf("%d %d",&n,&m);

   输出:


    输出仅一行,为题目所要求的答案.最后换行.

    输出格式：printf("%d",a[i]);

              .................

              printf("\n");

  样例输入：

   100 90

   样例输出：

   138656248189732152054159609718432247180282092567575172939636909

   224427929240834642263988043338170905744175653189424779336521852

   536242160190545537133916649622615351174407746524657461692702500

   613722228638559932561661493048332720605069264786823205531680768

   000000000000000000000000000000000000000000000





   99*99=(9*10+9)*99=           9801
   m*n=







   */

   /*根据最大公约数的如下3条性质，采用递归法编写计算最大公约数的函数Gcd()，在主函数中调用该函数计算并输出从键盘任意输入的两正整数的最大公约数。
性质1  如果a>b，则a和b与a-b和b的最大公约数相同，即Gcd(a, b) = Gcd(a-b, b)
性质2  如果b>a，则a和b与a和b-a的最大公约数相同，即Gcd(a, b) = Gcd(a, b-a)
性质3  如果a=b，则a和b的最大公约数与a值和b值相同，即Gcd(a, b) = a = b
要求如下：
（1）从键盘任意输入的两整数
     主函数调用Gcd()函数，并输出两整数的最大公约数。
（2）Gcd函数原型为：
     int Gcd(int a, int b);
     如果输入的数不是正整数，则返回-1，否则，返回两个数的最大公约数。
（3）**输入提示信息格式要求："Input a,b:"
       输入格式："%d,%d"
     **输出提示信息要求：
       若输入不是正整数，则输出"Input number should be positive!\n"
       否则输出"Greatest Common Divisor of %d and %d is %d\n"
注：不允许使用goto语句
*//*
#include<stdio.h>
int Gcd(int x,int y)
{   if  (x<=0||y<=0) return -1;
    else if(x==y) return x;
    else if (x>y) return Gcd(x-y,y);
    else return Gcd(x,y-x);
}
int main()
 {  int a,b ,c;
      printf("Input a,b:");
      c=scanf("%d,%d",&a,&b);
      if(c!=2||a<=0||b<=0) printf("Input number should be positive!\n");
      else
     printf("Greatest Common Divisor of %d and %d is %d\n", a,b,Gcd(a,b));
}

*/
/*输入2个学生5门课的成绩，分别用函数求：（1）每个学生的平均分；（2）每门课的平均分；（3）找出最高的分数所对应的学生和课程；（4）求出每个学生平均分的方差：(1/n)(∑xi2) - （（∑xi）/ n）2。
**输入提示："\n输入学生%4d的5个成绩：\n"
**输入成绩格式："%f"
**输出提示："\n 序号     课程1     2     3     4     5     平均分\n"
**序号输出格式："\n NO%2d"
**成绩输出格式（提示：5个成绩）："%8.2f"
**平均分输出提示："\n课平均"
**平均分输出格式："%8.2f"
**输出格示："\n\n最高分%8.2f是%d号学生的第%d门课\n"
**输出格示："\n方差 %8.2f"

程序运行示例：
↙
输入学生   1的5个成绩：↙
89 96 88 90 76↙
↙
输入学生   2的5个成绩：↙
66 89 87 85 67↙
↙
 序号     课程1     2     3     4     5     平均分↙
↙
 NO 1   89.00   96.00   88.00   90.00   76.00   87.80↙
 NO 2   66.00   89.00   87.00   85.00   67.00   78.80↙
课平均   77.50   92.50   87.50   87.50   71.50↙
↙
最高分   96.00是1号学生的第2门课↙
↙
方差    20.25  */
/*
#include<stdio.h>
#include<math.h>
float grade[2][10];
void getin()
{ int i,j;
 printf("\n");
   for(i=0;i<2;i++)
    {printf("输入学生   %d的5个成绩：\n\n",i+1);
   for(j=0;j<5;j++)
   {
       scanf("%f",*(grade+i)+j);

   }
    }
}
float countaver(float *p)
{  int i;
float sum =0;
   for(i=0;i<5;i++)
   {
      sum+=*(p+i) ;
   }
   return sum/5;
}
void averr()
{   int i,j;
     printf(" 序号     课程1     2     3     4     5     平均分\n\n");
     for(i=0;i<2;i++)
     {
         printf(" NO %d",i+1);
         grade[i][5]=countaver(*(grade+i));

         for(j=0;j<5;j++)
         {
             printf("%8.2f",grade[i][j]);
         }
         printf("%8.2f\n",grade[i][5]);
     }
}
void grade_per_subject()
{  printf("课平均");
    int i;
    for(i=0;i<5;i++)
    {
    printf("%8.2f",(grade[0][i]+grade[1][i])/2);
    }
    printf("\n\n");
}
void maxx()
{ float max=grade[0][0];
int maxp[2]={0,0};
int i,j;
  for(i=0;i<2;i++)
    for(j=0;j<5;j++)
  {
      if(grade[i][j]>max)
        {max=grade[i][j];
          maxp[0]=i;
          maxp[1]=j;

  }

}printf("最高分%8.2f是%d号学生的第%d门课\n\n",max,maxp[0]+1,maxp[1]+1);
}
void dxit()
{
    float mid;
    mid=(pow(grade[0][5],2)+pow(grade[1][5],2))/2;
    printf("方差 %8.2f",mid-pow((grade[0][5]+grade[1][5])/2,2));


}



int main()
{
   getin();
   averr();
   grade_per_subject();
   maxx();
   dxit();


}*/
/*口袋中有若干红、黄、蓝、白、黑5种颜色的球，每次从口袋中取出3个球，定义如下指针数组，编程打印出得到3种不同颜色的球的所有可能取法。
char *bColor[] = {"RED", "YELLOW", "BLUE", "WHITE", "BLACK"};
输入提示信息和数据格式：无
输出提示信息和数据格式："%d:%s,%s,%s\n"
请按如下框架编程：*/
/*
#include <stdio.h>





int main()
{    int i,j,m,count=1;
    char *bColor[] = {"RED", "YELLOW", "BLUE", "WHITE", "BLACK"};
    for(i=0;i<5;i++)
    {   for(j=i+1;j<5;j++)
          {for(m=j+1;m<5;m++)

          {printf("%d:%s,%s,%s\n",count,bColor[i],bColor[j],bColor[m]);
          count++;}}
    }
    return  0;
}

*/

/*


以下程序有若干语法错误。请找出并改正之。
#include <stdio.h>
struct date
{
    int  y;m;d;
}
struct stu
{   char n[10];
    struct date b;
    int a;
}s={“Wang”,{1980,11,11},30};
main()
{
    printf(“%c,%d,%d\n”,s.n,s.d,s.a);
}
以下程序有若干语法错误。请找出并改正之。*/
/*#include <stdio.h>
struct date
{
    int  y,m,d;
}  ;
struct stu
{   char n[10];
    struct date b;
    int a;
} s={"Wang",{1980,11,11},30};
main()
{
    printf("%s,%d,%d\n",s.n,s.b.d,s.a);
}

在一个有序(按非递减顺序)的链表中插入一个元素为x的结点，使插入后的链表仍然有序（链表数据域为整型数，N为6）。
**输入提示："输入数组6个元素的值。\n"
**输入格式："%d"
**输出提示："此链表各个结点的数据域为："
**输出格式："%d "
**输入提示："输入要插入的数据x:"
**输入格式："%d"
**输出提示："插入后链表各个结点的数据域为："
**输出格式："%d "


程序运行示例如下：
输入数组6个元素的值。
12 23 34 45 56 67
此链表各个结点的数据域为：12 23 34 45 56 67
输入要插入的数据x:36
插入后链表各个结点的数据域为：12 23 34 36 45 56 67
*/
/*提交
  此题重复我要跳过（04:19)  此题暂时不会以后再做（04:19)
延长答题时间
 梅森尼数
形如2^i-1的素数，称为梅森尼数。编程计算并输出指数i在[2,n]中的所有梅森尼数，并统计这些梅森尼数的个数，其中n的值由键盘输入，并且n的值不能大于50。其中，2^i表示2的i次方，请不要使用pow(2,i)编程计算，应采用循环累乘求积的方式计算2^i。
提示：当i超过30以后，2^i-1的值会很大，不能用long型变量来存储，必须使用double类型来存储。对于double类型变量x（不是整型）不能执行求余运算，即不能用x%i == 0来判断x是否能被i整除，可以使用x/i == (int)(x/i)来判断x是否能被i整除。

程序运行示例
Input n:
50↙
2^2-1=3
2^3-1=7
2^5-1=31
2^7-1=127
2^13-1=8191
2^17-1=131071
2^19-1=524287
2^31-1=2147483647
2^49-1=562949953421311
count=9

输入提示信息："Input n:\n"
输入格式: "%d"
输出格式： "2^%d-1=%.0lf\n"
           "count=%d\n"
*/

/*
#include<stdio.h>
#include<math.h>
int N;
int sushuornot(double x)
{
     double i,t;

     for(i=2;i<=sqrt(x);i++)
        {    t=x/i;


        if(t==1) return 0;
            if(((int)t==t))
            {
                return 0;
                break;
            }

        }

    return 1;
}
int fuck_it(int n)
{  int i,count=0;
    double res=1;
for(i=0;i<n;i++)
res*=2;

res-=1;

    if(sushuornot(res)==1)
    {   count++;
        printf("2^%d-1=%.0lf\n",n,res);
    }
    return count;
}
int main()
{    int i,count=0;
    printf("Input n:\n");
    scanf("%d",&N);
    for(i=2;i<=N;i++)
    {
      count+=fuck_it(i);
    }
     printf("count=%d\n",count);
}
*/
/*给定如下定义：
struct date_rec
  {
    int day ;
    int month ;
    int year ;
  } ;
  struct date_rec current_date ;
写一个程序包含如下的函数，完成：
(a) 输入current_date的值：
void input_date(struct date_rec *current_date)
(b) 将current_date增加1天：
void increment_date(struct date_rec *current_date)
(c) 显示current_date的值：
void output_date(struct date_rec *current_date)
考虑每个月的实际天数，同时也考虑闰年的情况。

**输入格式要求："%d%d%d" 提示信息："请输入当前日期（年 月 日）："
**输出格式要求："当前日期：%d年%d月%d日！" （加1天后的新日期）
*//*
#include<stdio.h>
int main()
{
struct date_rec
  {
    int day ;
    int month ;
    int year ;
  } ;
  struct date_rec current_date ;

  printf("请输入当前日期（年 月 日）：");
  scanf("%d%d%d",&current_date.year,&current_date.month,&current_date.day);
  if((current_date.year%4==0&&current_date.year%100!=0)||current_date.year%400==0)//闰年
  {
      switch(current_date.month)
      {
  case 1 :case 3:case 5:case 7:case 8:case 10:
        {
            if(current_date.day==31)
            {
                current_date.month+=1;
                current_date.day=1;
            }
            else{current_date.day+=1;}
        }
      break;
      case  12:
    {
       if(current_date.day==31)
            {
                current_date.month=1;
                current_date.day=1;
                current_date.year+=1;
            }
            else {current_date.day+=1;}
        }

        break ;
      case 2:
        {
            if(current_date.day==29)
            {
                current_date.month+=1;
                current_date.day=1;

            }
            else {current_date.day+=1;}
        }
         break;
        default: {
            if(current_date.day==30)
            {
                current_date.month+=1;
                current_date.day=1;
            }
                        else {current_date.day+=1;}
        }
      }}
  else {
      switch(current_date.month)
      {
  case 1 :case 3:case 5:case 7:case 8:case 10:
        {
            if(current_date.day==31)
            {
                current_date.month+=1;
                current_date.day=1;
            }
            else{current_date.day+=1;}
        }
      break;
      case  12:
    {
       if(current_date.day==31)
            {
                current_date.month=1;
                current_date.day=1;
                current_date.year+=1;
            }
            else {current_date.day+=1;}
        }

        break ;
      case 2:
        {
            if(current_date.day==28)
            {
                current_date.month+=1;
                current_date.day=1;

            }
            else {current_date.day=+1;}
        }
         break;
        default: {
            if(current_date.day==30)
            {
                current_date.month+=1;
                current_date.day=1;
            }
                        else {current_date.day+=1;}
        }
      }}

    printf("当前日期：%d年%d月%d日！",current_date.year,current_date.month,current_date.day);
}
*/

/*编程统计候选人的得票数。设有3个候选人zhang、li、wang（候选人姓名不区分大小写），10个选民，选民每次输入一个得票的候选人的名字，若选民输错候选人姓名，则按废票处理。选民投票结束后程序自动显示各候选人的得票结果和废票信息。要求用结构体数组candidate表示3个候选人的姓名和得票结果。最后输出格式为："%8s:%d\n"，"Wrong election:%d\n"
例如：
Input vote 1:li
Input vote 2:li
Input vote 3:Zhang
Input vote 4:wang
Input vote 5:zhang
Input vote 6:Wang
Input vote 7:Zhang
Input vote 8:wan
Input vote 9:li
Input vote 10:lii
Election results:
      li:3
   zhang:3
    wang:2
Wrong election:2
*//*
#include<stdio.h>
#include<string.h>
int main()
{   int i,wn=0;
char a[10][10];
    struct candidate{
    char name[10];
    int vote;

    };
    struct candidate can[10]={{"li",0},{"zhang",0},{"wang",0}};
    for(i=1;i<=10;i++)
    {
        printf("Input vote %d:",i);
        gets(a[i-1]);


       if(strcmp(a[i-1],"zhang")==0)
            {
                can[1].vote++;
            }
    else if(strcmp(a[i-1],"li")==0)
            {
                can[0].vote++;
            }
          else  if(strcmp(a[i-1],"wang")==0)
            {
                can[2].vote++;
            }
       else wn++;
        }


    printf("Election results:\n");
    for(i=0;i<3;i++)
       {
          printf("%8s:%d\n",can[i].name,can[i].vote);
       }
        printf("Wrong election:%d\n",wn);
}



*/
/*
#include<stdio.h>
int main()
{ int sum=0,a[12]={31,28,31,30,31,30,31,31,30,31,30,31},i;
struct date_rec
  {
    int day ;
    int month ;
    int year ;
  } ;
  struct date_rec current_date ;

  printf("请输入日期（年，月，日）\n");
  scanf("%d,%d,%d",&current_date.year,&current_date.month,&current_date.day);

  if(((current_date.year%4==0&&current_date.year%100!=0)||current_date.year%400==0)&&current_date.month>=3)//闰年
   sum+=1;
  for(i=0;i<current_date.month-1;i++)
  {
      sum+=a[i];
  }
  sum+=current_date.day;
  printf("\n%d月%d日是%d年的第%d天。",current_date.month,current_date.day,current_date.year,sum);
}*/
/*



#include<stdio.h>
int main()
{
    struct people
    {
        char id[10];
        int num
    };
    struct people a[13]
    for(i=0;i<13;i++)
    {
        a[i].id=i+1;
        switch(i%3)
    {
        case 0:a[i].num=1;break;
        case 1:a[i].num=2;break;
        case 2:a[i].num=3;break;
    }

    }
    for()
}

*//*
第12章实验1：学生成绩管理系统V5.0
某班有最多不超过30人（具体人数由键盘输入）参加期末考试，最多不超过6门（具体门数由键盘输入）。参考学生成绩管理系统V4.0，定义结构体类型，用结构体数组作函数参数，编程实现如下菜单驱动的学生成绩管理系统：
（1）录入每个学生的学号、姓名和各科考试成绩；
（2）计算每门课程的总分和平均分；
（3）计算每个学生的总分和平均分；
（4）按每个学生的总分由高到低排出名次表；
（5）按每个学生的总分由低到高排出名次表；
（6）按学号由小到大排出成绩表；
（7）按姓名的字典顺序排出成绩表；
（8）按学号查询学生排名及其考试成绩；
（9）按姓名查询学生排名及其考试成绩；
（10）按优秀（90~100）、良好（80~89）、中等（70~79）、及格（60~69）、不及格（0~59）5个类别，对每门课程分别统计每个类别的人数以及所占的百分比；
（11）输出每个学生的学号、姓名、各科考试成绩，以及每门课程的总分和平均分。

要求程序运行后先显示如下菜单，并提示用户输入选项：
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
然后，根据用户输入的选项执行相应的操作。

请按照下面的定义及函数原型编程
#define   MAX_LEN  10                	   // 字符串最大长度
#define   STU_NUM 30
#define   COURSE_NUM 6                     //最多的考试科目数
typedef struct student
{
    long num;	// 每个学生的学号
    char name[MAX_LEN];            	//每个学生的姓名
    float score[COURSE_NUM];	//每个学生COURSE_NUM门功课的成绩
    float sum;                       // 每个学生的总成绩
    float aver;                   //每个学生的平均成绩
}STU;
int   Menu(void);
void  ReadScore(STU stu[], int n, int m);
void  AverSumofEveryStudent(STU stu[], int n, int m);
void  AverSumofEveryCourse(STU stu[], int n, int m);
void  SortbyScore(STU stu[],int n,int m,int (*compare)(float a,float b));
int   Ascending(float a, float b);
int   Descending(float a, float b);
void  SwapFloat(float *x, float *y);
void  SwapLong(long *x, long *y);
void  SwapChar(char x[], char y[]);
void  AsSortbyNum(STU stu[], int n, int m);
void  SortbyName(STU stu[], int n, int m);
void  SearchbyNum(STU stu[], int n, int m);
void  SearchbyName(STU stu[], int n, int m);
void  StatisticAnalysis(STU stu[], int n, int m);
void  PrintScore(STU stu[], int n, int m);

下面是程序运行示例：
Input student number(n<30):
6↙
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
1↙
Input course number(m<=6):
3↙
Input student's ID, name and score:
11003001↙
lisi↙
87↙
82↙
89↙
11003005↙
heli↙
98↙
92↙
90↙
11003003↙
ludi↙
75↙
78↙
80↙
11003002↙
dumo↙
48↙
50↙
67↙
11003004↙
zuma↙
65↙
69↙
72↙
11003006↙
suyu↙
100↙
95↙
94↙
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
2↙
course 1:sum=473,aver=79
course 2:sum=466,aver=78
course 3:sum=492,aver=82
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
3↙
student 1: sum=258,aver=86
student 2: sum=280,aver=93
student 3: sum=233,aver=78
student 4: sum=165,aver=55
student 5: sum=206,aver=69
student 6: sum=289,aver=96
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
4↙
Sort in descending order by score:
11003006        suyu    100     95      94      289     96
11003005        heli    98      92      90      280     93
11003001        lisi    87      82      89      258     86
11003003        ludi    75      78      80      233     78
11003004        zuma    65      69      72      206     69
11003002        dumo    48      50      67      165     55
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
5↙
Sort in ascending order by score:
11003002        dumo    48      50      67      165     55
11003004        zuma    65      69      72      206     69
11003003        ludi    75      78      80      233     78
11003001        lisi    87      82      89      258     86
11003005        heli    98      92      90      280     93
11003006        suyu    100     95      94      289     96
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
6↙
Sort in ascending order by number:
11003001        lisi    87      82      89      258     86
11003002        dumo    48      50      67      165     55
11003003        ludi    75      78      80      233     78
11003004        zuma    65      69      72      206     69
11003005        heli    98      92      90      280     93
11003006        suyu    100     95      94      289     96
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
7↙
Sort in dictionary order by name:
11003002        dumo    48      50      67      165     55
11003005        heli    98      92      90      280     93
11003001        lisi    87      82      89      258     86
11003003        ludi    75      78      80      233     78
11003006        suyu    100     95      94      289     96
11003004        zuma    65      69      72      206     69
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
8↙
Input the number you want to search:
11003007↙
Not found!
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
8↙
Input the number you want to search:
11003004↙
11003004        zuma    65      69      72      206     69
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
9↙
Input the name you want to search:
lili↙
Not found!
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
9↙
Input the name you want to search:
lisi↙
11003001        lisi    87      82      89      258     86
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
10↙
For course 1:
<60     1       16.67%
60-69   1       16.67%
70-79   1       16.67%
80-89   1       16.67%
90-99   1       16.67%
100     1       16.67%
For course 2:
<60     1       16.67%
60-69   1       16.67%
70-79   1       16.67%
80-89   1       16.67%
90-99   2       33.33%
100     0       0.00%
For course 3:
<60     0       0.00%
60-69   1       16.67%
70-79   1       16.67%
80-89   2       33.33%
90-99   2       33.33%
100     0       0.00%
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
11↙
11003002        dumo    48      50      67      165     55
11003005        heli    98      92      90      280     93
11003001        lisi    87      82      89      258     86
11003003        ludi    75      78      80      233     78
11003006        suyu    100     95      94      289     96
11003004        zuma    65      69      72      206     69
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
12↙
Input error!
Management for Students' scores
1.Input record
2.Caculate total and average score of every course
3.Caculate total and average score of every student
4.Sort in descending order by score
5.Sort in ascending order by score
6.Sort in ascending order by number
7.Sort in dictionary order by name
8.Search by number
9.Search by name
10.Statistic analysis
11.List record
0.Exit
Please Input your choice:
0↙
End of program!


输入格式:
（ 1 ）录入学生的人数：
                 **要求输入数据格式为："%d"
                 **提示信息为："Input student number(n<30):\n"
（ 2 ）录入课程数：
               **要求输入数据格式为："%d"
               **提示信息为："Input course number(m<=%d):\n"
（ 3 ）录入每个学生的学号、姓名和考试成绩：
               **要求学号、姓名的输入数据格式为："%ld%s"
               **要求考试成绩的输入数据格式为："%f"
               **提示信息为："Input student's ID, name and score:\n"

输出格式：
计算每门课程的总分和平均分：
              **要求输出总分与平均分格式为："course %d:sum=%.0f,aver=%.0f\n"
计算每个学生的总分和平均分：
              **要求输出总分与平均分格式为："student %d: sum=%.0f,aver=%.0f\n"
按成绩由高到低排出名次表：
              **要求学号、姓名的输出格式为："%ld\t%s\t"
              **要求成绩的输出格式为："%.0f\t"
              **要求总分及平均分的输出格式为："%.0f\t%.0f\n"
              **提示信息为："Sort in descending order by score:\n"
按成绩由低到高排出名次表:
              **要求学号、姓名的输出格式为："%ld\t%s\t"
              **要求成绩的输出格式为："%.0f\t"
              **要求总分及平均分的输出格式为："%.0f\t%.0f\n"
              **提示信息为："Sort in ascending order by score:\n"
按学号由小到大排出成绩表：
              **要求学号、姓名的输出格式为："%ld\t%s\t"
              **要求成绩的输出格式为："%.0f\t"
              **要求总分及平均分的输出格式为："%.0f\t%.0f\n"
              **提示信息为："Sort in ascending order by number:\n"
按姓名的字典顺序排出成绩表
              **要求学号、姓名的输出格式为："%ld\t%s\t"
              **要求成绩的输出格式为："%.0f\t"
              **要求总分及平均分的输出格式为："%.0f\t%.0f\n"
              **提示信息为："Sort in dictionary order by name:\n"
按学号查询学生排名及其考试成绩：
               **如果未查到此学号的学生，提示信息为："Not found!\n"；
               **如果查询到该学生
                   # 要求学号、姓名的输出格式为："%ld\t%s\t"
                   # 要求成绩的输出格式为："%.0f\t"
                   # 要求总分及平均分的输出格式为："%.0f\t%.0f\n"
               **提示信息为："Input the number you want to search:\n"
按姓名查询学生排名及其考试成绩；
               **如果未查到此学号的学生，提示信息为："Not found!\n"；
               **如果查询到该学生
                   # 要求学号、姓名的输出格式为："%ld\t%s\t"
                   # 要求成绩的输出格式为："%.0f\t"
                   # 要求总分及平均分的输出格式为："%.0f\t%.0f\n"
               **提示信息为："Input the name you want to search:\n"
按优秀（90~100）、良好（80~89）、中等（70~79）、及格（60~69）、不及格（0~59）5个类别，统计每个类别的人数以及所占的百分比：
                **成绩<60输出提示格式为："<60\t%d\t%.2f%%\n"；
                **成绩=100输出格式为："%d\t%d\t%.2f%%\n"；
                **其他要求输出百分比格式为："%d-%d\t%d\t%.2f%%\n"
                **提示信息为： "For course %d:\n"
输出每个学生的学号、姓名、考试成绩，以及课程总分和平均分
              **要求学号、姓名的输出格式为："%ld\t%s\t"
              **要求成绩的输出格式为："%.0f\t"
              **要求总分及平均分的输出格式为："%.0f\t%.0f\n"
选择退出（菜单项0）
                **提示信息："End of program!"
菜单项选择错误（不在0-11之间）
                **提示信息："Input error!\n"
*/
/*从键盘任意输入一个数n（0<n<=10），编程计算并输出S=1!+2!+...+n!的末6位数字（不含前导0）。若S超过6位数字，则只输出其末6位数字。若S不足6位数字，则直接输出S，不输出前导0，不输出前导0的含义是，如果末6位为001234，则只输出1234即可。如果输入的n不在1到10之间，则输出“Input error!”。
请安如下函数原型编写程序：
//函数功能：计算1!+2!+...+n!的末6位数
int Func(int n);
输入数据提示信息："Input n:"
输入数据格式："%d"
输出数据格式："%d"
输入数据不在合法范围时，输出"Input error!\n"
程序运行示例1：
Input n:5↙
153
程序运行示例2：
Input n:10↙
3791*/
/*马克思手稿中有一道趣味数学题：有30个人，其中可能有男人、女人和小孩，在一家饭馆里吃饭共花了50先令，每个男人各花3先令，每个女人各花2先令，每个小孩各花1先令，问男人、女人和小孩各有几人？
假设男人为x人，女人为y人，小孩为z人，则有以下方程组：
{x+y+z=30
3x+2y+z=50*//*
#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Man \t Women \t Childern\n");
    for (x=1; x<=16; x++)
        for (y=1; y<=25; y++)
        {
            z = 30-x - y;
            if (3 * x + 2 * y + z ==50)
                printf("%3d\t %5d\t %8d\n",x,y,z);
        }
}
*/
/*输入两点坐标(x1,y1),(x2,y2),并用函数计算两点间的距离。
要求可以输入多组数据，每组数据占一行；
Input:x1 y1 x2 y2
输入提示："输入你要输入的数据组数n=" "Input:\n"
输出提示："Input:\n" "%.2f\n"
例：
输入你要输入的数据组数n= 2
Input: 0 0 0 1
       1 0 0 1
Ouput: 1.00
       1.41*/

/*


#include<stdio.h>
#include<math.h>
int main()
{  int i,n;
     float a[10][10];
  printf("输入你要输入的数据组数n=");
  scanf("%d",&n);
  printf("Input: ");
  for(i=0;i<n;i++)
  {    if(i!=0)  printf("       ");
      scanf("%f%f%f%f",&a[i][0],&a[i][1],&a[i][2],&a[i][3]);
      a[i][4]=sqrt(pow(a[i][0]-a[i][2],2)+pow(a[i][1]-a[i][3],2));
  }
  printf("Ouput: ");
   for(i=0;i<n;i++)
  {    if(i!=0)  printf("       ");
      printf("%.2f\n",a[i][4]);

  }
}
*/

/*建立一个链表，使链表中从头到尾的结点数据域依次是一个数组的各个元素的值。程序先建立链表然后再遍历输出（假定链表和数组均有6个整型元素）。

**输入提示："输入数组%d个元素的值。\n"
**输入格式："%d"
**输出格式："%d "



程序运行示例如下：
输入数组6个元素的值。↙
1 3 5 7 9 11↙
此链表各个结点的数据域为：1 3 5 7 9 11
#include<stdio.h>
int main()
{
    struct xx {
    int num;
    struct xx*next;
    };
      struct xx a1 ,a2,a3,a4,a5,a6,*head,*p;
      int i,a[6];
      printf("输入数组6个元素的值。\n");
      for(i=0;i<6;i++)
      {
          scanf("%d",&a[i]);
      }
      a1.num=a[0];
      a2.num=a[1];
      a3.num=a[2];
      a4.num=a[3];a5.num=a[4];a6.num=a[5];
      head=&a1;
      a1.next=&a2;
      a2.next=&a3;
      a3.next=&a4;
      a4.next=&a5;
      a5.next=&a6;
      a6.next=NULL;
      p=head;
      printf("此链表各个结点的数据域为：");
      do{
        printf("%d ",p->num);
        p=p->next;
      }while(p!=NULL);
}
*//*
已知今年的工业产值为100万元，产值增长率为从键盘输入，请编程计算工业产值过多少年可实现翻一番（即增加一倍）。
参考答案：用符号常量CURRENT表示今年的工业产值为100万元，用变量growRate表示产值增长率，用变量year表示产值翻番所需的年数，则计算年产值增长额的计算公式为：
output  = output * (1 + growRate)
利用迭代法循环计算，直到output >= 2*CURRENT时为止。当output >= 2*CURRENT时，表示已实现产值翻番。此时，循环被执行的次数year即为产值翻番所需的年数。
**输入格式要求："%lf" 提示信息："Input grow rate:"
**输出格式要求："When grow rate is %.0f%%, the output can be doubled after %d years.\n"
程序运行示例如下：
Input grow rate:0.08
When grow rate is 8%, the output can be doubled after 10 years.*/
//按如下函数原型用函数编程解决如下的日期转换问题（要求考虑闰年的问题）：
/* 函数功能：  对给定的某年某月某日，计算它是这一年的第几天
函数参数：  整型变量year、month、day，分别代表年、月、日
函数返回值：这一年的第几天 */
//int  DayofYear(int year, int month, int day);
/* 函数功能：    对给定的某一年的第几天，计算它是这一年的第几月第几日
函数入口参数：整型变量year，存储年
                 整型变量yearDay，存储这一年的第几天
函数出口参数：整型指针pMonth，指向存储这一年第几月的整型变量
                 整型指针pDay，指向存储第几日的整型变量
函数返回值：  无 */
/*void  MonthDay(int year, int yearDay, int *pMonth, int *pDay);
输出如下菜单，用switch语句实现根据用户输入的选择执行相应的操作。
1. year/month/day -> yearDay
2. yearDay -> year/month/day
3. Exit
Please enter your choice:
输入提示信息：
"Please enter year, month, day:"
"Please enter year, yearDay:"
输入格式：
"%d,%d,%d"
"%d,%d"
输出提示信息和格式：
"yearDay = %d\n"
"month = %d, day = %d\n"\*/

/*
#include<stdio.h>

struct date_rec
  {
    int day ;
    int month ;
    int year ;
  } ;
  struct date_rec current_date ;
  int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
void fuc1()
{ int i;
   int sum=0;

  printf("Please enter year, month, day:");
  scanf("%d,%d,%d",&current_date.year,&current_date.month,&current_date.day);

  if(((current_date.year%4==0&&current_date.year%100!=0)||current_date.year%400==0)&&current_date.month>=3)//闰年
   sum+=1;
  for(i=0;i<current_date.month-1;i++)
  {
      sum+=a[i];
  }
  sum+=current_date.day;
  printf("yearDay = %d\n",sum);
}
void fuc2()
{   int sum=0,i;
      printf("Please enter year, yearDay:");
      scanf("%d,%d",&current_date.year,&sum);
    if(((current_date.year%4==0&&current_date.year%100!=0)||current_date.year%400==0))
    a[1]+=1;
    for(i=0;sum>a[i];i++)
    {
        sum-=a[i];
    }

    current_date.day=i;
    printf("month = %d, day = %d\n",i+1,sum);
}



int main()
{
    int c;
    printf("1. year/month/day -> yearDay\n2. yearDay -> year/month/day\n3. Exit\nPlease enter your choice:");
    scanf("%d",&c);
    switch(c)
    {
        case 1: fuc1();break;
        case 2: fuc2();break;
        default:break;
    }
}
*/
/*提交
  此题重复我要跳过（04:35)  此题暂时不会以后再做（04:35)
延长答题时间
 某班期末考试科目为数学（MT）、英语（EN）和物理（PH），有最多不超过40人参加考试。请编程计算：（1）每个学生的总分和平均分；（2）每门课程的总分和平均分。
**输入格式要求："%d" "%ld"(学号) 提示信息："Input the total number of the students(n<40):" "Input student’s ID and score as: MT  EN  PH:\n"
**输出格式要求："Counting Result:\n" "Student’s ID\t  MT \t  EN \t  PH \t SUM \t AVER\n" "%12ld\t"(打印学号) "%4d\t"（打印每门课成绩）"%4d\t%5.1f\n"（打印总分和平均分） "SumofCourse \t" "%4d\t"(打印每门课的总分) "\nAverofCourse\t" "%4.1f\t"(每门课的平均分)
程序的运行示例如下：
Input the total number of the students(n<=40):4
Input student’s ID and score as: MT  EN  PH:
070310122  97  87  92
070310123  92  91  90
070310124  90  81  82
070310125  73  65  80
Counting Result:
Student’s ID    MT	EN	PH	SUM	AVER
070310122	97	87	92	276	92.0
070310123	92	91	90	273	91.0
070310124	90	81	82	253	84.3
070310125	73	65	80	218	72.7
SumofCourse	352	324	344
AverofCourse	88.0	81.0	86.0
#include<stdio.h>
struct student{
long int id;
int math;
int en;
int ph;
int sum;
float aver;
};
struct student  stu[40];
int n;
int sum_of_sub[3]={0};
void inppp()
{   int i;
printf("Input student’s ID and score as: MT  EN  PH:\n");
    for(i=0;i<n;i++)
    {
        scanf("%ld%d%d%d",&stu[i].id,&stu[i].math,&stu[i].en,&stu[i].ph);
        stu[i].sum=stu[i].math+stu[i].en+stu[i].ph;
        stu[i].aver=(float)stu[i].sum/3;
            sum_of_sub[0]+=stu[i].math;
             sum_of_sub[1]+=stu[i].en;
              sum_of_sub[2]+=stu[i].ph;
    }
}

void outpp()
{  int i;
    printf("Counting Result:\nStudent’s ID\t  MT \t  EN \t  PH \t SUM \t AVER\n");
    for(i=0;i<n;i++)
    {
        printf("%12ld\t%4d\t%4d\t%4d\t%4d\t%5.1f\n",stu[i].id,stu[i].math,stu[i].en,stu[i].ph,stu[i].sum,stu[i].aver);


    }
    printf( "SumofCourse \t" );
    for(i=0;i<3;i++)
        printf("%4d\t",sum_of_sub[i]);
    printf( "\nAverofCourse\t");
       for(i=0;i<3;i++)
           printf("%4.1f\t",(float)sum_of_sub[i]/n);

}
int main()
{
    printf("Input the total number of the students(n<40):");
    scanf("%d",&n);
    inppp();
    outpp();



}
*/
/*
#include <stdio.h>
#include<math.h>
main()
{
  int m,i,n[100],count=0;
  float k;

  for(m=101;m<=200;m++)
  {

      k=sqrt(m);
      for(i= 2;i<=k;i++)
         if(m%i==0)
             break;
      if(m%i!=0)
      { n[count]=m;
          count++;


      }

  }
  for(i=0;i<count;i++)
  { if(i%10==0)
  printf("\n");
  printf("%d ",n[i]);


  }
}

回文素数
所谓回文素数是指对一个素数n，从左到右和从右到左读是相同的，这样的数就称为回文素数，例如11，101，313等。编程计算并输出不超过n（100<=n<1000）的回文素数，并统计这些回文素数的个数，其中n的值从键盘输入。

程序运行示例1
Input n:
100↙
  11
count=1

程序运行示例2
Input n:
1000↙
  11 101 131 151 181 191 313 353 373 383 727 757 787 797 919 929
count=16

输入格式:"%d"
输出格式：
输入提示信息："Input n:\n"
输出格式："%4d"
          "\ncount=%d\n"



          */

/*写一个程序，将接收的摄氏温度转换为对应的华氏温度。程序应显示如下的提示信息：
       Please input cels:
然后输入一个十进制数并回车，然后程序以合适的消息形式输出转换后的华氏温度。
程序使用如下的公式完成转换：华氏温度=摄氏温度*9.0/5.0+32.0
**输入格式要求："%lf" 提示信息："Please input cels: "
**输出格式要求："The fahr is: %.2f"

程序运行结果示例：
Please input cels: 32
The fahr is: 89.60

*//*
#include<stdio.h>
int main()
{
    double t;
    printf("Please input cels: ");
    scanf("%lf",&t);
    printf("The fahr is: %.2f",t*9/5+32);
}*/
/*写一个程序从键盘输入两个整数，然后显示第1个整数占第二个整数的百分比，保留到小数点后1位。例如输入5和40，程序输出结果如下：
   5 is 12.5 percent of 40

**输入格式要求："%d%d" 提示信息："请输入两个整数："
**输出格式要求："%d is %.1f percent of %d"*/
/*

#include<stdio.h>
int main()
{
    int a ,b;
    printf("请输入两个整数：");
    scanf("%d%d",&a,&b);
    printf("%d is %.1f percent of %d",a,((float)a/b)*100,b);
}

*//*13个人围成一圈，从第1个人开始顺序报号1、2、3，凡报到3的人退出圈子。找出最后留在圈子里的人原来的序号。要求用结构体编程实现。
程序的运行示例如下：
出圈成员及顺序：  3  6  9 12  2  7 11  4 10  5  1  8
最后的成员是： 13
*/
/*
#include<stdio.h>
int main()
{    int count=0;
int t;
    struct people{
    int ix;
    int se;
    int nn;

    };
    struct people p[13];
    int i,j;
    for(i=0;i<13;i++)
    {p[i].se=1;
    p[i].ix=i+1;}


     printf("出圈成员及顺序：");
    for(i=0;count!=12;i++)
    {
        for(j=0;j<13;j++)
        {  t=(t+j)%13;
            if(p[t].se==1)
            {
              p[t].nn=(i%3)+1;
              if(p[t].nn%3==0)
       {

           p[t].se=0;
           printf("%4d",p[t].ix);
           count++;

       }

              break;
            }

        }



    }
    printf("\n最后的成员是： ");
    for(i=0;i<13;i++)
    {
        if(p[i].se==1)
        {
            printf("%d",p[i].ix);
            break;
        }

    }

}
*/

/*
#include<stdio.h>
#include<string.h>
void insert(char*a,char  b,int c)
{
    int m=strlen(a),i;
    for(i=m;i>=c-1;i--)
    {
        a[i+1]=a[i];

    }
    a[c-1]=b;
    printf("%s",a);
}
void delet(char*a,char ,)



int main()
{   char a[100],b;
int c;
    printf("input the string:");
    gets(a);
    printf("the char :");
    scanf("%c",&b);
    printf("the pos :");
    scanf("%d",&c);

    insert(a,b,c);




}
*/

/*
#include<stdio.h>
#include<string.h>
static int N ;
static int M;
struct people {
    long int id;
    float score[6];
    char name[10];
    float aver;
    float sum;
}stu[30];

float score[30],iniscore[30];
long int id[30],iniid[30];
int menu(void)
{   int choice;
    printf("Management for Students' scores\
\n1.Input record\
\n2.Caculate total and average score of every course\
\n3.Caculate total and average score of every student\
\n4.Sort in descending order by score\
\n5.Sort in ascending order by score\
\n6.Sort in ascending order by number\
\n7.Sort in dictionary order by name\
\n8.Search by number\
\n9.Search by name\
\n10.Statistic analysis\
\n11.List record\
\n0.Exit\n\
Please Input your choice:\n");
scanf("%d",&choice);
    return choice;


}
void fuc1(void)
{  int i,j;
printf("Input course number(m<=6):\n");
scanf("%d",&M);
printf("Input student's ID and score:\n");
   for(i=0;i<N;i++)
   {
       scanf("%ld",&stu[i].id);
       getchar();
      gets(stu[i].name);

       for(j=0;j<M;j++)
       scanf("%f",&stu[i].score[j]);

   }

}
void fuc2(void)
{  int i,j;
float sum[6]={0};
    for(j=0;j<M;j++)
    {for(i=0;i<N;i++)
    {
      sum[j]+=stu[i].score[j];
    }}
   for(i=0;i<M;i++)
   printf("course %d:sum=%.0f,aver=%.0f\n",i+1,sum[i],sum[i]/N);
}

void fuceverystudent()
{  int i,j;
   for(i=0;i<N;i++)
   {  for(j=0;j<M;j++)
       stu[i].sum+=stu[i].score[j];


      stu[i].aver=stu[i].sum/M;

      printf("student %d: sum=%.0f,aver=%.0f\n",i+1,stu[i].sum,stu[i].aver);

   }

}
void fuc4(void)
{  int i,j;
    struct people temp;
    for(i=0;i<N-1;i++)

        for(j=0;j<N-1-i;j++)
        {
            if(stu[j].sum>stu[j+1].sum)
              {
                  temp=stu[j];
                  stu[j]=stu[j+1];
                  stu[j+1]=temp;

              }
        }


     printf("Sort in ascending order by score:\n");
   for(i=0;i<N;i++)
   {
    printf("%ld\t%s\t%.0f\t%.0f\t%.0f\t%.0f\t%.0f\n",stu[i].id,stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].sum,stu[i].aver);
   }
}
void fuc3(void)

{  int i,j;
    struct people temp;
    for(i=0;i<N-1;i++)

        for(j=0;j<N-1-i;j++)
        {
            if(stu[j].sum<stu[j+1].sum)
              {
                  temp=stu[j];
                  stu[j]=stu[j+1];
                  stu[j+1]=temp;

              }
        }


     printf("Sort in descending order by score:\n");
   for(i=0;i<N;i++)
   {
    printf("%ld\t%s\t",stu[i].id,stu[i].name);
    for(j=0;j<M;j++)
    {
        printf("%.0f\t",stu[i].score[j]);
    }
    printf("%.0f\t%.0f\n"    ,stu[i].sum,stu[i].aver);





   }
}
void fuc5(void)
{  int i,j;
struct people temp;
    for(i=0;i<N-1;i++)

        for(j=0;j<N-1-i;j++)
        {
            if(stu[j].id>stu[j+1].id)
              {
                  temp=stu[j];
                  stu[j]=stu[j+1];
                  stu[j+1]=temp;

              }
        }
   for(i=0;i<N;i++)
   {
    printf("%ld\t%s\t",stu[i].id,stu[i].name);
    for(j=0;j<M;j++)
    {
        printf("%.0f\t",stu[i].score[j]);
    }
    printf("%.0f\t%.0f\n"    ,stu[i].sum,stu[i].aver);





   }
}

void fucdictonorder(void)
{  int i,j;
struct people temp;
    for(i=0;i<N-1;i++)

        for(j=0;j<N-1-i;j++)
        {
            if  (strcmp(stu[j].name,stu[j+1].name)>0)
              {
                  temp=stu[j];
                  stu[j]=stu[j+1];
                  stu[j+1]=temp;

              }
        }
   for(i=0;i<N;i++)
   {
    printf("%ld\t%s\t",stu[i].id,stu[i].name);
    for(j=0;j<M;j++)
    {
        printf("%.0f\t",stu[i].score[j]);
    }
    printf("%.0f\t%.0f\n"    ,stu[i].sum,stu[i].aver);
   }
}


void fuc6()
{int i,j,st=0;
long int c;
printf("Input the number you want to search:\n");
scanf("%ld",&c);
for(i=0;i<N;i++)
        {
            if(c==stu[i].id)


    {printf("%ld\t%s\t",stu[i].id,stu[i].name);
    for(j=0;j<M;j++)
    {
        printf("%.0f\t",stu[i].score[j]);
    }
    printf("%.0f\t%.0f\n",stu[i].sum,stu[i].aver);
    st=1;
    break;
            }}


   if(st==0) printf("Not found!\n");
}
void fucserchbyname()
{int i,j,st=0;
char c[10];
printf("Input the name you want to search:\n");
getchar();
gets(c);

for(i=0;i<N;i++)
{if(strcmp(c,stu[i].name)==0)
{
printf("%ld\t%s\t",stu[i].id,stu[i].name);
for(j=0;j<M;j++)
{
    printf("%.0f\t",stu[i].score[j]);
}
printf("%.0f\t%.0f\n",stu[i].sum,stu[i].aver);
st=1;
break;
}}

if(st==0) printf("Not found!\n");
}
void fuc7()
{ int j,b[6][7]={0},i;
for(j=0;j<M;j++)
{for(i=0;i<N;i++)

{
    switch((int)stu[i].score[j]/10)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:b[j][0]++;break;
        case 6:b[j][1]++;break;
         case 7:b[j][2]++;break;
        case 8:b[j][3]++;break;
        case 9:b[j][4]++;break;
        case 10:b[j][5]++;break;

    }
}
printf("For course %d:\n",j+1);
printf("<60\t%d\t%.2f%%\n",b[j][0],((float)b[j][0]/N)*100);
printf("60-69\t%d\t%.2f%%\n",b[j][1],((float)b[j][1]/N)*100);
printf("70-79\t%d\t%.2f%%\n",b[j][2],((float)b[j][2]/N)*100);
printf("80-89\t%d\t%.2f%%\n",b[j][3],((float)b[j][3]/N)*100);
printf("90-99\t%d\t%.2f%%\n",b[j][4],((float)b[j][4]/N)*100);
printf("100\t%d\t%.2f%%\n",b[j][5],((float)b[j][5]/N)*100);}
}
void fuc888(void)
{ int i,j;
    for(i=0;i<N;i++)
    {printf("%ld\t%s\t",stu[i].id,stu[i].name);
    for(j=0;j<M;j++)
    {
        printf("%.0f\t",stu[i].score[j]);
    }
    printf("%.0f\t%.0f\n"    ,stu[i].sum,stu[i].aver);}

}


int main()
{

            int choice;
               printf("Input student number(n<30):\n");
               scanf("%d",&N);

                            for(;;)
                               {choice=menu();
                                switch(choice)
                                {
                                    case 1 :{fuc1();continue;}
                                    case 2 :{fuc2();continue;}
                                    case 3 :{fuceverystudent();continue;}
                                    case 4 :{fuc3();continue;}
                                    case 5 :{fuc4();continue;}
                                    case 6 :{fuc5();continue;}
                                    case 7 :{fucdictonorder();continue;}
                                    case 8 :{fuc6();continue;}
                                    case 9 :{fucserchbyname();continue;}
                                    case 10 :{fuc7();continue;}
                                    case 11 :{fuc888();continue;}
                                case 0:{printf("End of program!");break;}
                                    default :{printf("Input error!\n");continue;}
                                }
                                if(choice==0) break;
                            }
                return 0;

}*/


/*
#include<stdio.h>


int yinshuhe(int x)
{
    int sum=0,i;
    for(i=1;i<x;i++)
    {
        if(x%i==0)
            sum+=i;
    }
    return sum;
}
void fuckitup(int x)
{printf("相亲数：%d,%d\n",x,yinshuhe(x));
printf("%d 的真因数之和为：\n",x);


}



int main()
{
    int i;
    for(i=1;i<=9999;i++)
    {
        if(i==yinshuhe(yinshuhe(i)))
          fuckitup(i);
    }
}
*//*
#include<stdio.h>
int main()
{ float t;
    printf("Please input cels: ");
    scanf("%f",&t);
    printf("The fahr is: %.2f",9*t/5+32);
}
*//*
按如下公式递归计算矩阵行列式的值：



**输入格式要求："%d" "%lf"

提示信息："Please enter matrix size n(1<=n<20):"  "Please input matrix line by line:\n"  "matrix a:\n"
**输出格式要求："Submatrix:\n"  "DValue of the Submatrix is %6.1f\n"  "%6.1f\t"  "result = %f\n"

程序运行结果如下：

Please enter matrix size n(1<=n<20):3< span="">
Please input matrix line by line:

1 2 3
4 5 7
8 9 11
matrix a:
   1.0     2.0     3.0
   4.0     5.0     7.0
   8.0     9.0    11.0

Submatrix:
   5.0     7.0
   9.0    11.0
DValue of the Submatrix is   -8.0
Submatrix:
   4.0     7.0
   8.0    11.0
DValue of the Submatrix is  -12.0
Submatrix:
   4.0     5.0
   8.0     9.0
DValue of the Submatrix is   -4.0
result = 4.000000

 *//*
 #include<stdio.h>
#define pi 3.14
int main()
{float r;
printf("请输入半径的值：");
scanf("%f",&r);
printf("半径为%5.2f的圆的面积为%5.1f,圆的周长为%5.1f\n" ,r,pi*r*r,2*pi*r);}**/
/*
//http://172.20.2.51.cqu.pt/train/q.aspx?session_id=404afdede6694f219e2b143e8e930f26&auth_id=bbf3076d8ea5436db522d5c2327251ab
#include <stdio.h>

main()
{ int n;
   printf( "Please input your age: ");
scanf("%d",&n);
printf("The heart beats in your life: %d",75*n*60*24*365);
}*/
/*#include <stdio.h>

int main()
{ double sum=1;
int i, n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sum*=i;
}


printf("%.0lf\n",sum);
return 0;
}*/
/*
#include<stdio.h>
#include<stdlib.h>
void print_column(int(*a)[n],x)
{  int i;
    for(i=0;i<;i++)
}
int main()
{  int m,n,i,j;
    scanf("%d%d",&,m,&n);


  return 0;
}
*//*
#include<stdio.h>
int main()
{
    int i,j ,minp=0,temp,a[10]={9,8,7,6,4,5,3,2,1,-11};
    for(i=0;i<9;i++)
    {
        minp=i;

       for(j=i;j<9;j++)
    {
        if(a[j]<a[minp])
        minp=j;

    }
    temp=a[i];
    a[i]=a[minp];
    a[minp]=temp;
    }
    for(i=0;i<10;i++)
        printf("% d",a[i]);
}*/



/*
 #include<stdio.h>

 int IsPerfect(int x)
 {
     int i,sum=0,t=0;
     for(i=1;i<x;i++)
     {
         if(x%i==0)
            sum+=i;

     }
     if(x==sum)
        t++;
     return t;
 }
main()
{ int x;
    printf("Input m:\n");
    scanf("%d",&x);
    if(IsPerfect(x)==1)
        printf("%d is a perfect number\n",x);
    else
        printf("%d is not a perfect number\n",x);


}
*/

/*

#include<stdio.h>

int Fib(int x)
{

    if(x==1||x==2)
        return 1;
    else return Fib(x-1)+Fib(x-2);

}
int count(int x)
{
     if(x==1)
        return 1;
        else if(x==2)
            return 3;
    else return count(x-1)+count(x-2)+1;

}
int main()
{
    int x,i,q;
    printf("Input n:");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {  q=Fib(i);
        printf("Fib(%d)=%d, count=%d\n",i,q,count(i));
    }

}
*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int i,RB[10]={0},count=0,k,j,temp;
srand(time(NULL));
for(;count<6;)
{
    k=rand()%33+1;
    for(i=0;i<count+1;i++)
    {
        if(*(RB+i)==k)
            break;
        else if(*(RB+i)==0)
        {
          *(RB+i)=k;
          printf("红球%d；%d\n",i+1,k);
          count++;
          break;
        }
    }
}

printf("蓝球%d；%d\n",1,rand()%16+1);
printf("红球顺序排序\n");
for(i=0;i<5;i++)
   for(j=0;j<5-i;j++)
{
    if(*(RB+j)>*(RB+j+1))
       {
      temp=*(RB+j);
         *(RB+j)=*(RB+j+1);
         *(RB+j+1)=temp; }
}
for(i=0;i<6;i++)
    printf("%d\t",*(RB+i));
}
*//*
#include<stdio.h>
int main()
{   int*p,*x,*y,a=3,b=4,c;
    x=&a;
    y=&b;
    p=&c;
    *p=*x;
    *x=*y;
    *y=*p;
    printf("%d,%d",*x,*y);

}

*/

#include<stdio.h>
int main()
{    int x=11;
    printf("%d",(x++*1/3));

}








/*#include<iostream>
#include<queue>
#include<cstdio>

using namespace std;
int main()
{
   priority_queue<int> ppp;
   ppp.push(9);
   ppp.push(2);
   ppp.push(2);
   ppp.push(4);
   ppp.push(8);
   while(!ppp.empty())
   {
       printf("%d\n",ppp.top());
        ppp.pop();
   }
   printf("\n");

}
*/
//录脝脣茫100拢隆
/*#include<stdio.h>
#define N 10000
int main()
{   int m;
    scanf("%d",&m);
    int a[N]={0},i,j,jw,s;
    a[0]=1;

    for(i=2;i<=m;i++)
    {
        jw=0;
        for(j=0;j<N;j++)
        {
           s=a[j]*i+jw;
           jw=s/10;
           a[j]=s%10;

        }}
        for(i=N-1;i>=0;i--)
        {
            if(a[i]!=0) break;
        }
        for(j=i;j>=0;j--)
        {
            printf("%d",a[j]);
        }


}*//*
#include<stdio.h>
#include<string.h>

int main()
 {
    char a[10]={'\0'} , b[]="hello";

       printf("%s",strcat(a,b));

 }
*//*
#include<stdio.h>
 #include<stdlib.h>

 typedef struct ListNode {
      int val;
      struct ListNode *next;
  }node;


int chain_to_num(node* n )
{  int sum=0;

    for(;n!=NULL;){
            printf("%d",n->val);
        sum*=10;
        sum+=n->val;
        n=n->next;

    }
 return sum;
}


int main()
{
    node*n1,*n2,*n3;
    n1=(node*)malloc(sizeof(node));
    n2=(node*)malloc(sizeof(node));
    n3=(node*)malloc(sizeof(node));
    n1->val=1;

    n1->next=n2;
    n2->val=2;
    n2->next=n3;
    n3->val=3;
    n3->next=NULL;
    printf("%d",chain_to_num(n1));




}
*//*
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int a;
    struct node *next;
} node;




void  print_list(node*L)
{
    node*p=L;
   while(p->next!=NULL)
   {    p=p->next;
       printf("%d\n",p->a);

   }
}
void add_to_list(){



    for(len=0;scanf("%d",&e)!=0;len++)
    {

        node* s;
    s=(node*)malloc(sizeof(node));
    s->a=e;
    s->next=p->next;
    p->next=s;
    p=p->next;}

    print_list(L);
    }

int main()
{
add_to_list();
}
*//*
  #include<stdio.h>
#include<string.h>
#define maxnum 1000
#define maxpic 25

int a[maxnum][maxpic],
b[maxnum][maxnum];

int compare(int * stu1,int * stu2,int M)//瀹屽叏鐩稿弽鍒欒繑鍥?1
{
   int i;
   for(i=0;i<M;i++)
   {
       if(*(stu1+i)!=!*(stu2+i))
        return 0;
   }
   return 1;
}
int main()
{
    int m ,n,i,j,k,sum=0;
    memset(b,-1,sizeof(b));
    scanf("%d%d",&n,&m);
    for(i=0;i<m*n;i++)
    {
        scanf("%d",*(a+i/m)+i%m);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i][j]==-1)
            b[i][j]=compare(*(a+i),*(a+j),m);
            if(b[i][j]==1)
            {  sum++;
                for(k=i+1;k<j;k++)
                {
                    b[k][j]=!b[i][k];
                }
            } }

    }
    printf("%d",sum);

}
*///鎶ユ椂
/*

#include<stdio.h>
char a[60][20]={"zero", " one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty","thirty","forty","fifty"};
int main()
{
    int hour, minu;
    for(;;)
    {scanf("%d%d",&hour,&minu);
    if(hour<=20)
        printf("%s ",a[hour]);
    else printf("%s %s ",a[hour/10+18],a[hour%10]);
    if(minu==0)
        printf("o'clock");
    else if(minu<=20&&minu!=0)
        printf("%s ",a[minu]);
    else printf("%s %s ",a[minu/10+18],a[minu%10]);

    }
}
*//*
#include<iostream>
using namespace std;
vector<int> b[3]
int main()
{  int a=6;
    cout<<a<<endl;
}
*//*
#include <stdio.h>
#include <string.h>

int main ()
{
   int a=1,b=1,c;
  while(getchar()!=EOF)
  {
      printf("in\n");
  }



   return(0);
}
*//*
#include<stdio.h>
#include<string.h>
int strStr(char* haystack, char* needle) {
    int n1=strlen(haystack),n2=strlen(needle),i,j,ok;
    for(i=0;i<=n1-n2;i++)
    {
        if(*(haystack+i)==*(needle))
        {    ok=1;
            for(j=1;j<n2;j++)
            {
                if(*(haystack+i+j)!=*(needle+j))
                { ok=!ok;
                break;}
                }
            if(ok) return i;

        }

    }
    return -1;

}
int main()
{
    char*a,*b;
    gets(a);
    getchar();
     gets(b) ;
     printf("%d",strStr(a,b));

}
*//*
#include<cstdio>
#include<cstring>
#include<iostream>
#define maxnum 100

int romanToInt(char* s) {
    int n=strlen(s)  ,sum=0,i ,a[maxnum] ;
 for(i=0;i<n;i++)
 {
     if(*(s+i)=='I') a[i]=1;
     else if(*(s+i)=='V') a[i]=5;
     else if(*(s+i)=='X') a[i]=10;
     else if(*(s+i)=='L') a[i]=50;
     else if(*(s+i)=='C') a[i]=100;
     else if(*(s+i)=='D') a[i]=500;
     else if(*(s+i)=='M') a[i]=1000;

 }
    for(i=0;i<n-1;i++)
    {if(a[i]<a[i+1])
        sum-=a[i];
     else sum+=a[i];
    }
    sum+=a[n-1];
    return sum;

}

int main()
{    char s[maxnum];
     for(;;)
     {
        std::cout<<romanToInt(gets(s))<<std::endl;

     }
}*//*
#include<stdio.h>
int main()
{  int a;
    scanf("%d",&a);
    if(!(a%400)||(!(a%4)&&a%100))
       printf("yes");
       else printf("no");
        return 0;
       }
*//*
#include<stdio.h>
int main()
{  int h,m,s,sum;
    scanf("%d",&sum);
    h=sum/3600;
    sum%=3600;
    m=sum/60;
    sum%=60;
    s=sum;
    printf("%d:%d:%d",h,m,s);
    return 0;
}*//*
#include<string.h>
#include<stdio.h>
#define max 20
void tolower(char* s,int n)
{   int i;
     for(i=0;i<n;i++)
     {
         if(*(s+i)>'A'&&*(s+i)<'Z')
            *(s+i)+=32;
     }


}
int main()
{
   char s1[max],s2[max];
   int n1,n2;
   gets(s1);
   gets(s2);
    n1=strlen(s1);
    n2=strlen(s2);
   if(n1!=n2) printf("1\n");
    else if(!strcmp(s1,s2)) printf("2\n");
    else {
    tolower(s1,n1);
    tolower(s2,n2);
    if(!strcmp(s1,s2)) printf("3\n");
      else printf("4\n");
    }
  return 0;
}
*//*
#include<stdio.h>
#include<math.h>
int is_prime(int x)
{
    int i,n;

    if(x<=1){return 0;
}
    else
    {n=floor(sqrt(x)+0.5);
    for(i=2;i<n;i++)
    {
        if(!x%i) return 0;
    }
    }
    return 1;
}

int main()
{
    int n1,n2,i;
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        if()
    }
    int n;
    for(;;)
    {
       scanf("%d",&n);
       printf("%d\n",is_prime(n));
    }
}
*//*
#include<string.h>
#include<stdio.h>
#define maxnum 10000

char* inst[]={"NUM","CHANGE","ADD","SUB","MUL","DIV","MOD","EQUAL","CLEAR"};
//               0      1       2      3     4    5     6      7       8

long long  change_it_dec(long long x,int k)

{
    long  long carry=1,sum=0;
    for(;x!=0;)
    {sum+=(x%10)*carry;
        carry*=k;
        x/=10;


    }
    return sum;

}
long long  change_it_k(long long a,int k)
{
   int i,b[100]={0},n;
   long long c=0;
   for(i=0;a!=0;i++)
   {
       b[i]=a%k;
       a/=k;

   }
   n=i;
   for(i=n;i>=0;i--)
   {
       c*=10;
       c+=b[i];
   }
   return c;
}
int inst_to_num(char* s)
{int i;
for(i=0;i<9;i++)
{
    if(!strcmp(s,inst[i]))
        return i;
}
return 10;
}
int main()
{
    long long now,next;
    int n ,i,ok=0,c,kk=10; //ok 1 + 2 - 3 * 4 / 5%//kk当前进制

    char inst[maxnum];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",inst);
        c=inst_to_num(inst);

        switch(c)
        {
        case 0:
            {



                if(ok)
            {scanf("%lld",&next);
            if(kk!=10)
            {
                next=change_it_dec(next,kk);
            }
            switch(ok)
               {

                   case 2:{now+=next;ok=0;break;}
                   case 3:{now-=next;ok=0;break;}
                   case 4:{now*=next;ok=0;break;}
                   case 5:{now/=next;ok=0;break;}
                   case 6:{now%=next;ok=0;break;}
               }}
                else {scanf("%lld",&now);
                  if(kk!=10)
            {
                now=change_it_dec(now,kk);
            }}

                 break;
            }
       case 1:
        {   scanf("%d",&kk);

            //now=change_it_k(now,k);
        }
         case 2:
         case 3:
         case 4:
         case 5:
         case 6:
            {
                ok=c;
                break;
            }

         case 7:
           {
             now=change_it_k(now,kk);
             printf("%lld",now);
                i=n;
                break;
            }
        case 8:
            {
                next=0;
                now=0;
                ok=0;
                kk=10;
                break;
            }
        default:
            i--;


        }


    }

}
*//*
#include<stdio.h>
#include<string.h>
#define maxnum 1000
#define maxpic 25

int a[maxnum][maxpic],
b[maxnum][maxnum];

int compare(int * stu1,int * stu2,int M)//完全相反则返回1
{
   int i;
   for(i=0;i<M;i++)
   {
       if(*(stu1+i)!=!*(stu2+i))
        return 0;
   }
   return 1;
}
int main()
{
    int m ,n,i,j,k,sum=0;
    memset(b,-1,sizeof(b));
    scanf("%d%d",&n,&m);
    for(i=0;i<m*n;i++)
    {
        scanf("%d",*(a+i/m)+i%m);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i][j]==-1)
            b[i][j]=compare(*(a+i),*(a+j),m);
            if(b[i][j]==1)
            {  sum++;
                for(k=i+1;k<j;k++)
                {
                    b[k][j]=!b[i][k];
                }
            } }

    }
    printf("%d",sum);
   return 0;
}


*//*
#include<stdio.h>
#define maxnum 120
int myStrcmp(char *s1,char *s2)
{
    int i=0;
    for(i=0;*(s1+i)&&*(s2+i);i++)
    {
        if(*(s1+i)<*(s2+i)) return -1;
        else if(*(s1+i)>*(s2+i)) return 1;
    }
    if(!*(s1+i)&&!*(s2+i)) return 0;
    else return  (!*(s1+i)&&*(s2+i))? -1:1;

}
int main()
{
    char s1[maxnum],s2[maxnum];
    gets(s1);
    gets(s2);
    printf("%d\n",myStrcmp(s1,s2));
    return 0;
}
*//*
#include<stdio.h>

char EncryptChar(char x)
{
  if(x>='A'&&x<='Y') return x+1;
  else if(x=='Z') return 'a' ;
  else  if(x>='a'&&x<='y') return x+1;
  else if(x=='z') return 'A';
  else return x;
}
int main()
{int i;
  char a[100];
  gets(a);
  for( i=0;*(a+i);i++)
  {
      a[i]=EncryptChar(a[i]);
  }
printf("%s",a);
return 0;
}
*//*
#include<stdio.h>
int main()
{
    int i,a=1,b=1,temp,n;
    scanf("%d",&n);
    for(i=0;i<n-2;i++)
    {  temp=b;
        b=(a+b)%10007;
        a=temp;

    }
    printf("%d",b);
    return 0;
}*//*
#include<stdio.h>
#define PI 3.14159265358979323
int main()
{
     double r;
    scanf("%lf",&r);
    printf("%.7lf",r*r*PI);

return 0;
}
*//*
#include<stdio.h>

int  main()
{
    long long  n;
    scanf("%lld",&n);
    printf("%lld",(1+n)*n/2);
    return 0;
}
*/
/*
#include<iostream>
#include<cstdio>
#include<algorithm>
#define maxnum 10050
using namespace std;
int a[maxnum];
int main()
{
    int n,i;
    scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   sort(a,a+n);
  for(i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }
   return 0;
}
*//*十六转十
#include<stdio.h>
#define maxnum 100010
#define linemax 210
//char a[linemax][maxnum]
int change_to_d(int x)
{
    int car=1,sum=0;
    for(;x!=0;)
    {


    }
    return sum;
}

int main()
{   char tem[linemax];
    int i,n;
    char
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

    }

    int n;
    for(;;)
    { scanf("%d",&n);

    printf("%d\n",change_to_d(n));



    }
}

*/

/*
//大数乘法
#include<stdio.h>
#define maxnum 40

int main()
{  int i,j,n1=0,n2=0,car=0,now;
char s1[maxnum],s2[maxnum],sum=[maxnum];
   char a;
    for(i=0;(a=getchar())&&a!=' '&&a!='\n';i++)
        s1[i]=a;
  n1=i;
  s1[n1]=0;
    for(i=0;(a=getchar())&&a!=' '&&a!='\n';i++)
        s2[i]=a;
  n2=i;
  s2[n2]=0;
  //puts(s1);
  //puts(s2);
  for(i=n1-1;i>=0;i--)
  {
      for(j=n2-1;j>0;j--)
      {
          now=*(s1+i)**(s2+i)+car;
          *(sum+i+j)=now%10;
          car=now/10;



      }

  }


puts(sum);

}











*/
//动态规划
/*
#include<stdio.h>
#include<string.h>

#include<algorithm>
#define maxnum 110
int a[maxnum][maxnum];
int d[maxnum][maxnum];
int N;
int slove(int i,int j )
{
    if(d[i][j]>=0) return d[i][j];
    else return d[i][j]=a[i][j]+(i==N-1?0:std::max(slove(i+1,j),slove(i+1,j+1)));



}
int main()
{

  memset(a,-1,sizeof(a));
  memset(d,-1,sizeof(d));
    int i,j;
  scanf("%d",&N);
  for(i=0;i<N;i++)
  {

   for(j=0;j<=i;j++)
  {
      scanf("%d",&a[i][j]);
  } }
    printf("%d",slove(0,0));





    return 0;
}






*//*
#include<stdio.h>
#define maxnum 30
int main()
{  int n,m,i,j;
char a[maxnum][maxnum];
scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
      {for(j=1;j<=i+1||j<m;j++)
    {   if(i==j) a[i][j]='A';



        if(i+j<=m) a[i][i+j]='A'+j;
        if(i-j>=1) a[i][i -j]='A'+j;
    }

    }
     for(i=1;i<=n;i++)
      {{for(j=1;j<=m;j++)


      printf("%c",a[i][j]);}
        printf("\n");}
        return 0;
}

*//*
#include<stdio.h>
void add_it(int* a,int n)
{if (n==0) *(a)=!*(a);
else if(*(a+n)) { *(a+n)=0;
            add_it(a,n-1);}
   else *(a+n)=!*(a+n);
}

int main()
{  int a[5]={0,0,0,0,0},j,i;
    for(i=0;i<32;i++)
    {
        for(j=0;j<5;j++)
            printf("%d",a[j]);
            printf("\n");
        add_it(a,4);
    }

    return 0;
}




*/
/*
#include<stdio.h>
int main()
{
    int x,y,z,t;
    scanf("%d%d%d",&x,&y,&z);
    if(y>x) {t=x;x=y;y=t;}
    if(z>y) {t=y;y=z;z=t;}
if(y>x) {t=x;x=y;y=t;}
    printf("%d %d %d",x,y,z);

}
*//*
#include<stdio.h>
#define maxnum 10
int main()

{  int o=0,a=0,b=0,i;
    char s[maxnum];
    gets(s);
    for( i=0;!o;i++)
        {if(*(s+i)=='+') o=1;
           else if(*(s+i)=='-') o=2;
          else if(*(s+i)=='*') o=3;
          else if(*(s+i)=='/') o=4;}

        sscanf(s+i+1,"%d %d",&a,&b);
            switch(o)
            {
                case 1:printf("%d",a+b); break;
                 case 2:printf("%d",a-b) ;break;
                  case 3:printf("%d",a*b) ;break;
                   case 4:printf("%d",a/b) ;break;
            }
            return 0;

}
*//*
#include<stdio.h>
#define maxnum 210
int a[maxnum][maxnum];
int m,n;
void dfs(int i,int j)
{   a[i][j]=0;
   for(int dx=-1;dx<=1;dx++)
        for(int dy=-1;dy<=1;dy++)
   {    int  nx=i+dx;
   int ny =j+dy;
       if(0<=nx&&nx<n&&0<=ny&&ny<n&&a[nx][ny]==1) dfs(nx,ny);
   }
}


int main()
{  int k=0;
   scanf("%d%d",&m,&n);
   for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
   {

       scanf("%d",&a[i][j]);
   }
for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    {
        if(a[i][j]==1) {dfs(i,j);k++;}
    }
    printf("%d",k);
}*/

//10->16
/*
#include<stdio.h>
int main()
{
    int n;
    char str[10];
    scanf("%d",&n);
    sprintf(str,"%x",n);
    for(int i=0;*(str+i);i++)
    {
        if(*(str+i)<='z'&&*(str+i)>='a') *(str+i)=*(str+i)-32;

    }
    puts(str);
}
*//*
#include<stdio.h>
#include<algorithm>
int main()
{
    for(int i=1001;i<=9999;i++)
    {
        if(i/1000==i%10&&((i/100)%10==(i%100)/10)) printf("%d\n",i);
    }

}
*//*
#include<stdio.h>
#include<algorithm>
#define MAXnum 110
int a[MAXnum];
int main()
{
  int n,n1;

   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
     scanf("%d",&a[i]);

   }
   std::sort(a,a+n);
   n1=n;
   for(int i=0;i<n-1;i++)
   {
     if(*(a+i)==*(a+i+1))
     {

      *(a+i)=0;
      n1--;
      }

   }
   printf("%d\n",n1);

     for(int i=0;i<n;i++)
   {
      if(*(a+i)) printf("%d ",*(a+i));
   }
}
*//*
#include<stdio.h>
void fun(int*x,int *y)
{int *c;
printf("%u  %u  ",x,y);
c=x;x=y;y=c;
printf("%u  %u  ",x,y);
}
int main(){
int x=3,y=5,*p=&x,*q=&y;
fun(p,q);printf("%d   %d\n",*p,*q);
fun(&x,&y);printf("%d   %d\n",*p,*q);
fun(&x,&y);printf("%d   %d\n",x,y);}
*//*
#include<stdio.h>

int main()
{
  float a=1.334;
    printf("%d",(int)a);}
*//*
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v;
int main()
{


   v.push_back(1);
   v.push_back(1);
   v.push_back(1);
   v.push_back(1);
   printf("size=%d   tail=%d",v.size(),v.back());
   v.pop_back();
   printf("size=%d   tail=%d",v.size(),v.back());
   if (v.empty()) printf("clear");
}
*/
//http://172.20.2.51.cqu.pt/train/view.aspx?session_id=bc31d5dd29214098afb86aba3bb9d5a2&auth_id=b659d61e0c6045bc915787f43d37f09d
/*
#include<stdio.h>
int main()
{
   int i,sum=0;



for (i=0;i<16;i++)
{

    printf("No.%2d:-----------\n",i);
    switch(i){
    case 0:printf("      |*|*|*| |@|@|@|\n");break;
    case 1:printf("      |*|*| |*|@|@|@|\n");break;
    case 2:printf("      |*|*|@|*| |@|@|\n");break;
    case 3:printf("      |*|*|@|*|@| |@|\n");break;
    case 4:printf("      |*|*|@| |@|*|@|\n");break;
    case 5:printf("      |*| |@|*|@|*|@|\n");break;
    case 6:printf("      | |*|@|*|@|*|@|\n");break;
    case 7:printf("      |@|*| |*|@|*|@|\n");break;
    case 8:printf("      |@|*|@|*| |*|@|\n");break;
    case 9:printf("      |@|*|@|*|@|*| |\n");break;
    case 10:printf("      |@|*|@|*|@| |*|\n");break;
    case 11:printf("      |@|*|@| |@|*|*|\n");break;
    case 12:printf("      |@| |@|*|@|*|*|\n");break;
    case 13:printf("      |@|@| |*|@|*|*|\n");break;
    case 14:printf("      |@|@|@|*| |*|*|\n");break;
   case 15:printf("      |@|@|@| |*|*|*|\n");break;


    }
printf("    -----------\n");
}}
*/


//http://172.20.2.51.cqu.pt/train/q.aspx?session_id=03441c017c0a42249c8f027432b1cab3&auth_id=b659d61e0c6045bc915787f43d37f09d


#include<stdio.h>
int main()
{
    int i,a[12],maxid=0;
    printf("Please input your data:\n");
for (i=0;i<12;i++)
    scanf("%d",a[i]);
for (i=0;i<12;i++)
{
    if(a[i]>a[maxid])
        maxid=i;
}


printf("The maximum is %, which is in row %d, colum %d",a[maxid],maxid/4,maxid%4-1);
}






//http://172.20.2.51.cqu.pt/train/q.aspx?session_id=1d9f86d2701c4920ba961cfd792e1be6&auth_id=bbf3076d8ea5436db522d5c2327251ab
// #include <stdio.h>
 
// main()
// {
//     int a, b, c;
 
//     scanf("%d,%d,%d", &a, &b, &c);
//     if (a == b&&b == c)
//         printf("The three number is equal!!!");
//     else
//         printf("The three number isn't equal!!!");
// }


//http://172.20.2.51.cqu.pt/train/q.aspx?session_id=eb5b9feae41e4839a6b7a2fd4e68d298&auth_id=bbf3076d8ea5436db522d5c2327251ab
#include <stdio.h>

main()
{
    int i;
    char ch;
    float f;
    printf("Please input:\n");
    scanf("%d%c%f", &i, &ch, &f);
    printf("The input integer is : %d \nThe input character is : %c\n", i, ch);
    printf("The input float is : %f", f);
}
//http://172.20.2.51.cqu.pt/train/q.aspx?session_id=446aa1caea8945458c0a80a45c73b917&auth_id=bbf3076d8ea5436db522d5c2327251ab

#include <stdio.h>
#define n 10;
int FindMax(int num[], int n, int *pMaxPos);
main()
{
	int num[n], maxValue, maxPos, minValue, minPos, i;	
	printf("Input %d numbers:\n",&n);
	for (i=0; i<n; i++)
	{
		scanf("%d", &num[i]);                  
	}                        
	maxValue = FindMax(num, n, &maxPos);  
	printf("Max=%d, Position=%d\n",	 maxValue, maxPos);    
}
int FindMax(int num[], int n, int *pMaxPos)  
{
	int i, max = num[0];
	for (i=1; i<n; i++)
	{
		if (num[i] > max)
		{
			max = num[i];
			*pMaxPos = i;
		}
	} 	
	return max;
}


//http://172.20.2.51.cqu.pt/train/q.aspx?session_id=bf3e8ba6790644c5a836ccb73b6b2a14&auth_id=b0bd05184e604d8d83a4b4478be2058e
#include <stdio.h>
void  Squeeze(char *s, char c);
main()
{
    char c, s[80];
    gets(s);

    scanf("%c",&c);
    Squeeze(s,c);
puts(s);
}
void  Squeeze(char *s, char c)
{
    int i,j=0;

    for (i=0; *(s+i)!='\0'; i++)

    {
        if (*(s+i) != c)
        {
            *(s+j) = *(s+i);
            j++;

        }

    }
    *(s+j)= '\0';

}
