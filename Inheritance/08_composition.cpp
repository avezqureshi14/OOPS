#include <iostream>
using namespace std;
class Engine {
public:
    void start() {
         cout << "Engine started" <<  endl;
    }

    void stop() {
         cout << "Engine stopped" <<  endl;
    }
};

class Car {
private:
    Engine engine;  // Composition: Car contains an Engine as a member

public:
    void startCar() {
        engine.start();
         cout << "Car started" <<  endl;
    }

    void stopCar() {
        engine.stop();
         cout << "Car stopped" <<  endl;
    }
};

int main() {
    Car car;
    car.startCar();
    car.stopCar();

    return 0;
}
