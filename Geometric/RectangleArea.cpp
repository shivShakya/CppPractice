#include<iostream>
#include<cmath>

using namespace std;


struct Point{
     int x,y;
};


int findAreaOfRect(Point p1 ,Point p2){
       
      int length = abs(p1.x - p2.x);
      int width = abs(p1.y - p2.y);

      int area = length * width;
      return area ,length;
}


int main(){

      Point p1 = {1,1};
      Point p2 = {4,3};



      int area  = findAreaOfRect(p1 ,p2);

      cout << area << endl; 
}
