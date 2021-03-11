#include <iostream>
#include <string>

int main(int argc, char** argv)
{
	int count = 1;
	if (argc > 1) count = std::atoi(argv[1]);
	for (int i = 0; i < count; i++)
		std::cout << "Hello world!\n";
	return 0;
}
