#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct animal{
    char *name;
    char *voice;
};
struct cat{
    struct animal a;

};

struct cat * cat_create()
{
        struct cat *c  = malloc(sizeof(struct cat));
        c->a.name = strdup(name);
        c->a.voice = "meow!";
        return c;


}
char* animal_get_name(struct animal *a)
{
        return a->name;

}

void cat_voice(struct animal *a)                                      {
        char*name = animal_get_name(a);
        printf("%s says %s \n", name, a->voice);

}
void cat_destroy
{
        free(c)
}
