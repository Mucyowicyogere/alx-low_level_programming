#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize dog
 * @d: dog structure as arg
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{       
        if (d !=NULL)
        {
                (*d).name = name;
                (*d).age = age;
                (*d).owner = owner;
        }
} 
