#include <iostream>
#include "coroutine_task.h"

CoroutineTask coro( int max )
{
  std::cout <<"CORO: "<< max << " start " << std::endl;

  for( int val = 0; val <= max; val++ )
  {
    std::cout << "	CORO " << val << "/" << max << "\n";
    co_await std::suspend_always{};
  }

  std::cout << "CORO: " << max << "end\n";
}
