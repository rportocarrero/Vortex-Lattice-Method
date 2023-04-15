#ifndef INPUT_FREE_STREAM_H
#define INPUT_FREE_STREAM_H

class InputFreeStream {
 public:
  InputFreeStream();
  void setVelocityMagnitude(double velocityMagnitude);
  double getVelocityMagnitude() const;
  void setVelocityDirection(double velocityDirection);
  double getVelocityDirection() const;
  double getVelocityX() const;
  double getVelocityY() const;
  double getVelocityZ() const;
  void setTotalPressure(double totalPressure);
  double getTotalPressure() const;
  double getStaticPressure() const;
  double getDynamicPressure() const;
  double getDensity() const;

 private:
  double velocityMagnitude_;
  double velocityDirection_;
  double totalPressure_;
};

#endif  // INPUT_FREE_STREAM_H
