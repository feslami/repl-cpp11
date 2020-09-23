
#include <chrono>
#include <thread>
#include <iostream>

using namespace std::literals::chrono_literals;

constexpr auto timeToWriteToTapeDeck = 1s;

void sendMsg(const std::string& message)
{
    std::this_thread::sleep_for(timeToWriteToTapeDeck);
    std::cout << message << std::endl;
}