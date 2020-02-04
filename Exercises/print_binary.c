/*
 * print_binary.c
 *
 *  Created on: Jun 22, 2019
 *      Author: Alex
 */

#include <stdio.h>

void print_binary(unsigned char x)
{
	for(int i = (sizeof(x)*8 - 1);i>=0;i--)
		printf("%d", (x>>i) & 1);
}
