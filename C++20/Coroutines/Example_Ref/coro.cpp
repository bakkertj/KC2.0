#include <iostream>
#include "coroutine.h"

int main()
{
  auto coroTask = coro(3);     // Clang is now smart enough to not allow this

  std::cout << "coro(3)\n";

  while (coroTask.resume()) {         
    std::cout << "coro() suspended\n";
  }

  std::cout << "coro() done\n";
}
