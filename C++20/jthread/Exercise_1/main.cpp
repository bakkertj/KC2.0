#include <thread>

void task( )
{
  // infinite loop
  while(1);
}

int main()
{
  std::thread t( task );

  // exit without joining
  // or 
  // t.join();
}
