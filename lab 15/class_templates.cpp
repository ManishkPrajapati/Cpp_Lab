#include <iostream>  
using namespace std; 

template <class T>
class sub{
	public:
		T a=10;
		T b=15;
		void dif(){
			cout<<"sum of a and b is "<<a-b<<std::endl;
		}
};

int main(){
	sub<int> d;
	d.dif();
}
