#include<iostream>
#include<string.h>
using namespace std;

class Student{
private:
 int roll_no;
 char name[35];
 
	class Address{
		 private:
		  int house_no;
		  char street[35];
		  char city[30];
		  char state[30];
		  char pincode[7];
		  
		 public:
		  void setAddress(int h, char *s, char *c, char *st, char *p){
		   house_no = h;
		   strcpy(street, s);
		   strcpy(city, c);
		   strcpy(state, st);
		   strcpy(pincode, p);
		  }
		  
		  void showAddress(){
		   cout << "\n" << house_no << endl;
		   cout << street << " " << city;
		   cout << " " << pincode << endl;
		   cout << state;
		  }
		 };
		 
		 Address add;
		 
		public:
		 void setRollNo(int roll){
		  roll_no = roll;
		 }
		 
		 void setName(char *n){
		  strcpy(name, n);
		 }
		 
		 void setAddress(int h, char *s, char *c, char *st, char *p){
		  add.setAddress(h,s,c,st,p);
		 }
		 
		 void showStudentData(){
		  cout << "STUDENT DATA: " << endl;
		  cout << name << " ";
		  cout << roll_no << " ";
		  add.showAddress();
		 }
};

int main(){
 Student S1;
 
 S1.setRollNo(101);
 S1.setName("Ram");
 S1.setAddress(252, "Railway Colony", "pune", "848101", "maharastra");
 S1.showStudentData();
 return 0;
}
