/*  INSERTING SOME NODES IN THE DOUBLY LINKED LIST */
/*  DBL_IL.C */
 
# include <stdio.h>
# include <malloc.h>

struct Double {
	int info;
	struct Double *next;
	struct Double *previous;
};
int i;
struct Double  start, *new1;
void Doubly_insertion_Last (struct Double *);
void Doubly_Create_Last (struct Double *);
void Display (struct Double *);
void reverse(struct Double *);
/* Function create a list of five nodes */

void Doubly_Create_Last (struct Double *node)
{
	int i = 0;
	int ch;
	start.next = NULL;  /* Empty list */
	start.previous = NULL;
	node = &start;      /* Point to the start of the list */

	//printf("\n Input choice n for break: ");
	

	while (1)
	{
		
printf("\n Input the value for: %d: ", i+1);
		scanf("%d", &ch);
		if(ch==0) break;		

node->next = (struct Double *) malloc(sizeof(struct Double ));
		node->next->previous = node;
		node = node->next;
		node->info=ch;
		node->next = NULL;
		i++;
		//fflush(stdin);
		//printf("\n Input choice n for break: ");
		//ch = getchar();
	}
}


void Doubly_insertion_Last (struct Double *node)
{
struct Double *temp;	
node = start.next;

	new1 = (struct Double *) malloc(sizeof(struct Double ));
	fflush(stdin);
	printf("\n Input the last node  value: ");
	scanf("%d",&new1->info);

	if (node == NULL)
	{
		printf("\n List is empty\n");
		printf("\n Insert as last node\n");
	}
	else
		while(node)
		{
                       temp=node;
			node = node->next;
		}

		new1->next = NULL;
	new1->previous = temp;
	temp->next = new1;
	
}

/* Display the list */

void Display (struct Double *node)
{
	node = start.next;

	while (node)
	{
		printf("\n 0x%x", node);
		printf("  %d", node->info);
		node = node->next;
	}
}

void reverse(struct Double *current) {
	struct Double *temp=NULL;
	current=start.next;
		while(current!=NULL) {
		temp=current->previous;
		current->previous=current->next;
		current->next=temp;
		current=current->previous;
}
start.next = temp->previous;
//return(start);
}
	
	
/* Function main */

void main()
{
	struct  Double *node = (struct Double *) malloc(sizeof(struct Double));
	Doubly_Create_Last (node);
	printf("\n Created list is as follows\n");
	Display(node);
	Doubly_insertion_Last (node);
	printf("\n List after insertion of last node \n");
	Display (node);
	reverse(node);printf("After reversing\n\n");
	Display(node);
}

