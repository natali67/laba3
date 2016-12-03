#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
class shape
{
public:
	int l;
		shape(int ____l)
	{
		l=____l;
	};
	int getS();
	int getP();
};
class circle:
	public shape
{
public:
	circle(int r):
	  shape(r)
	  { };
	  float getS()
	  {
		  return 3.14*(l*l);
	 };
	 float getP()
	 {
		 return 2*3.14*l;
	 };
};
void main()
{
circle y(12);
cout<<"S="<<y.getS();
cout<<" ";
cout<<"P="<<y.getP();
system("pause");
}
