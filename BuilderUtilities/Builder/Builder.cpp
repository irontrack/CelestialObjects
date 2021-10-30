#include "Builder.hpp"
#include "CelestialFactory.hpp"


Builder::Builder( specifier spec ): m_rng{0,1}
{       
        CelestialFactory f;
        m_system = f.getFactory(spec.type)->makeObject(m_rng);
        build(spec.children, m_system);
};

std::shared_ptr<CelestialBase> Builder::getSystem()
{
    return m_system;
}

void Builder::build(std::vector<specifier> children, 
            std::shared_ptr<CelestialBase> parent)
{
    for(auto child: children)
    {
        parent->addChild(child.type);
        build(child.children, parent->getChildren().back());
    }

}