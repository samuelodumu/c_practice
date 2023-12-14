#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
	int data;
	struct node *next;
} node;

node *head = NULL;
node *current = NULL;

void printlist()
{
	node *p = head;
	printf("\n[");

	while (p != NULL)
	{

	}
	printf("]\n");
}

void insertatbegin(int data)
{
	node *nl;
	nl = malloc(sizeof(node));
	nl->data = data;
	nl->next = head;

}

void insertatend(int data)
{
	node *nl;

	nl = malloc(sizeof(node));
	nl->data = data;
	node *lastnode = head;

	while (lastnode->next != NULL)
	{
		lastnode = lastnode->next;
	}
	lastnode->next = nl;
}


int main(void)
{
	insertatbegin(12);
	insertatend(14);
	insertatbegin(10);
	insertatbegin(8);
	insertatbegin(6);
	insertatbegin(4);

	printlist();
	return (0);
}
