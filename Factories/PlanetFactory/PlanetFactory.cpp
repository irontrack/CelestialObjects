#include "PlanetFactory.hpp"
#include "Planet.hpp"
#include <memory>

std::shared_ptr<CelestialBase> PlanetFactory::makeObject(xoroshiro128 rng)
{
    return std::make_shared<Planet>(rng);
};