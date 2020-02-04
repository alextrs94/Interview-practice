/*
 * swap_arr_elements.c
 *
 *  Created on: Feb 5, 2020
 *      Author: Alex
 */

#include <stdio.h>
#include "swap_arr_elements.h"

void swap_elements(char arr[], char size)
{
	char *pos1, *pos2;
	pos1 = arr;
	pos2 = &arr[size-1];

	printf("Initial array:\n");

	for(int i=0;i<size;i++)
	{
		printf("%c", arr[i]);
	}

	while(pos1 < pos2)
	{
		*pos1 ^= *pos2;
		*pos2 ^= *pos1;
		*pos1 ^= *pos2;

		pos1++;
		pos2--;
	}

	printf("\nArray after swap:\n");
	for(int i=0;i<size;i++)
	{
		printf("%c", arr[i]);
	}
}
