#ifndef CELESTIALBASE_HPP
#define CELESTIALBASE_HPP


#include "xoroshiro128plusplus.hpp"
#include <vector>
#include <string>
#include <memory>



class CelestialBase
{
	public:
	    CelestialBase( xoroshiro128 rng );
	    virtual void print( int indent = 0 ) = 0;
		virtual void addChild( std::string body_type ) = 0;
		xoroshiro128* getRng();
		std::vector< std::shared_ptr<CelestialBase> >& getChildren();
		
	protected:
	    std::vector< std::shared_ptr<CelestialBase> > children;
		
    private:
	    xoroshiro128 m_rng;
		
	
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
	"Aphrodite",
	"Apollo",
	"Ares",
	"Demeter",
	"Hades",
	"Hermes",
	"Eros",
	"Geras",
	"Janus",
	"Leto",
	"Momus",
	"Thanatos",
	"Pan",
	"Iris",
	"Paean",
	"Morpheus",
	"Melinoe",
	"Charites",
	"Zelus",
	"Phobos"
};
static std::string moon_names[list_size] = {
	"Koios",
	"Krios",
	"Kronos",
	"Hyperion",
	"Lapetos",
	"Mnemosyne",
	"Oceanus",
	"Phoebe",
	"Rhea",
	"Tethys",
	"Theia",
	"Themis",
	"Atlas",
	"Empimethus",
	"Menoitios",
	"Prometheus",
	"Asteria",
	"Perses",
	"Asterious",
	"Dione"
};
#endif // CELESTIALBASE_HPP
