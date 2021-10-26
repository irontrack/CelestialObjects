#ifndef ABSTRACTFACTORY_HPP
#define ABSTRACTFACTORY_HPP

#include "CelestialBase.hpp"
#include "xoroshiro128plusplus.hpp"
#include <memory>

class AbstractFactory
{
    public:
        AbstractFactory(){};
        virtual std::shared_ptr<CelestialBase> makeObject(xoroshiro128 rng) = 0;

};

#endif //ABSTRACTFACTORY_HPP