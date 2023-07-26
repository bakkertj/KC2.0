#include <iostream>
#include "coroutine.h"

int main()
{
  auto coroTask = coro( 3 );
  std::cout << "coro() started\n";

  while( coroTask.resume()) 
  {
    std::cout << "coro() suspended\n";
  }

  std::cout << "coro() done\n";
}
