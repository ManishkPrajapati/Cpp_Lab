#include<iostream>  
#include<vector>  
using namespace std;  
int main()  
{  
	int n;
	cout<<"enter number of value"<<endl;
	cin>>n;
    vector<int> v;
	int a; 
for(int i=1; i<=n;i++){
	cout<<"enter number : "<<i<<endl;
	cin>>a;
	v.push_back(a);  
	}
    for(int i=0;i<v.size();i++)  
    cout<<v[i];
	v.pop_back();  
     for(int i=0;i<v.size();i++)  
    cout<<v[i];
}  
