/*
 * swap_bits.c
 *
 *  Created on: Jun 22, 2019
 *      Author: Alex
 */

#include <stdio.h>
#include "swap_bits.h"

unsigned int swap_bits(unsigned int x, unsigned int p1, unsigned int p2, unsigned int n)
{
	unsigned int set1 = (x>>p1) & ((1U<<n)-1);
	unsigned int set2 = (x>>p2) & ((1U<<n)-1);
	unsigned int xor = set1 ^ set2;
	xor = (xor<<p1)|(xor<<p2);
	unsigned int result = x ^ xor;
	return result;
}
