#include <gtest/gtest.h>
#include "InputFreeStream.h"

TEST(InputFreeStream, Constructor) {
  InputFreeStream ifs;
  EXPECT_EQ(ifs.getVelocityMagnitude(), 0);
  EXPECT_EQ(ifs.getVelocityDirection(), 0);
}

TEST(InputFreeStream, SetVelocityMagnitude) {
  InputFreeStream ifs;
  ifs.setVelocityMagnitude(100);
  EXPECT_EQ(ifs.getVelocityMagnitude(), 100);
}

TEST(InputFreeStream, SetVelocityDirection) {
  InputFreeStream ifs;
  ifs.setVelocityDirection(30);
  EXPECT_EQ(ifs.getVelocityDirection(), 30);
}

TEST(InputFreeStream, GetVelocityX) {
  InputFreeStream ifs;
  ifs.setVelocityMagnitude(100);
  ifs.setVelocityDirection(30);
  EXPECT_NEAR(ifs.getVelocityX(), 50, 0.1);
}

TEST(InputFreeStream, GetVelocityY) {
  InputFreeStream ifs;
  ifs.setVelocityMagnitude(100);
  ifs.setVelocityDirection(30);
  EXPECT_NEAR(ifs.getVelocityY(), 86.6, 0.1);
}

TEST(InputFreeStream, GetVelocityZ) {
  InputFreeStream ifs;
  ifs.setVelocityMagnitude(100);
  ifs.setVelocityDirection(30);
  EXPECT_NEAR(ifs.getVelocityZ(), 0, 0.1);
}

TEST(InputFreeStream, GetTotalPressure) {
  InputFreeStream ifs;
  ifs.setVelocityMagnitude(100);
  ifs.setTotalPressure(1000);
  EXPECT_EQ(ifs.getTotalPressure(), 1000);
}

TEST(InputFreeStream, GetStaticPressure) {
  InputFreeStream ifs;
  ifs.setVelocityMagnitude(100);
  ifs.setTotalPressure(1000);
  EXPECT_NEAR(ifs.getStaticPressure(), 500, 0.1);
}

TEST(InputFreeStream, GetDynamicPressure) {
  InputFreeStream ifs;
  ifs.setVelocityMagnitude(100);
  EXPECT_NEAR(ifs.getDynamicPressure(), 2500, 0.1);
}

TEST(InputFreeStream, GetDensity) {
  InputFreeStream ifs;
  ifs.setVelocityMagnitude(100);
  ifs.setTotalPressure(1000);
  EXPECT_NEAR(ifs.getDensity(), 1.225, 0.1);
}
