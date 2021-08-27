#include <iostream>
#include <cstdlib>
int main()
{
	std::string buf;
	int i;

	buf = "13weqr";
	std::cout << "before: " << i << std::endl;
	i = std::atoi(buf.c_str());
	std::cout << i << std::endl;
}