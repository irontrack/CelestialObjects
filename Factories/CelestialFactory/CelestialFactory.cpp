#include "CelestialFactory.hpp"
#include "StarFactory.hpp"
#include "PlanetFactory.hpp"
#include "MoonFactory.hpp"
#include <memory>



std::map< std::string, std::shared_ptr<AbstractFactory> > CelestialFactory::factories;


CelestialFactory::CelestialFactory()
{
    registerFactory("Star", std::make_shared<StarFactory>());
    registerFactory("Planet", std::make_shared<PlanetFactory>());
    registerFactory("Moon", std::make_shared<MoonFactory>());
};

void CelestialFactory::registerFactory(std::string name, std::shared_ptr<AbstractFactory> type)
{
   factories[name] = type;
};

std::shared_ptr<AbstractFactory> CelestialFactory::getFactory(std::string name)
{
    return factories[name];
};
    
