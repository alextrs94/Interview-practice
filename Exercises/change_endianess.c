/*
 * change_endianess.c
 *
 *  Created on: Jun 22, 2019
 *      Author: Alex
 */

#include <stdio.h>
#include "change_endianess.h"

unsigned int change_endianess(unsigned int x)
{
	return (((x>>24) & 0x000000FF)|
			((x>>8) & 0x0000FF00)|
			((x<<8) & 0x00FF0000)|
			((x<<24) & 0xFF000000));
}
