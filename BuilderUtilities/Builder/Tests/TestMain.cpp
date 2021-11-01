#include "Builder.hpp"
#include "CelestialBase.hpp"
#include <memory>
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

	std::cout << "Testing: proper number of system elements\n";
	std::shared_ptr<CelestialBase> SystemA = builderA.getSystem();
	std::shared_ptr<CelestialBase> SystemB = builderB.getSystem();

	// test System A
	
	std::cout << "System A: Star 1 has 3 planets\n";
	assert(SystemA->getChildren().size() == 3);
	std::cout << "System A: Planet 1 has 0 moons\n";
	assert(SystemA->getChildren()[0]->getChildren().size() == 0);
	std::cout << "System A: Planet 2 has 2 Moons\n";
	assert(SystemA->getChildren()[1]->getChildren().size() == 2);
	std::cout << "System A: Planet 3 has 0 Moons\n";
	assert(SystemA->getChildren()[2]->getChildren().size() == 0);
	// test System B
	std::cout << "System B: Star 1 has 3 planets\n";
	assert(SystemB->getChildren().size() == 3);
	std::cout << "System B: Planet 1 has 0 moons\n";
	assert(SystemB->getChildren()[0]->getChildren().size() == 0);
	std::cout << "System B: Planet 2 has 3 Moons\n";
	assert(SystemB->getChildren()[1]->getChildren().size() == 3);
	std::cout << "System B: Planet 3 has 0 Moons\n";
	assert(SystemB->getChildren()[2]->getChildren().size() == 0);

	// test that Changing number of moons on planet 2 doesn't affect atributes of planet 3
	std::cout << "Checking attributes of planets 3A and 3B\n";
	std::shared_ptr<CelestialBase> planet_3A = SystemA->getChildren()[2];
	std::shared_ptr<CelestialBase> planet_3B = SystemB->getChildren()[2];
	std::cout << "Checking names... \n";
	assert(planet_3A->getName() == planet_3B->getName());
	std::cout << "Checking masses... \n";
	assert(planet_3A->getMass() == planet_3B->getMass());

	// Testing print
	std::cout << "System A:\n";
	builderA.getSystem()->print(2);
	std::cout << "System B:\n";
	builderB.getSystem()->print(2);

	return 0;
}