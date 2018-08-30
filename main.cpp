#include <unistd.h>
#include <iostream>
int main(int argc,char *argv[])
{
	if(argc > 1)
	{
		std::cout << "helloworld"<< std::endl;
	}
	else
	{
		std::cout << "i am the client ..." << std::endl;
	}
}
