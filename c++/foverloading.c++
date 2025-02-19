#include <iostream>
using namespace std;
class Shape {
public:
    float area(float base, float height) {
        return 0.5 * base * height;
    }
    float area(float radius) {
        const float pi = 3.14;
        return pi * radius * radius;
    }
};
int main() {
    Shape myarea;
    float base, height, radius;
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << myarea.area(base, height) << "\n";
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle: " << myarea.area(radius) << "\n";
    return 0;
}
