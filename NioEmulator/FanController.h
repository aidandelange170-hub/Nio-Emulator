#ifndef FAN_CONTROLLER_H
#define FAN_CONTROLLER_H

class FanController {
public:
    FanController();
    bool activateFan();
    bool isFanAvailable();
    
private:
    bool fanPresent;
};

#endif