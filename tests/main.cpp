#include <UnitTest++.h>
#include "../source/point2d.hpp"

SUITE (descirbe_point2d)
{

  TEST(default_point_should_be_0_0)
  {
    CHECK_EQUAL(0,288);
  }
}


int main() { return UnitTest::RunAllTests(); }
