#include<iostream>
using namespace std;
class complex
{
	int real;

public:
	complex();
	complex(int);
	void display();
	complex operator+(complex&);	
};
complex::complex()
{
	real=0;
}
complex::complex(int r)
{
	this->real=r;
//	this->img=i;
}
void complex::display()
{
//	if(img>0)
	cout<<"complex number is "<<real<<endl;
//	else
//	cout<<"complex number is "<<real<<img<<"i"<<endl;
}
complex complex::operator+(complex & c)
{
	complex temp;
	temp.real=this->real + c.real;
//	temp.img=this->img + c.img;
	return temp;
}

 
int main()
{
	complex c1(1);
	complex c2(3);
	complex c3=c1+c2;
	c3.display();
}
