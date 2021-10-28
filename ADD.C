#include<stdio.h>
#include<conio.h>

void main()
{
   int input1,input2,output1,output2,output3,output4,output5;
   clrscr();
   printf("enter the value input1:");
   scanf("%d%d",&input1,&input2);
   output1=input1+input2;
   printf("sum of value are %d\n",output1);
   output2=input1-input2;
   printf("sum of value are %d\n",output2);
   output3=input1*input2;
   printf("sum of value are %d\n",output3);
   output4=input1/input2;
   printf("sum of value are %d\n",output4);
   output5=input1%input2;
   printf("sum of value are %d\n",output5);
   getch();
}