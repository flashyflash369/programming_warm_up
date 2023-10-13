#include <iostream>
#include <cstdlib>

int* add(int* a, int* b)
{
	int *c = new int;
	*c = *a + *b;
	
	return c;
}

int main(int argc, char **argv)

{
	int *a = new int;
	int *b = new int;

	*a = atoi(argv[1]);
	*b = atoi(argv[2]);

	int *c = add(a, b);

	std :: cout << "addition result: " << *c << std :: endl;
	
	delete a;
	delete b;
	delete c;

}
