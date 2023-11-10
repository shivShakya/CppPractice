#include<iostream>
#include<cmath>

using namespace std;

struct Point{
      int x , y ;
};


bool areCollinear( Point p , Point q ,Point r){
        
        int crossProd = (r.x - q.x)*(q.y -p.y) - (r.y - q.y)*(q.x - p.x);

        if(crossProd == 0){
              return true;
        }  
        return false;      
}

int main(){

      Point p1 = {0,0};
      Point p2 = {1,25};
      Point p3 = {2,0};

      bool val = areCollinear(p1,p2,p3);

      cout << val << endl;
} 