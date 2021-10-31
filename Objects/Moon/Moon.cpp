#include "CelestialBase.hpp"
#include "Moon.hpp"
#include "CelestialFactory.hpp"
#include <iostream>

Moon::Moon(xoroshiro128 rng ): CelestialBase(rng), 
    m_name(moon_names[getRng()->next()%20]),
    m_mass(getRng()->next() % 200'000) 
{
   
};

void Moon::print( int indent /*= 0*/ )
{
    std::cout << std::string(indent, ' ') << "Type: Moon, Name: " << m_name;
    std::cout << ", Mass: " << m_mass << " and the following children\n";
    for(auto child: children)
    {
        child->print(2*indent);
    }
    
};

void Moon::addChild( std::string body_type )
{
    children.push_back(CelestialFactory::getFactory(body_type)->makeObject(getRng()->fork()));

};       