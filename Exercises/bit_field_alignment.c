/*
 * bit_field_alignment.c
 *
 *  Created on: Feb 4, 2020
 *      Author: Alex
 */

/*Nu merge inclus. Trebuie facut direct in main.*/

typedef struct myStruct {
	unsigned char a:3;
	unsigned char b:5;
	unsigned char c:4;
	unsigned char d:4;
} t_myStruct;


void print_struct_alignment(t_myStruct * struct1)
{
	struct1->a = 1; //001
	struct1->b = 8; //01000
	struct1->c = 2; //0010
	struct1->d = 3; //0011

    // 0011 0010 0100 0001 -> 12865

    /*printf("st = %d;", struct1);*/
}
