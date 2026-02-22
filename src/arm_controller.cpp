#include <iostream>

class ArmController {
public:
    ArmController() : shoulder_angle(0), elbow_angle(0) {}

    void setShoulderAngle(double angle) {
        shoulder_angle = angle;
        std::cout << "Shoulder angle set to: " << shoulder_angle << " degrees" << std::endl;
    }

    void setElbowAngle(double angle) {
        elbow_angle = angle;
        std::cout << "Elbow angle set to: " << elbow_angle << " degrees" << std::endl;
    }

    void moveToPosition(double shoulder, double elbow) {
        setShoulderAngle(shoulder);
        setElbowAngle(elbow);
        // Logic to move the arm would go here.
    }

private:
    double shoulder_angle;
    double elbow_angle;
};

int main() {
    ArmController arm;
    arm.moveToPosition(45, 30); // Example movement
    return 0;
}