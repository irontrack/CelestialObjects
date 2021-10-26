#include "CelestialBase.hpp"
#include "Star.hpp"
#include "CelestialFactory.hpp"
#include <iostream>

Star::Star(xoroshiro128 rng ): CelestialBase(rng), 
    m_name(star_names[getRng()->next()%20]),
    m_mass(getRng()->next()) 
{
    
};

void Star::print( int indent /*= 0*/ )
{
    std::cout << std::string(indent, ' ') << "Type: Star, Name: " << m_name;
    std::cout << ", Mass: " << m_mass << " and the following children\n";
    for(auto child: children)
    {
        child->print(2*indent);
    }
    
};

void Star::addChild( std::string body_type )
{
    children.push_back(CelestialFactory::getFactory(body_type)->makeObject(getRng()->fork()));

};       


std::vector<std::shared_ptr<CelestialBase> >& Star::getChild()
{
    return children;
};
