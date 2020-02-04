/*
 * bit_manipulation.c
 *
 *  Created on: Feb 4, 2020
 *      Author: Alex
 */

#include <stdio.h>
#include "bit_manipulation.h"

void check_bit(unsigned char x, unsigned char pos)
{
	x &= 1U << pos;
	if(x)
	{
		printf("Bit is SET\n");
	}
	else
	{
		printf("Bit is UNSET\n");
	}
}

void set_bit(unsigned char * x, unsigned char pos)
{
	*x |= 1U << pos;
}

void unset_bit(unsigned char * x, unsigned char pos)
{
	*x &= ~(1U << pos);
}

void toggle_bit(unsigned char * x, unsigned char pos)
{
	*x ^= 1U << pos;
}
