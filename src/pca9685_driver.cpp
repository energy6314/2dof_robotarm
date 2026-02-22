#include <Wire.h>
#include <Adafruit_MS_PWMServoDriver.h>

class PCA9685 {
public:
    PCA9685(uint8_t addr = 0x40) : pwm_driver(Adafruit_MS_PWMServoDriver(addr)) {}
    void begin() {
        pwm_driver.begin();
        pwm_driver.setPWMFreq(60);  // Set frequency to 60 Hz for servos
    }

    void set PWM(uint8_t channel, uint16_t on, uint16_t off) {
        pwm_driver.setPWM(channel, on, off);
    }

    void setAngle(uint8_t channel, float angle) {
        // Assuming angle is between 0 and 180
        float pulse = map(angle, 0, 180, MIN_PULSE, MAX_PULSE);
        setPWM(channel, 0, pulse);
    }

private:
    Adafruit_MS_PWMServoDriver pwm_driver;
    static const int MIN_PULSE = 150;  // Adjust these values as needed
    static const int MAX_PULSE = 600;
};

// Example Usage:
// PCA9685 servoDriver;
// servoDriver.begin();
// servoDriver.setAngle(0, 90); // Set angle of channel 0 to 90 degrees
