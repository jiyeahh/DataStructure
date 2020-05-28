#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_SIZE (9)

typedef int Element;
typedef struct {
	Element queue[MAX_SIZE];
	int front, rear, size;
}Queue;

void init(Queue* q);
bool isFull(Queue* q);
bool isEmpty(Queue* q);
void enQueue(Queue* q, Element data);
Element deQueue(Queue* q);
