#include<iostream>
#include<cstring>


int main(int argc, char* argv[])
{
	for (int i = 0; i < argc; i++)
	{
		std::cout << "Hello ";
		std::cout << argv[i] << std::endl;

	}
	return 0;
}