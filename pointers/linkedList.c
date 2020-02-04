#include <stdio.h>

struct _list {
	int value;
	struct _list *next;
};

typedef struct _list List;

void print_list(List *node) {
	List *temp;
	for(temp=node; temp!=NULL; temp=temp->next) {
		printf("%d ", temp->value);
	}
	printf("\n");

	return;
}

void add_node(List *n, List *new) {
	if(n!=NULL) {
		new->next = n->next;
		n->next = new;
	}
	return;
}

void rm_node(List *node) {
	/*
	if(node->next == NULL) {
		return;
	}
	else {
		node->next = node->next->next;
	}
	*/
	if(node->next != NULL) {
		node->next = node->next->next;
	}
	return;
}

void add_five_ptr(float *x) {
	*x+=5;
	return;
}

void add_five(float x) {
	x+=5;
	return;
}

int main() {

	/*
	float a = -2.9;
	printf("a init: %.1lf\n", a);
	add_five(a);
	printf("a after: %.1lf\n", a);
	add_five_ptr(&a);
	printf("a after ptr: %.1lf\n", a);
	*/

	List l3 = {3, (List *) 0};
	List l2 = {2, &l3};
	List l1 = {1, &l2};

	print_list(&l1);

	List *another_temp = &l2;
	print_list(another_temp);

	List l5 = {5, NULL};

	add_node(&l2, &l5);
	print_list(&l1);

	rm_node(&l3);
	rm_node(&l2);
	print_list(&l1);

	return 0;
}
