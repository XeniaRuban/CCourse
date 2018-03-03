int listSum(Node *head) {
	int sum = 0;
	while (head != NULL) {
		sum = sum + head->value;
		head = head->next;
	}
	return sum;
}

int Max(Node *head) {
	int max = 0;
	max = head->value;
	if (head->next->value > head->value)
	{
		max = head->next->value;
		head = head->next;
	}
	return max;
}
	
int Min(Node *head) {
	int min = 100000;
	while (head != NULL) {
		if (min > head->value)
	{
		min = head->value;
	}
		head = head->next;
	}
	return min;
}

int main()
{
	Node *head = NULL;
	int value = 0;
	push(&head, 1);
	push(&head, 0);
	push(&head, -4);
	push(&head, 13);
	push(&head, 42);
	push(&head, 38);

	printf("Max: %d\n", Max(head));
	printf("Min: %d\n", Min(head));
	return 0;
}
