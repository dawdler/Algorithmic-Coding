#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct tree {
	int valor;
	struct tree * left;
	struct tree * right;
};

int
sum_tree(int n, struct tree * t)
{
	if (t==NULL) {
		return 0;
	} else if (n==t->valor && !t->left && !t->right) {
		return 1;
	} else {
		return sum_tree(n-(t->valor), t->left) || sum_tree(n-(t->valor), t->right);
	}
}

struct tree *
lee_tree(void)
{
	int a;
	struct tree * result;

	a = getc(stdin);
	while(isspace(a)) {
		a = getc(stdin);
	}
	if (a!='(') {
		printf("error\n");
		return NULL;
	}
	a = getc(stdin);
	while(isspace(a)) {
		a = getc(stdin);
	}
	if (a==')') {
		return NULL;
	}
	ungetc(a, stdin);
	if (scanf("%d", &a)!=1) {
		printf("error\n");
		return NULL;
	}
	result = malloc(sizeof(struct tree));
	result->valor = a;
	result->left = lee_tree();
	result->right = lee_tree();
	a = getc(stdin);
	while(isspace(a)) {
		a = getc(stdin);
	}
	if (a!=')') {
		printf("error\n");
		return NULL;
	}
	return result;
}

int main(void)
{
	int sum;
	struct tree * my_tree;
	while(1) {
		if (scanf("%d", &sum)!=1) {
			break;
		}
		my_tree = lee_tree();
		if (sum_tree(sum, my_tree)) {
			printf("yes\n");
		} else {
			printf("no\n");
		}
	}
	exit(0);
}

