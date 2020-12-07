#include "link.h"

static struct lst
{
	int data;
	struct lst *next;
};

static struct lst *list = NULL;

static struct lst *create_node(int data)
{
	struct lst *new_node;
	new_node = malloc(sizeof(struct lst));
	if (new_node)
	{
		new_node->data = data;
		new_node->next = NULL;
	}
	return (new_node);
}

int insert_node(int data)
{
	struct lst *nodeptr;
	struct lst *serchptr;

	nodeptr = create_node(data);
	if (!nodeptr)
		return (-1);
	if (list == NULL)
		list = nodeptr;
	else
	{
		serchptr = list;
		while (serchptr->next != NULL)
			serchptr = serchptr->next;
		serchptr->next = nodeptr;
	}
	return (0);
}

void print_list(void)
{
	struct lst *ptr = list;

	while (ptr)
	{
		printf("%d \n", ptr->data);
		ptr = ptr->next;
	}
}

void print_node(int n)
{
	struct lst *ptr = list;
	int i;

	i = 0;
	while (i < n)
	{
		if (ptr == NULL)
		{
			printf("no data\n");
			return ;
		}
		ptr = ptr->next;
		i++;
	}
	printf("%d \n", ptr->data);
}
