#include "MoonFactory.hpp"
#include "Moon.hpp"
#include <memory>


std::shared_ptr<CelestialBase> MoonFactory::makeObject(xoroshiro128 rng)
{
    return std::make_shared<Moon>(rng);
};