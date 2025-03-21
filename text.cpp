


#include <iostream>
#include <thread>
#include <chrono>

int main() {
    const char spinner[] = {'-', '\\', '|', '/'};
    while (true) {
        for (int i = 0; i < 4; ++i) {
            std::cout << "\r" << spinner[i] << " Loading...";
            std::cout.flush();
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
    }
    return 0;
}




