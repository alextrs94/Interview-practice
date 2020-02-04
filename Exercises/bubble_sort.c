/*
 * bubble_sort.c
 *
 *  Created on: Jun 22, 2019
 *      Author: Alex
 */

#include <stdio.h>
#include "bubble_sort.h"

void swap_vals(int *x, int *y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}

void bubble_sort(int *x, int size)
{
	int i,j;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(*(x+j)>*(x+j+1))
			{
				swap_vals(&(*(x+j)), &(*(x+j+1)));
			}
		}
	}
}

void print_arr(int *x, int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ", *(x+i));
	}
	printf("\n");
}
