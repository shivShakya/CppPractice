#include<iostream>
#include<cmath>

using namespace std;

struct Point{
      int x,y;
};


float findAreaTrianlge(Point p1 , Point p2, Point p3){
       
        float area  = 0.5 * abs(p1.x* (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y));
        return area;
}

int main(){

    Point p1 = {2,5};
    Point p2 = {4,3};
    Point p3 = {6,7};

    float area = findAreaTrianlge(p1,p2,p3);

    cout << area <<endl;
      
      return 0;
}
