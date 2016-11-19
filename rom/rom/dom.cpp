#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class krug
{
public:
     int x;
	 int getS()
	 {
	  return 3.14*(x*x);
	 }
	 int getP()
	 {
		 return 2*3.14*x;
	 }

	 
};
void main()
{
krug y;
y.x=12;
cout<<"S="<<y.getS();
cout<<" ";
cout<<"P="<<y.getP();
system("pause");
}
	