#include<iostream>
using namespace std;

struct Point{
      int x,y;
};


float slope(Point p1 ,Point p2){

        float slope = (p2.y - p1.y)/(p2.x - p1.x) ;
        return slope;
}

int main(){
      Point p1 = {2,5};
      Point p2 = {6,7};
      float s = slope(p1 ,p2);   
      cout << s << endl;
      return 0;
}