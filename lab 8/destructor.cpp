#include<iostream>
using namespace std;
#include<string.h>

class str{
	 char* ptr;
	 int len;
	public:
		void show();
		str(char *);
		~ str();
		
};

str::str(char * ch){
	len = strlen(ch);
	ptr = new char[len+1];
	strcpy(ptr,ch);
}

str:: ~str(){
	cout<<"destructor is called "<< endl;
	if(ptr)
	delete[] ptr;
	ptr = NULL;
}
void str::show(){
	cout<<"length is "<< len<<endl;
	cout<<"string is "<< ptr<<endl;
} 

int main(){
	str d("cdac ");
	d.show();
	str d1(d);
	d1.show();
	d1.~str();
	d.show();
}
	
