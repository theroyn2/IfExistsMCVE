
#include <iostream>

#include "B.h"
#include "C.hpp"

int main()
{
    std::cout << "Hello World!\n";
	B b;
	b.hello();
	C<int> c;
	c.hello();
}