#include <iomanip>
#include <iostream>
#include <vector>

template <typename T>
void vec_stats(const std::vector<T>& vec)
{
  std::cout << std::left << std::setw(10) << "Size: " << vec.size() << '\t'
            << "Capacity: " << vec.capacity() << '\t'
            << "&Front: " << vec.data() << '\n';
}

auto main([[maybe_unused]] const int argc,
          [[maybe_unused]] const char* const* const argv) -> int
{
  std::vector<int> vec;
  for ( std::size_t i {0}; i != 130; ++i ) {
    vec.emplace_back();
    vec_stats(vec);
  }

  return 0;
}
