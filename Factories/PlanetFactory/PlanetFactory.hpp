#ifndef PLANETFACTORY_HPP
#define PLANETFACTORY_HPP

#include "CelestialBase.hpp"
#include "AbstractFactory.hpp"
#include "xoroshiro128plusplus.hpp"
#include <memory>

class PlanetFactory : public AbstractFactory
{
    public:

        virtual std::shared_ptr<CelestialBase> makeObject(xoroshiro128 rng);

};

#endif //PLANETFACTORY_HPP