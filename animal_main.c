#include<stdio.h>
#include<string.h>
#include<cat.h>
#include<dog.h>
int main()
{
	struct cat *p1 = cat_create("koshek");
	struct dog *p2 = dog_create("sobach");
	animal_voice((struct animal*)my_cat);
        animal_voice((struct animal*)my_dog);
	p->voice(p);
	p->m->voice(p);
	return 0;
}
