#pragma once

#include <vector>

class InputVortexDistribution
{
public:
  InputVortexDistribution();
  ~InputVortexDistribution();

  std::vector<double> m_vortexStrength;
  std::vector<double> m_xCoords;
  std::vector<double> m_yCoords;
};
