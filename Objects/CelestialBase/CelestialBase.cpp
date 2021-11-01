#include "CelestialBase.hpp"

CelestialBase::CelestialBase( xoroshiro128 rng  ): m_rng(rng)
{

};

xoroshiro128* CelestialBase::getRng(){return &m_rng;};

std::vector< std::shared_ptr<CelestialBase> >& CelestialBase::getChildren()
{
    return children;
};