#include <stdio.h>
#include "lists.h"
/**
 * before_main - This function print text even before that main is executed.
 */
__attribute__((constructor))
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
