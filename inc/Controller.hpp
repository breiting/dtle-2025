#pragma once

#include "Led.hpp"
#include "TempSensor.hpp"

class Controller {
   public:
    Controller(const TempSensor& sensor, Led& led, double lowThreshold, double highThreshold);

    void Update();

   private:
    // Put your private members here
};
