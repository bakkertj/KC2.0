#include <chrono>
#include <thread>

void task( )
{
  // infinite loop
  while(1);
}

int main()
{
  // Add a stop token as the first parameter
  std::thread t( task );

  // sleep for 10 seconds
  std::this_thread::sleep_for(std::chrono::seconds(10));

  // signal the jthread to stop
 
  // join here to make sure it stops before we exit
  t.join();
}
