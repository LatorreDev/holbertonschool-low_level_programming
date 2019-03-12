#include "dog.h"
#include <stdlib.h>

/**
* _strdup - entry point
* @str: entry string
* Return: always success!!!
*/

char *_strdup(char *str)
{
	int counterA;
	int counterB;
	char *myarray;

	if (str == NULL)
		return (NULL);
	for (counterA = 0 ; str[counterA]  ; counterA++)
	{

	}

	myarray = malloc(sizeof(*myarray) * counterA + 1);

	if (myarray == NULL)
		return (NULL);

	for (counterB = 0 ; counterB <= counterA ; counterB++)
	{
		myarray[counterB] = str[counterB];
	}
	return (myarray);
}

/**
* new_dog - entry point
* @name: entry name
* @age: entry age
* @owner: entry owner
* Return: Always Sucess!!!
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdoggy;

	newdoggy = malloc(sizeof(dog_t));
		if (newdoggy == 0)
		{
			return (0);
		}
	newdoggy->name = _strdup(name);
		if (newdoggy->name == NULL)
			free(newdoggy);
	newdoggy->age = age;
	newdoggy->owner = _strdup(owner);

		if (newdoggy->owner == NULL)
		{
			if (newdoggy->name != 0)
				free(newdoggy->name);
			free(newdoggy);
		}

		return (newdoggy);

}
