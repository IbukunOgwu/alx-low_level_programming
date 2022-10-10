#ifndef DOG_H
#define DOH_H

int _putchar(char c);

/**
 * struct dog - struct that stores information of a dog
 * @name: name of the dog - char
 * @age: age of the dog - float
 * @owner: owner of the dog - char
 * Description: a struct called "dog" and it stores information of the dog's
 * name, age and owner.
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
