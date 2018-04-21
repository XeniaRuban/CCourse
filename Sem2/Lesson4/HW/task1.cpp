#include "stdafx.h"
#include <stdlib.h>
#define BUFFER_SIZE 1024

typedef struct Node {
	int value;
	struct Node *next;
} Node;

void push(Node **head, int data) {
	Node *tmp = (Node*)malloc(sizeof(Node));
	tmp->value = data;
	tmp->next = (*head);
	(*head) = tmp;
}

int pop(Node **head) {
	Node* prev = NULL;
	int val;
	if (head == NULL) {
		exit(-1);
	}
	prev = (*head);
	val = prev->value;
	(*head) = (*head)->next;
	free(prev);
	return val;
}

Node* getNth(Node* head, int n) {
	int counter = 0;
	while (counter < n && head) {
		head = head->next;
		counter++;
	}
	return head;
}

Node* getLast(Node *head) {
	if (head == NULL) {
		return NULL;
	}
	while (head->next) {
		head = head->next;
	}
	return head;
}

void pushBack(Node *head, int value) {
	Node *last = getLast(head);
	Node *tmp = (Node*)malloc(sizeof(Node));
	tmp->value = value;
	tmp->next = NULL;
	last->next = tmp;
}

Node* getLastButOne(Node* head) {
	if (head == NULL) {
		exit(-2);
	}
	if (head->next == NULL) {
		return NULL;
	}
	while (head->next->next) {
		head = head->next;
	}
	return head;
}

void popBack(Node **head) {
	Node *lastbn = NULL;
	if (!head) {
		exit(-1);
	}
	if (!(*head)) {
		exit(-1);
	}
	lastbn = getLastButOne(*head);
	if (lastbn == NULL) {
		free(*head);
		*head = NULL;
	}
	else {
		free(lastbn->next);
		lastbn->next = NULL;
	}
}

void insert(Node *head, unsigned n, int val) {
	unsigned i = 0;
	Node *tmp = NULL;
	while (i < n && head->next) {
		head = head->next;
		i++;
	}
	tmp = (Node*)malloc(sizeof(Node));
	tmp->value = val;
	if (head->next) {
		tmp->next = head->next;
	}
	else {
		tmp->next = NULL;
	}
	head->next = tmp;
}

int deleteNth(Node **head, int n) {
	if (n == 0) {
		return pop(head);
	}
	else {
		Node *prev = getNth(*head, n - 1);
		Node *elm = prev->next;
		int val = elm->value;

		prev->next = elm->next;
		free(elm);
		return val;
	}
}

void deleteList(Node **head) {
	Node* prev = NULL;
	while ((*head)->next) {
		prev = (*head);
		(*head) = (*head)->next;
		free(prev);
	}
	free(*head);
}

void printList(Node *head) 
{
	while (head) {
		printf("%d\n", head->value);
		head = head->next;
	}
}


int main()
{
	Node *head = NULL;
	FILE *file;
	char buffer[BUFFER_SIZE];
	errno_t err = fopen_s(&file, "C:\\Users\\ч\\Desktop\\operations.txt", "r+");
	if (err)
		printf_s("The file operations.txt was not opened\n");
	else
	{
		while (fgets(buffer, BUFFER_SIZE, file) != NULL) {
			printf("%s \n", buffer);
		
			for (int i = 0; i < BUFFER_SIZE; i++)
			{
				if (buffer[i] == '\n')
					printf("New string\n");

				if (buffer[i] == ' ') 
					printf("New element\n");

				if (buffer[i] >= '0' && buffer[i] <= '9')
					printf("This is number\n");


			}
	/*		{
				if ('*'||'/'||'+'||'-')
				{
					'???';
				}
			}
	*/		
		}
		printList(head);

	}

	fclose(file);
	return 0;
}
