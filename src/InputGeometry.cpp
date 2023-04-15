#include "InputGeometry.h"

InputGeometry::InputGeometry()
{
  // Initialize default values
}

InputGeometry::InputGeometry(const std::vector<double> &chordLengths, const std::vector<double> &twistAngles, const std::vector<double> &airfoilCoordinates)
  : m_chordLengths(chordLengths),
    m_twistAngles(twistAngles),
    m_airfoilCoordinates(airfoilCoordinates)
{
}

std::vector<double> InputGeometry::chordLengths() const
{
  return m_chordLengths;
}

std::vector<double> InputGeometry::twistAngles() const
{
  return m_twistAngles;
}

std::vector<double> InputGeometry::airfoilCoordinates() const
{
  return m_airfoilCoordinates;
}

void InputGeometry::setChordLengths(const std::vector<double> &chordLengths)
{
  m_chordLengths = chordLengths;
}

void InputGeometry::setTwistAngles(const std::vector<double> &twistAngles)
{
  m_twistAngles = twistAngles;
}

void InputGeometry::setAirfoilCoordinates(const std::vector<double> &airfoilCoordinates)
{
  m_airfoilCoordinates = airfoilCoordinates;
}
