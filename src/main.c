#include <utils.h>
#include <games.h>

int main(int argc, char *argv[]) {
	//avoid warnings
	(void)argc;	(void)argv;
	
	//TODO changer I/O standards

	//init random generator
	srand(time(NULL));

	//Test des jeux
	for(size_t i = 0; i < 100; i++)
	{
		playGame1();
	}
	for(size_t i = 0; i < 100; i++)
	{
		playGame2();
	}
	for(size_t i = 0; i < 100; i++)
	{
		playGame3();
	}
}