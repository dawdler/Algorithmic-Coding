#include<stdio.h>
#include<stdlib.h>

struct node {
		int info;
		struct node *next;
}*start=NULL;
void create();
void display();
void insert_after();
void delete();
int main()
{
int choice;
struct node *tmp;

while(1)
{
	printf("1.Insert\n");
	
	printf("2.Display\n");
	
	printf("3.Insert After which node:\n");
	printf("4.Delete\n");
printf("5.Exit\n");

scanf("%d",&choice);
switch(choice) {
	case 1:create();break;
	case 2:display(); break ;	
case 3: insert_after();break;	
case 4:delete(); break;
case 5:exit(0);
}
}
return 0;
}

void create() {
int data;
struct node *p,*temp;

			printf("Enter the info:\n");	
			scanf("%d",&data);
			temp=(struct node *)malloc(sizeof(struct node));
			temp->info=data;
			temp->next=NULL;
			if(start==NULL) { //empty list
					start=temp;
}		
else {
		p=start;
	while(p->next!=NULL) {
			p=p->next;
}
p->next=temp;
}
}
void display() {
		struct node *p=start;
		while(p!=NULL) {
			printf("%d\n",p->info);
			p=p->next;
			}
}




void insert_after()
{
int flag=0;
int new,after;
struct node *p=start;
struct node *temp;
		printf("Enter the info:\n");
		scanf("%d",&new);
		temp=(struct node * )malloc(sizeof(struct node));
		temp->info=new;
		printf("Enter after which node u want to insert");
		scanf("%d",&after);
while(p!=NULL) {
		if(p->info==after) {
				temp->next=p->next;
				p->next=temp;flag=1;break;
}
else p=p->next;
}
if(flag==0) printf("Element not found\n");
}

void delete() {
		struct node *p=start;
struct node *temp,*previous;
int del;
printf("Enter which element do u want to delete\n");
	scanf("%d",&del);
		if(p->info==del) {
				temp=p;
				printf("list is empty now!\n");
				free(temp);start=NULL;
}
else {

p=start;
while(p->next!=NULL) {
		if(p->info->next==del)  {
				temp=p->next;
			p->next=p->next;
				free(temp);
}
p=p->next;
previous=previous->next;
}
}
}

