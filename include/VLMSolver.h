#ifndef VLMSOLVER_H
#define VLMSOLVER_H

#include "InputGeometry.h"
#include "InputFreeStream.h"
#include "InputVortexDistribution.h"

class VLMSolver {
public:
  VLMSolver(const InputGeometry &geometry, const InputFreeStream &freeStream, const InputVortexDistribution &vortexDistribution);
  ~VLMSolver();

  void solve();

private:
  InputGeometry m_geometry;
  InputFreeStream m_freeStream;
  InputVortexDistribution m_vortexDistribution;
};

#endif // VLMSOLVER_H
