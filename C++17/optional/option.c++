#include <optional>
#include <string>
#include <iostream>

std::optional<int> asInt( const std::string& s)
{
  try
  {
    return std::atoi(s);
  }
  catch(...)
  {
    return std::nullopt;
  }
}

int main( )
{
  for( auto s : {"42", "  077", "hello", "0x33"} ) 
  { 
    // try to convert s to an int and print the results if possible
    std::optional<int> oi = asInt(s);
    if( oi )
    {
      std::cout << "convert '" << s << "' to int: " << *oi << "\n";
    }
    else
    {
      std::cout << "can't convert '" << s << "' to int\n";
    }
  }
}
