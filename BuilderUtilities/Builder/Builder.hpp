#ifndef BUILDER_HPP
#define BUILDER_HPP
#include "xoroshiro128plusplus.hpp"
#include "CelestialFactory.hpp"
#include "CelestialBase.hpp"

struct specitifer
{
    std::string type;
    std::vector<specifier> children;
};

class Builder 
{
    public:
        Builder( specifier spec );
        std::shared_ptr<CelestialBase> getSystem(); // return the system
    private:
        void addElement( specifier spec, 
            xoroshiro128 rng, 
            std::shared_ptr<CelestialBase> parent); // recursively  build the system
        std::shared_ptr<CelestialBase> m_system;
        xoroshiro128 m_rng;

};

#endif //BUILDER_HPP