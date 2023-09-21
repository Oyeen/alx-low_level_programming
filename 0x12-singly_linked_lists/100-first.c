#include<stdio.h>

/**
 * theSugarplum - Applies the constructor attribute to theSugarplum()
 *   and executes before the main()
 */
void theSugarplum(void) __attribute__ ((constructor));

/**
 * theSugarplum - implementation of theSugarplum
 */
void theSugarplum(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
