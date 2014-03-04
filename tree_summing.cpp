#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
struct tree {
	int value;
	struct tree *left;
	struct tree *right;
	};

int sum_tree(int n,struct tree *t) { 
if(t==NULL)return 0;
	else if(n==t->value && !t->left && !t->right)
	return 1;
	else return sum_tree(n-(t->value),t->left) || sum_tree(n-(t->value),t->right);


}



struct tree *create_tree() {

int a;
struct tree *result;
a=getc(stdin);
while(isspace(a)){
a=getc(stdin);
}
if(a!='(') {  
	cout<<"error\n";
	}
a=getc(stdin);
	while(isspace(a)) {
		a=getc(stdin);
	}
	if(a==')') {

			return NULL;
	}
ungetc(a,stdin);
	if(scanf("%d",&a)!=1) { 
	printf("error\n");
	return NULL;
	}
result=(struct tree *)malloc(sizeof(struct tree));
result->value=a;
result->left=create_tree();
result->right=create_tree();
a=getc(stdin);
	while(isspace(a)) { 
	a=getc(stdin);
	}
if(a!=')') { 
printf("error\n");
	return NULL;
	}
return result;

}


int main()
{
int sum;
struct tree *my_tree;
	while(1) {
	if(scanf("%d",&sum)!=1)  {
		break;
}
my_tree=create_tree();
if(sum_tree(sum,my_tree)) 
	cout<<"yes\n";
	else cout<<"no\n";
}
return 0;
}


