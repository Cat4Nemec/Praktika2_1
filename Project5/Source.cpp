#include <iostream>
class Road {
public:
    int width;
    double length;
    Road();
};
Road::Road() {
    width = 4;
    length = 10;
};
int main() {
    Road road;
    std::cout << "Before Access: \n";
    std::cout << road.length << " " << road.width;
    road.length = 60;
    road.width = 3;
    std::cout << "\n Auto Access: \n";
    std::cout << road.length << " " << road.width;
}