#pragma once
#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#define MAX_SIZE 50
#define START 0
#define LAST -1

struct ArrayList {
	int items[MAX_SIZE];
	int count = 0;
	int sorted = 0;

};

typedef struct ArrayList List;
List populate_list(int size);
//ArrayList populateArrayList(int size);
void printList(List l);
void addElement(List& l, int newItem, int type);
void removeElement(List& l, int delPos);

#endif
