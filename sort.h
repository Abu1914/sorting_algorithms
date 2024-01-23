#ifndef __SORT_H__
#define __SORT_H__
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void quick_sort_help(int *array, int low, int high, size_t size);
void shell_sort(int *array, size_t size);
void *_calloc(unsigned int k, unsigned int size);
void counting_sort(int *array, size_t size);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void insert_swap(listint_t **h, listint_t *first_node, listint_t *second_node);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int l_partition(int *array, int low, int high, size_t size);


#endif
