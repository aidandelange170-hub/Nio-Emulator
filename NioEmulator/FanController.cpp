#include "FanController.h"
#include <iostream>

FanController::FanController() : fanPresent(true) {
    std::cout << "[NIO] Fan controller initialized." << std::endl;
}

bool FanController::isFanAvailable() {
    // In a real implementation, this would check for actual fan presence
    return fanPresent;
}

bool FanController::activateFan() {
    if (isFanAvailable()) {
        std::cout << "[NIO] Activating PC cooling fan..." << std::endl;
        std::cout << "[NIO] Fan spinning at high speed for optimal cooling!" << std::endl;
        std::cout << "[NIO] Keeping your system cool during intense gaming sessions." << std::endl;
        return true;
    } else {
        std::cout << "[NIO] No fan detected on this system." << std::endl;
        return false;
    }
}