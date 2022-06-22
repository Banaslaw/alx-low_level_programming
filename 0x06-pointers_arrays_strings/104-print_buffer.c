#include "main.h"
#include <stido.h>

/**
* print_buffer
* buffer to be printed
* number of byte to be printed
*/
void print_buffer(char *b, int size)
{
	int a,c;

	if (size <= 0)
		printf("\n");
	else
	{
		for (a = 0; a < size;  a += 10)
