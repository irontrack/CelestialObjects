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
		
    private:
		std::string m_name;
		std::uint64_t m_mass; //in exagrams (less than 2e12 Eg)
		
	
};

#endif // PLANET_HPP
