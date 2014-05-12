#include <UnitTest++.h>
#include "point2d.hpp"

SUITE (descirbe_point2d)
{ 
  Point2d karl;

  TEST(default_point_should_be_0_0)
  {
    CHECK_EQUAL(0,karl.get_x());
    CHECK_EQUAL(0,karl.get_y());

  }
}


int main() { return UnitTest::RunAllTests(); }
