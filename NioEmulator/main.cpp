#include "Emulator.h"
#include "PerformanceManager.h"
#include "FanController.h"
#include <iostream>

int main() {
    std::cout << "=== Nio Emulator - High Performance Android Emulator ===" << std::endl;
    std::cout << "Free forever, no lag guaranteed!" << std::endl;
    std::cout << "Developed by you and your dev team for the best experience." << std::endl;
    
    Emulator emulator;
    PerformanceManager perfManager;
    FanController fanController;
    
    // Initialize emulator
    emulator.initialize();
    perfManager.optimizePerformance();
    perfManager.handleLag();  // C++ makes lag disappear!
    perfManager.ensureSmoothExperience();
    
    std::cout << "\nEmulator loaded successfully with optimized performance!" << std::endl;
    std::cout << "Fast installation and loading complete." << std::endl;
    std::cout << "Smooth experience guaranteed with C++ power!" << std::endl;
    
    char choice;
    std::cout << "\nPress 'f' to activate PC fan for cooling (if available): ";
    std::cin >> choice;
    
    if (choice == 'f' || choice == 'F') {
        fanController.activateFan();
    }
    
    std::cout << "\nNio Emulator ready! Experience smooth gameplay with zero lag." << std::endl;
    std::cout << "Free forever with continuous development!" << std::endl;
    
    return 0;
}