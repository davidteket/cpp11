#ifndef _HELLO_WORLD_WITH_TWO_THREADS_
#define _HELLO_WORLD_WITH_TWO_THREADS_

#include <iostream>
#include <thread>
#include <chrono>

#include "hello_world_with_two_threads.h"

void Hello()
{
    std::this_thread::sleep_for(std::chrono::milliseconds{1000});
    std::cout << "Hello, ";
}

void World()
{
    std::this_thread::sleep_for(std::chrono::milliseconds{1000});
    std::cout << "World!" << std::endl;
}

// HU:
// Egy másodperc várakozás minden üzenet között.
//
// EN:
// One second delay between messages.
//
void Threads()
{
    std::cout << "Running on 2 threads. Press ^C to interrupt." << std::endl;
    std::cout << "----------------------------------" << std::endl;

    while (true)
    {
        std::thread helloThread(Hello);
        std::thread worldThread(World);

        helloThread.join();
        worldThread.join();
    }
}

#endif
