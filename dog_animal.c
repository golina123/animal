#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct animal{
    char *name;
    char *voice;
};
struct dog{
    struct animal a;

};

struct dog * dog_create()
{
        struct dog *d  = malloc(sizeof(struct dog));
	d->a.name = strdup(name);
	d->a.voice = "gav!";
	return d;


}
char* animal_get_name(struct animal *a)
{
	return a->name;

}

void dog_voice(struct animal *a)
{
        char*name = animal_get_name(a);
	printf("%s says %s \n", name, a->voice);

}
void dog_destroy
{
	free(d)
}
