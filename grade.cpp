#include<iostream>
using namespace std;
int main()
{
int marks;
cout<<"enter marks"<<endl;
cin>>marks;
if(marks>=80)
{
	cout<<"grade A"<<endl;
}
else if(marks<80&&marks>=70)
{	cout<<"grade B"<<endl;}
else if(marks<70&&marks>=60)
{cout<<"grade C"<<endl;}
else if(marks<60&&marks>=50)
{
	cout<<"grade D"<<endl;
}
else if(marks<50)
{
	cout<<"Fail"<<endl;
}
}