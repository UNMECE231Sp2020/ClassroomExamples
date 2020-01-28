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


int main() {
	//List l3 = {3, NULL};
	List l3 = {3, (List *) 0};
	List l2 = {2, &l3};
	List l1 = {1, &l2};

	print_list(&l1);

	List *another_temp = &l2;
	print_list(another_temp);

	/*
	List *temp;
	for(temp=&l1; temp!=NULL; temp=temp->next) {
	//for(temp=&l1; temp!=NULL; temp=(*temp).next) {
		printf("%d ", temp->value);
	}
	printf("\n");
	List *temp = &l1;
	while(temp!=NULL) {
		printf("%d ", temp->value);
		temp = temp->next;
	}
	*/

	return 0;
}
