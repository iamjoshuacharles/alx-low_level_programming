0x17. C - Doubly linked lists
	
	0. Print list
		
		Write a function that prints all the elements of a dlistint_t list.

			Prototype: size_t print_dlistint(const dlistint_t *h);
			Return: the number of nodes
			Format: see example at 0-main.c

	1. List Length

		Write a function that returns the number of elements in a linked dlistint_t list		

			Prototype: sixe_t dlistint_len(const dlistint_t *h);

	2. Add node

		Write a function thtat adds a new node at the beginning of a dlistint_t list.

			Prototype: dlistint_t *add_dnodeint(slistint_t **head, const int n);
			Return: the address of the new element, or NULL if it failed

	3. Add node at the end

		Write node that adds a new node at the end of a dlistint_t list

			Prototype: dlistint_t *add_dlistint_end(dlistt_t **head, const int n);
			Return: the address of the new element, or Null if it failed

	4. Free list

		Write a function that frees a dlistint_t list

			Prototype: void free_dlistint_t(dlistint_t *head);

	5. Get node at index

		Write a function that returns the nth node of a dlistint_t linked list

			Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
			where index is the index of the node, starting from 0
			if the node does not exist, return NULL
