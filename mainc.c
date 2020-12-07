#include "link.h"

int main(void)
{
	int n[5];

	printf("input 5 integer :");
	for (int i = 0 ; i < 5 ; i++)
	{
		scanf("%d", &n[i]);
		insert_node(n[i]);
	}
	print_list();
	print_node(2);

	return(0);
}
