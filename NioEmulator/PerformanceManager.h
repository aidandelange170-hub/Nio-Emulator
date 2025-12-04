#ifndef PERFORMANCE_MANAGER_H
#define PERFORMANCE_MANAGER_H

class PerformanceManager {
public:
    PerformanceManager();
    void optimizePerformance();
    void handleLag();
    void ensureSmoothExperience();
    
private:
    int performanceLevel;
    bool lagEliminated;
};

#endif