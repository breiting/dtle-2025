#include "TempSensor.hpp"

TempSensor::TempSensor(double temperature) : m_Temperature(temperature) {
}
double TempSensor::GetTemperature() const {
    return m_Temperature;
}
void TempSensor::SetTemperature(double temperature) {
    m_Temperature = temperature;
}
