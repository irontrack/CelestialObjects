#include "Builder.hpp"

#include <iostream>
#include "Star.hpp"
#include <memory>
#include <string>


int main(void)
{
    xoroshiro128 rng;
	CelestialFactory f;
    Star S(rng);
	S.addChild("Planet");
	S.addChild("Planet");
	S.getChild()[0]->addChild("Moon");
	S.getChild()[0]->addChild("Moon");
	S.print(2);



	return 0;
	
}