#ifndef CELESTIALBASE_HPP
#define CELESTIALBASE_HPP


#include "xoroshiro128plusplus.hpp"
#include <vector>
#include <string>



class CelestialBase
{
	public:
	    CelestialBase( xoroshiro128 rng );
	    virtual void print( int indent = 0 ) = 0;
		virtual void addChild( std::string body_type ) = 0;
		xoroshiro128* getRng();
		std::vector<std::shared_ptr<CelestialBase> >& getChild();
		
    private:
	    xoroshiro128 m_rng;
		std::vector< std::shared_ptr<CelestialBase> > children;
	
};

static const std::uint8_t list_size = 20;

static std::string star_names[list_size] = {
	"Sirius",
	"Canopus",
	"Arcturus",
	"Alpha Centauri A",
	"Vega",
	"Rigel",
	"Procyon",
	"Achernar",
	"Betelgeuse",
	"Hadar", 
	"Capella A",
	"Altair",
	"Aldebaran",
	"Capella B",
	"Spica",
	"Antares",
	"Pollux",
	"Fomalhaut",
	"Deneb",
	"Mimosa"
};
static std::string planet_names[list_size] = {
	"Sirius",
	"Canopus",
	"Arcturus",
	"Alpha Centauri A",
	"Vega",
	"Rigel",
	"Procyon",
	"Achernar",
	"Betelgeuse",
	"Hadar", 
	"Capella A",
	"Altair",
	"Aldebaran",
	"Capella B",
	"Spica",
	"Antares",
	"Pollux",
	"Fomalhaut",
	"Deneb",
	"Mimosa"
};
static std::string moon_names[list_size] = {
	"Sirius",
	"Canopus",
	"Arcturus",
	"Alpha Centauri A",
	"Vega",
	"Rigel",
	"Procyon",
	"Achernar",
	"Betelgeuse",
	"Hadar", 
	"Capella A",
	"Altair",
	"Aldebaran",
	"Capella B",
	"Spica",
	"Antares",
	"Pollux",
	"Fomalhaut",
	"Deneb",
	"Mimosa"
};
#endif // CELESTIALBASE_HPP
