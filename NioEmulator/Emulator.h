#ifndef EMULATOR_H
#define EMULATOR_H

class Emulator {
public:
    Emulator();
    void initialize();
    void run();
    void stop();
    
private:
    bool isInitialized;
    bool isRunning;
};

#endif