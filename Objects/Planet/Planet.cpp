#include "CelestialBase.hpp"
#include "Planet.hpp"
#include "CelestialFactory.hpp"
#include <iostream>

Planet::Planet(xoroshiro128 rng ): CelestialBase(rng) 
{
    setName(planet_names[getRng()->next() % 20]);
    setMass(getRng()->next() % 2'000'000'000'000); //in exagrams (less than 2e12 Eg)
};

void Planet::print( int indent /*= 0*/ )
{
    std::cout << std::string(indent, ' ') << "Type: Planet, Name: " << m_name;
    std::cout << ", Mass: " << m_mass << " and the following children\n";
    for(auto child: children)
    {
        child->print(2*indent);
    }
    
};

void Planet::addChild( std::string body_type )
{
    children.push_back(CelestialFactory::getFactory(body_type)->makeObject(getRng()->fork()));

};       
