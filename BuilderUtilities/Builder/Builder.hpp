#ifndef BUILDER_HPP
#define BUILDER_HPP
#include "xoroshiro128plusplus.hpp"
#include "CelestialFactory.hpp"
#include "CelestialBase.hpp"

struct specifier
{
    specifier(std::string s):type(s){};
    specifier(std::string s, std::vector<specifier> c): type(s), children(c){};
    std::string type;
    std::vector<specifier> children;

};

class Builder 
{
    public:
        Builder( specifier spec );
        std::shared_ptr<CelestialBase> getSystem(); // return the system
    private:
        void build( std::vector<specifier> spec, 
            std::shared_ptr<CelestialBase> parent); // recursively  build the system
        std::shared_ptr<CelestialBase> m_system;
        xoroshiro128 m_rng;

};

#endif //BUILDER_HPP