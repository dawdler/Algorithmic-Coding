/* INSERT A NODE INTO A SIMPLE LINKED LIST AT THE BEGINNING */
/* LINK_IF.C */

# include <stdio.h>
# include <malloc.h>

struct link
{
	int info;
	struct link *next;
};

int i;
int number;
struct link start, *previous, *new1;

void insertion(struct link *);
void create_list(struct link *);
void display(struct link *);
//void delete();
void reverse();
/* Function create a linked list */

void create_list(struct link *node)
{

	char ch;
	start.next = NULL;  
	// Empty list */

	    node = &start;      /* Point to the start of the list */
	i = 0;
	fflush(stdin);
	printf("\n Input choice n for break: ");
	ch = getchar();
	while(ch != 'n')
	{
		node->next = (struct link* ) malloc(sizeof(struct link));
		node = node->next;
		printf("\n Input the node: %d: ", (i+1));
		scanf("%d", &node->info);
		node->next = NULL;
		fflush(stdin);
		printf("\n Input choice n for break: ");
		ch = getchar();
		i++;
	}
}

/* Inserting a node */

void insertion(struct link *node)
{
	node = start.next;

	previous = &start;

	new1 = (struct link* ) malloc(sizeof(struct link));
	new1->next = node ;
	previous->next = new1;
	printf("\n Input the fisrt node value: ");
	scanf("%d", &new1->info);
	//node->next=start.next;
	//start.next=node;
}

/* Display the list */

void display(struct link *node)
{
	node = start.next;
	printf("\n After Inserting a node list is as follows:\n");
	while (node)
	{
		printf("\n 0x%x", node);
		printf(" %d", node->info);
		node = node->next;
	}
}


/*void delete() {
printf("Deleting first node...");
struct link *node,*previous;
node=start.next;
previous=&start;
previous->next=node->next;
free(node);
}*/

void reverse() {
printf("reversing the linked list...");

struct link * current=&start;
struct link *prev=NULL;
struct link *next;
while(current) {
	next=current->next;
	current->next=prev;
	prev=current;
	current=next;
		}
start.next=prev;

}	


/* Function main */

void main()
{
	struct link *node = (struct link *) malloc(sizeof(struct link));

	create_list(node);
	insertion(node);
	display(node);
	//delete();
	//display(node);
	printf("Calling reverse..");
	reverse();
	display(node);
}	



