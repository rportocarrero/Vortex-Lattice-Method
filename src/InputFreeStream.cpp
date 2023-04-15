#include "InputFreeStream.h"
#include <cmath>

constexpr double kPi = 3.14159265358979323846;
constexpr double kRho = 1.225;
constexpr double kGamma = 1.4;

InputFreeStream::InputFreeStream()
    : velocityMagnitude_{0.0},
      velocityDirection_{0.0},
      totalPressure_{0.0} {}

void InputFreeStream::setVelocityMagnitude(double velocityMagnitude) {
  velocityMagnitude_ = velocityMagnitude;
}

double InputFreeStream::getVelocityMagnitude() const {
  return velocityMagnitude_;
}

void InputFreeStream::setVelocityDirection(double velocityDirection) {
  velocityDirection_ = velocityDirection;
}

double InputFreeStream::getVelocityDirection() const {
  return velocityDirection_;
}

double InputFreeStream::getVelocityX() const {
  return velocityMagnitude_ * cos(velocityDirection_ * kPi / 180.0);
}

double InputFreeStream::getVelocityY() const {
  return velocityMagnitude_ * sin(velocityDirection_ * kPi / 180.0);
}

double InputFreeStream::getVelocityZ() const {
  return 0.0;
}

void InputFreeStream::setTotalPressure(double totalPressure) {
  totalPressure_ = totalPressure;
}

double InputFreeStream::getTotalPressure() const {
  return totalPressure_;
}

double InputFreeStream::getStaticPressure() const {
  return totalPressure_ / pow(kRho / kGamma, kGamma);
}

double InputFreeStream::getDynamicPressure() const {
  return 0.5 * kRho * pow(velocityMagnitude_, 2);
}

double InputFreeStream::getDensity() const {
  return kRho;
}
