#include "SumExample.h"

namespace CommonAlgorithms
{
namespace Utility
{

SumExample::SumExample():
  sum_{0}
{};

void SumExample::operator()(const int value)
{
  sum_ += value;
}

} // namespace Utility
} // namespace CommonAlgorithms
