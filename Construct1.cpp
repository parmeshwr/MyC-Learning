
/*Example of construct restriction*/
#include <iostream>
using namespace std;

class Date{
	private:
		int x;
//		Date(int a);
//		Date(); //Construct can not be private
	protected:
		//Date(); //construct can not be protected
	public:
		Date create(int a);	
		void func();
		static Date dis(int d);	
};
 /*
Date::Date(){ //Construct must have definition part
	x = 0;	
} 
*/
inline Date Date::dis(int x){
	cout<<x<<" x \n";
}
Date Date::create(int x){
	cout<<x<<"\n";
}
void Date::func(){
	cout<<"this is public func\n";
}
int main( )
{
	Date d;
	d.create(5);
	d.func();
	
   return 0;
}
