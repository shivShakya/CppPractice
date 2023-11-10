#include <iostream>
#include <cmath>
using namespace std;

class Point {
public:
    int x;
    int y;

    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    Point Rotation(int x, int y, int theta) {
        double theta_radians = theta * M_PI / 180.0; 
        int x_new = x * cos(theta_radians) - y * sin(theta_radians);
        int y_new = x * sin(theta_radians) + y * cos(theta_radians);

        return Point(x_new, y_new);
    }
};

int main() {
    Point p(2, 5);
    Point p_new = p.Rotation(2, 5, 30);
    cout << "Rotated Point: (" << p_new.x << ", " << p_new.y << ")" << endl;

    return 0;
}
