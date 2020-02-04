/*
 * binary_search.c
 *
 *  Created on: Jun 22, 2019
 *      Author: Alex
 */

#include <stdio.h>
#include "binary_search.h"

char binary_search(int *x, int left, int right, int nbr)
{
	while(right>=left)
	{
		int mid = (left+right)/2;
		if(*(x+mid)==nbr)
		{
			return 0;
		}
		else if(*(x+mid)>nbr)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return -1;
}
