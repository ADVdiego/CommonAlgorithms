/*
 *  Distributed under the Boost Software License, Version 1.0.
 */

#include "UnitTests/catch.hpp"
#include "Utility/SumExample.h"

namespace CommonAlgorithms
{
namespace Utility
{

TEST_CASE("constructor works", "[SumExample]")
{
  SumExample sum_example {};
  CHECK(true);
}

TEST_CASE("Sum works", "[SumExample]")
{
  SumExample sum_example {};
  sum_example(5);

  const int sum {sum_example};
  CHECK(sum == 5);
}

TEST_CASE("Sum works multiple times", "[SumExample]")
{
  SumExample sum_example {};

  auto sum = 0;
  for (auto i = 0; i < 10; ++i)
  {
    sum_example(i);
    sum += i;
  }

  CHECK(static_cast<int>(sum_example) == sum);
}

} // namespace Utility
} // namespace CommonAlgorithms
