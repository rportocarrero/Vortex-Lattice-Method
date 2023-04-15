#pragma once

#include <vector>

class InputGeometry
{
public:
  InputGeometry();
  ~InputGeometry();

  std::vector<double> m_chordLengths;
  std::vector<double> m_twists;
  std::vector<double> m_xCoords;
  std::vector<double> m_yCoords;
};
