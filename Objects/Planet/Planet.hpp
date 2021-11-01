#ifndef PLANET_HPP
#define PLANET_HPP


#include "xoroshiro128plusplus.hpp"
#include "CelestialBase.hpp"
#include <vector>
#include <string>
#include <memory>


class Planet: public CelestialBase
{
	public:
	    Planet( xoroshiro128 rng );
	    void print( int indent = 0 ) ;
		void addChild( std::string body_type ) ;
		
	
};

#endif // PLANET_HPP
