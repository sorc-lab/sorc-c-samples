#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
	char* Name;
	int Age;
	int Height;
	int Weight;
};

struct Person* PersonCreate(char* Name, int Age, int Height, int Weight)
{
	struct Person* Who = malloc(sizeof(struct Person));

	assert(Who != NULL);

	Who->Name = strdup(Name);
	Who->Age = Age;
	Who->Height = Height;
	Who->Weight = Weight;

	return Who;
}

void PersonDestroy(struct Person* Who)
{
	assert(Who != NULL);

	free(Who->Name);
	free(Who);
}

void PersonPrint(struct Person* Who)
{
	printf("Name: %s\n", Who->Name);
	printf("\tAge: %d\n", Who->Age);
	printf("\tHeight: %d\n", Who->Height);
	printf("\tWeight: %d\n", Who->Weight);
}

int main(int argc, char* argv[])
{
	struct Person* Sorc = PersonCreate("SORC_", 32, 64, 140);
	struct Person* Dingleberry = PersonCreate("Dingleberry", 20, 72, 180);

	printf("Sorc is at memory location %p:\n", Sorc);
	printf("Dingleberry is at memory location %p:\n", Dingleberry);
	
	PersonPrint(Sorc);
	PersonPrint(Dingleberry);

	Sorc->Age += 20;
	Sorc->Height += 2;
	Sorc->Weight += 40;

	PersonPrint(Sorc);

	// destruct
	PersonDestroy(Sorc);
	PersonDestroy(Dingleberry);

	return 0;
}

