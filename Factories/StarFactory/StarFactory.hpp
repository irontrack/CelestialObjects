#ifndef STARFACTORY_HPP
#define STARFACTORY_HPP

#include "CelestialBase.hpp"
#include "AbstractFactory.hpp"
#include "xoroshiro128plusplus.hpp"
#include <memory>

class StarFactory: public AbstractFactory
{
    public:
        std::shared_ptr<CelestialBase> makeObject(xoroshiro128 rng);

};

#endif //STARFACTORY_HPP