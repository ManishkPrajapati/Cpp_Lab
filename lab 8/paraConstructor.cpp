#include<iostream>
using namespace std;
class calender{
	int dd,mm,yy;
	public:
		calender(int , int, int);
		void display()
		{
			cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};
calender :: calender(int d, int m, int y)
{
		dd=d;
		yy=y;
		mm=m;		
}


int main()
{
	calender s1(10,5,2020);
	s1.display();
	calender s2(5,9,2024);
	s2.display();
}
