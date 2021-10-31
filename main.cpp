#include "Builder.hpp"
#include <iostream>
#include <memory>
#include <string>
#include <vector>


int main(void)
{
    
	specifier spec{ "Star" };
	Builder b(spec);
	b.getSystem()->print();

	return 0;
	
}