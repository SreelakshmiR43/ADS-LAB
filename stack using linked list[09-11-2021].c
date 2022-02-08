#include<stdio.h>
int i=0,top;
struct node
{
int data;
struct node*next;
};top=NULL;
void push();
void pop();
void display();
void main()
{
int ch;
while(1) //infinite loop, will end when choice will be 4
{
printf("\n*** Stack Menu ***");
printf("\n\n1.Push 2.pop 3.Display 4.Exit");
printf("\n\nEnter your choice(1-4):");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2:pop();
break;
case 3: display();
break;
case 4: exit(0);
default: printf("\nWrong Choice!!");
}
}
}
void push()
{
int data;
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&data);
newnode->data=data;
newnode->next=top;
top=newnode;
}
void pop()
{
if(top==NULL)
printf("stack is empty");
else{

struct node* temp=top;
printf("deleted element is %d",temp->data);
top=temp->next;
free(temp);
}

}
void display()
{
struct node*temp;
temp=top;
while(temp->next!=0)
{
printf("%d",temp->data);
temp=temp->next;
}
printf("%d",temp->data);
}
