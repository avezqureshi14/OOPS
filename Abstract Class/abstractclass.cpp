#include <iostream>
using namespace std;
class Shape {
public:
    //this is partial implementation 
    virtual double calculateArea() = 0; // Pure virtual function for calculating area

    //this function is helping by getting call for each derived class promoting code reusability
    void display() {
        std::cout << "This is a shape." << std::endl;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double calculateArea() override {
        return width * height;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Shape* shape1 = new Rectangle(5.0, 3.0);
    shape1->display();
    std::cout << "Area: " << shape1->calculateArea() << std::endl;

    Shape* shape2 = new Circle(2.5);
    shape2->display();
    std::cout << "Area: " << shape2->calculateArea() << std::endl;

    // Rectangle r1(5.0,3.0);
    // r1.display();
    // cout<<r1.calculateArea();

    return 0;
}
