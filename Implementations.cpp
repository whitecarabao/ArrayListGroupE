#include "ArrayList.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
List populate_list(int size) { //randomly generate list
	List testList;

	printf("\n               --- Starting Element Generation ---\n");
	srand(time(NULL));
	testList.count = size;
	for (int i = 0; i < testList.count; i++) {
		testList.items[i] = rand() % 100 + 1;
		//printf("\nElement %d: [%d]",i,  testList.items[i]);
	}
	printf("\n               --- Element Generation Completion ---\n");
	return testList;
}

void removeElement(List& list, int delPos) {
	int c;
	if (delPos >= MAX_SIZE + 1)
		printf("Deletion not possible.\n");

	else
	{
		for (c = delPos - 1; c < MAX_SIZE - 1; c++)
			list.items[c] = list.items[c + 1];

	}
}

void printList(List list) {
	for (int i = 0; i < list.count; i++) {
		printf("\nElement %d: [%d]", i + 1, list.items[i]);
	}

}

void addElement(List& list, int newItem, int pos) { //confirmed working

	int i;

	switch (pos) {

	case START: 
		i = list.count - 1;
		while (i >= 0) {
			list.items[i + 1] = list.items[i];
			i--;
		}
		list.items[0] = newItem;
		break;



	case LAST:
		list.items[list.count] = newItem;

		break;


	default:
		i = list.count - 1;
		while (i >= pos-1) {
			list.items[i + 1] = list.items[i];
			i--;
		}
		list.items[pos - 1] = newItem;
		break;
	}
	list.count++;
}