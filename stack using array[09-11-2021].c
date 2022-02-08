#include<stdio.h>
int i=0,top,temp,array[5];
void push();
void pop();
void display();
void main()
{
int ch;
while(1) //infinite loop, will end when choice will be 4
{
printf("\n*** Stack Menu ***");
printf("\n\n1.Push 2.pop 3.Display 4.peek 5.Exit");
printf("\n\nEnter your choice(1-5):");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2:pop();
break;
case 3: display();
break;
case 4:peek();
break;
case 5: exit(0);
default: printf("\nWrong Choice!!");
}
}
}
void push()
{
if(top==4)
printf("overflow");
else
{
printf("enter data to insert");
scanf("%d",&temp);
top++;
array[top]=temp;
printf("inserted");
}
}
void pop()
{
if(top==-1)
printf("stack is empty");
else
{
top=top-1;
printf("element is deleted");
}
}
void display()
{

if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nStack is...\n");
for(i=top;i>0;i--)
{
printf("%d\n",array[i]);
}
}
}
void peek()
{
if(top==-1)
printf("stack is empty");
else
{
printf("element is %d",array[top]);
}
}
