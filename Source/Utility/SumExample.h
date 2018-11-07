#ifndef UTILITY_SUM_EXAMPLE_H
#define UTILITY_SUM_EXAMPLE_H

namespace CommonAlgorithms
{
namespace Utility
{

class SumExample
{
  public:
    SumExample();

    void operator()(const int value);

    operator int() const
    {
      return sum_;
    }

  private:
    int sum_;
};

} // namespace Utility
} // namespace CommonAlgorithms

#endif // UTILITY_SUM_EXAMPLE_H
