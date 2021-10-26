#include "StarFactory.hpp"
#include "Star.hpp"
#include <memory>

std::shared_ptr<CelestialBase> StarFactory::makeObject(xoroshiro128 rng)
{
    return std::make_shared<Star>(rng);
};