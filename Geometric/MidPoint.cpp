#include <iostream>
using namespace std;

struct Point{
      float x,y;
};


Point findMid(Point p1, Point p2){
      
        float midX =  (p1.x + p2.x)/2;
        float midY = (p2.y + p2.y)/2;

        Point p = {midX,midY};

        return p;
}


int main(){
     
      Point p1 = {2,3};
      Point p2 = {3,4};

      Point mid = findMid(p1,p2);

      cout << mid.x << " & " << mid.y << endl;
}