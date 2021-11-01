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
		std::string getName() { return m_name; };
		std::uint64_t getMass() { return m_mass; };
		
	protected:
	    std::vector< std::shared_ptr<CelestialBase> > children;
		std::string m_name;
		std::uint64_t m_mass; //in exagrams (no limit)
		// only for use by derived constructor
		void setName(std::string name) { m_name = name; };
		void setMass(std::uint64_t mass) { m_mass = mass; };
		
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
