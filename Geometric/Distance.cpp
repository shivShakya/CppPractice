#include<iostream>
#include<cmath>
using namespace std;

class Point{
    public: 
        int x ;
        int y ;

        Point(int x , int y){
              this->x = x ;
              this->y = y;
        }


        float findDistance(Point p2){
              
              float distance  = sqrt(pow((this->x - p2.x),2) + pow((this->y - p2.y),2));
              return distance;
        }
};

int main() {
       
        Point p1(2,5);
        Point p2(4,6);
        float p =  p1.findDistance(p2);
        cout << "The eucliedean distance between two points is :  "  << p << endl; 
        return 0;
}