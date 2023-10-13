#include <iostream>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(int argc, char **argv)
{
	if(argc == 1)
	{
		std :: cout << "Enter 2 arguments" << std :: endl;
		return 1;
	}

	int* a = new int(atoi(argv[1]));
	int* b = new int(atoi(argv[2]));

	swap(a, b);

	std :: cout << "a become " << *a << " and b become " << *b << std :: endl;


}
