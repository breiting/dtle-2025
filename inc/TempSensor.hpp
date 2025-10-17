#pragma once

/**
 * \brief A simulated temperature sensor
 */
class TempSensor {
   public:
    TempSensor(double temperature);

    double GetTemperature() const;
    void SetTemperature(double temperature);

   private:
    double m_Temperature;
};
