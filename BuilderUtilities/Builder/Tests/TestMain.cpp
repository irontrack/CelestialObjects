#include "Builder.hpp"
#include <cassert>
#include <iostream>

int main()
{
	specifier specA{ "Star" , std::vector<specifier>{ 
		specifier{ "Planet" },
		specifier{ "Planet" , std::vector<specifier>{
		   specifier{ "Moon" },
		   specifier{ "Moon" }
	       }
	    },
		specifier{ "Planet" }
	    } 
	};

	specifier specB{ "Star" , std::vector<specifier>{
		specifier{ "Planet" },
		specifier{ "Planet" , std::vector<specifier>{
		   specifier{ "Moon" },
		   specifier{ "Moon" },
		   specifier{ "Moon" }
		   }
		},
		specifier{ "Planet" }
		}
	};
	Builder builderA( specA );
	Builder builderB(specB);
	assert(builderA.getSystem()->getChildren().size() == builderA.getSystem()->getChildren().size());
	builderA.getSystem()->print(2);
	builderB.getSystem()->print(2);
	return 0;
}