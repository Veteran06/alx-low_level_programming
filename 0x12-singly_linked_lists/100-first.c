#include <stdio.h>

/**
 * bmain - function executed before main
 * Return: no return
 */
void __attribute__((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf(" bore my house upon my back!/n");
}
