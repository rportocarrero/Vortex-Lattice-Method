#include "VLMSolver.h"

VLMSolver::VLMSolver(const InputGeometry &geometry, const InputFreeStream &freeStream, const InputVortexDistribution &vortexDistribution)
  : m_geometry(geometry),
    m_freeStream(freeStream),
    m_vortexDistribution(vortexDistribution)
{
}

VLMSolver::~VLMSolver()
{
}

void VLMSolver::solve()
{
  // Your implementation here
}
