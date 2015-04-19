
/*Example of construct overloading*/
#include <iostream>
using namespace std;
class date{
	public:
		
		 date(){
			cout<<"first\n";
		};
		date(int x){
			cout<<x<<" Second \n";
		};
		date(int a, int b){
			cout<<a<<b<<"  Third\n";
		};
};

int main(){
	date e,f,g,h;
	date d(5),a(10);
	date dd(4,5),aa(1,2);
}
