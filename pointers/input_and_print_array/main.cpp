#include <iostream>

int main(int argc, char **argv)
{
	//Variables
	int n_inputs;
	int *inputs;

	n_inputs = atoi(argv[1]);

	inputs = new int[n_inputs];

	for(int i = 0; i < n_inputs; i++)
	{
		std :: cout << "input " << i << ": ";
		std :: cin >> *(inputs + i);
	}

	for(int i = 0; i < n_inputs; i++)
	{
		std :: cout << *(inputs + i) << std :: endl;
	}
}
