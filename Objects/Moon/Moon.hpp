#ifndef MOON_HPP
#define MOON_HPP

#include "xoroshiro128plusplus.hpp"
#include "CelestialBase.hpp"
#include <vector>
#include <string>
#include <memory>


class Moon: public CelestialBase
{
	public:
	    Moon( xoroshiro128 rng );
	    void print( int indent = 0 );
		void addChild( std::string body_type );
		std::vector< std::shared_ptr<CelestialBase> >& getChild();
    private:
	    std::vector< std::shared_ptr<CelestialBase> > children;
		std::string m_name;
		std::uint64_t m_mass;
		
	
};

#endif // MOON_HPP
