#include "Builder.hpp"
#include <iostream>
#include <memory>
#include <string>
#include <vector>


int main(void)
{
   
    std::vector<std::string> vec{"a","b","c"};

	for(auto v: vec)
	{
		std::cout << v.c_str() << std::endl;
	}
   

	return 0;
	
}