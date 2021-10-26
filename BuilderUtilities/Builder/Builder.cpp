#include "Builder.hpp"
#include "CelestialFactory.hpp"


Builder::Builder( specifier spec ): m_rng{0,1}
{       
        CelestialFactory f;
        m_system = f.getFactory(spec.type)->makeObject(m_rng);
        addElement(spec.children, m_system);
};

Builder::getSystem()
{
    return m_system;
}

Builder::addElement(std::vector<specifier> children, 
            std::shared_ptr<CelestialBase> parent)
{
    for(auto child: children)
    {
        parent->addChild(child.type);
        addElement(child.children, parent->getChildren().last)
    }

}