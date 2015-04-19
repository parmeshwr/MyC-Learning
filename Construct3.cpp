
/*Example of private construct */
#include <iostream>
using namespace std;
class Point
{
public:
  static inline Point Polar(double, double){//Point in IMP here
  	cout<<" test\n";
  };
private:
  Point(double,double){
  };
};

int main(){
	Point *p1;
	p1->Polar(4,5);
//	Point p2; //We can not create object of this class
}
