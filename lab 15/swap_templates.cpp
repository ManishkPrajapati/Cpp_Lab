#include <iostream>  
using namespace std;  


template<class T>
int swa(T &a,T &b){
	T c;
	c=a;
	a=b;
	b=c;
	
	return 0;
}
int main(){
	int a=15;
	int b = 45;
	swa(a,b);
	cout<<"swap of a and b is "<<a<<"   "<<b;
}
