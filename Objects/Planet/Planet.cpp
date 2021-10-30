#include "CelestialBase.hpp"
#include "Planet.hpp"
#include "CelestialFactory.hpp"
#include <iostream>

Planet::Planet(xoroshiro128 rng ): CelestialBase(rng), 
    m_name(planet_names[getRng()->next()%20]),
    m_mass(getRng()->next()) 
{
   
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
