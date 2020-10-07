#include <stdio.h>
#include "ArrayList.h"
#include <conio.h>

void main() {

	List list;
	int target, pos, i;
	list = populate_list(10);

	printList(list);

	addElement(list, 100, START);
	addElement (list, 200, LAST);
	addElement(list, 300, 5);
	printf("\nNew List:\n");
	printList(list);
	removeElement(list, 3);
	printf("\nNew List:\n");
	printList(list);
	_getch();
}