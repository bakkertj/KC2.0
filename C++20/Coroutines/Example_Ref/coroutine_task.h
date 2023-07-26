//********************************************************
// The following code example is taken from the book
//  C++20 - The Complete Guide
//  by Nicolai M. Josuttis (www.josuttis.com)
//  http://www.cppstd20.com
//
// The code is licensed under a
//  Creative Commons Attribution 4.0 International License
//  http://creativecommons.org/licenses/by/4.0/
//********************************************************


#include <coroutine>

// coroutine interface to deal with a simple task
// - providing resume() to resume the coroutine
class [[nodiscard]] CoroTask 
{
 public:
  struct promise_type;    
  using CoroHdl = std::coroutine_handle<promise_type>;

 private:
  CoroHdl hdl;            

 public:

  CoroTask(auto h)
   : hdl{h} 
  {             
  }

  ~CoroTask() 
  {
    if (hdl) 
    {
      hdl.destroy();      
    }
  }

  CoroTask(const CoroTask&) = delete;
  CoroTask& operator=(const CoroTask&) = delete;

  // API to resume the coroutine
  // - returns whether there is still something to process
  bool resume() const 
  {
    if (!hdl || hdl.done()) 
    {
      return false;       
    }
    hdl.resume();         
    return !hdl.done();
  }
};

#include "corotaskpromise.hpp"   // definition of promise_type


