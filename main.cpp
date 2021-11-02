#include "Builder.hpp"
#include <iostream>
#include <memory>
#include <string>
#include <vector>


int main(void)
{
    
	specifier systemSpec{ "Star" , std::vector<specifier>{
		//Planets
		specifier{ "Planet"

		},
		specifier{ "Planet", std::vector<specifier>{
			specifier{ "Moon"}
			}
		},
		specifier{ "Planet", std::vector<specifier>{
			specifier{ "Moon"}
			}
		},
		specifier{ "Planet", std::vector<specifier>{
			specifier{ "Moon"},
			specifier{ "Moon"}
			}
		},


	} };
	
	Builder system(systemSpec);

	system.getSystem()->print(2);


	return 0;
	
}