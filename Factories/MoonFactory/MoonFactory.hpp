#ifndef MOONFACTORY_HPP
#define MOONFACTORY_HPP

#include "CelestialBase.hpp"
#include "AbstractFactory.hpp"
#include "xoroshiro128plusplus.hpp"
#include <memory>

class MoonFactory  : public AbstractFactory
{
    public:
        virtual std::shared_ptr<CelestialBase> makeObject(xoroshiro128 rng);

};

#endif //MOONFACTORY_HPP