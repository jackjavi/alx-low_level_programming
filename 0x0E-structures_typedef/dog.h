#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - description of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * typedef struct dog dog_t - description of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
typedef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
};

#endif /* _DOG_H_ */
