#include <gtest/gtest.h>

#include <Controller.hpp>
#include <Led.hpp>
#include <TempSensor.hpp>

TEST(TestDtle, FirstTest) {
    TempSensor tempSensor(25.2);
    Led led;

    // initially the LED must be switched off
    EXPECT_EQ(led.GetColor(), Led::OFF);

    Controller controller(tempSensor, led, 20.1, 30.4);

    controller.Update();
    EXPECT_EQ(led.GetColor(), Led::GREEN);
}
