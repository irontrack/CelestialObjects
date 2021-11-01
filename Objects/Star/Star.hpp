#ifndef STAR_HPP
#define STAR_HPP


#include "xoroshiro128plusplus.hpp"
#include "CelestialBase.hpp"
#include <vector>
#include <string>
#include <memory>


class Star: public CelestialBase
{
	public:
	    Star( xoroshiro128 rng );
	    void print( int indent = 0 ) ;
		void addChild( std::string body_type ) ;		
		
	
};

#endif // STAR_HPP
