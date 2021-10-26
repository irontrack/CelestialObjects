#ifndef CELESTIALFACTORY_HPP
#define CELESTIALFACTORY_HPP

#include "CelestialBase.hpp"
#include "AbstractFactory.hpp"
#include <memory>
#include <map>

class CelestialFactory
{
    public:
        CelestialFactory();
        static void registerFactory(std::string name, std::shared_ptr<AbstractFactory> type);
        static std::shared_ptr<AbstractFactory> getFactory(std::string name);
    private:
        static std::map< std::string, std::shared_ptr<AbstractFactory> > factories;
};

#endif //CELESTIALFACTORY_HPP