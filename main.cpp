#include <iostream>

#include "assignment/insertion_sort.hpp"

#include "assignment/heap_sort.hpp"

#include "assignment/partitioning.hpp"
#include "assignment/quick_sort.hpp"

#include "assignment/merging.hpp"
#include "assignment/merge_sort.hpp"

using namespace std;
using namespace assignment;

int main() {

  std::vector<int> arr = {-39, -79, 25, 4, 13};

  HeapSort sort;
  sort.Sort(arr);
  for  (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
