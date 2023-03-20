#ifndef DOG_H
#define DOG_H
/**
 * struct dog - the new data type name
 * @name: char pointer
 * @age: float type
 * @owner: char pointer (type string)
 * description : this is structure of new data type called dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
