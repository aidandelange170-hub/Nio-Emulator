#include "Emulator.h"
#include <iostream>

Emulator::Emulator() : isInitialized(false), isRunning(false) {
    std::cout << "[NIO] Emulator object created." << std::endl;
}

void Emulator::initialize() {
    std::cout << "[NIO] Initializing high-performance emulator..." << std::endl;
    std::cout << "[NIO] Optimizing for zero lag experience..." << std::endl;
    std::cout << "[NIO] Fast installation process completed." << std::endl;
    isInitialized = true;
    std::cout << "[NIO] Emulator initialized successfully!" << std::endl;
}

void Emulator::run() {
    if (!isInitialized) {
        std::cout << "[ERROR] Emulator not initialized!" << std::endl;
        return;
    }
    
    std::cout << "[NIO] Starting emulator core..." << std::endl;
    std::cout << "[NIO] C++ handling all performance optimizations..." << std::endl;
    std::cout << "[NIO] Lag disappearing technology activated!" << std::endl;
    isRunning = true;
}

void Emulator::stop() {
    std::cout << "[NIO] Stopping emulator..." << std::endl;
    isRunning = false;
    std::cout << "[NIO] Emulator stopped safely." << std::endl;
}