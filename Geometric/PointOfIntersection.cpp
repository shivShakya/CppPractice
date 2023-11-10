#include <iostream>
#include <utility> 

using namespace std;

struct Point {
    float x, y; 
};

pair<float, float> createLine(Point p1, Point p2) {
    float m = (p1.y - p2.y) / (p1.x - p2.x);
    float c = p1.y - m * p1.x;

    pair<float, float> lineParams(m, c);

    return lineParams;
}




