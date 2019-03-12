#include <stdio.h>
#include "dog.h"

/**
* print_dog - entry point
* @d: entry info
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{

	}

	if (d->name == 0)
	{
		printf("Name: (nil)");
	}

	if (d->age == 0)
	{
		printf("Age: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}

	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}


}
