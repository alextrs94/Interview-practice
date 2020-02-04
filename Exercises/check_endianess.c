/*
 * check_endianess.c
 *
 *  Created on: Jun 22, 2019
 *      Author: Alex
 */

#include <stdio.h>
#include "check_endianess.h"

void check_endianess()
{
	unsigned int x = 1;
	char *c = (char *)&x;

	if(*c)
	{
		printf("Little Endian");
	}
	else
	{
		printf("Big Endian");
	}
}
