#ifndef _TIME_LOOP_MILLISECS_
#define _TIME_LOOP_MILLISECS_

#include <chrono>
#include <iostream>

void TimedLoop()
{
      auto t0 = std::chrono::high_resolution_clock::now();

      while(true)
      {
          std::cout << "elapsed: " << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - t0).count() << "ms" << std::endl;
      }
}

#endif
