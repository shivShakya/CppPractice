#include<iostream>
using namespace std;

struct Point{
       int x ,y;
};


int orientation(Point p , Point q , Point r){
      int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
      
      if(val == 0) return 0 ;
      return(val > 0) 1 : 2;
}


bool isIntersection(Point p1 , Point p2 ,Point q1 , Point q2){
        
        int o1 = orientation(p1,q1,p2);
        int o2 = 
}



