#include <iostream>  
using namespace std;  
template<class X,class Y> 
void temp(X a,Y b){
	cout<<"value of a is "<<a<<endl;
	cout<<"value of b is "<<b<<endl;
}

template<class T>
T add(T &a,T &b){
	T result  = a+b;
	return result;
}
int main(){
	temp(15,55.03);
	int a=15;
	int b = 45;
	cout<<"sum of a and b is "<<add(a,b)<<endl;
}
