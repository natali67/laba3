#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class pryamoug{
public:
     int a,b;
	 int getS(){
	  return a*b;
	 }
	 int getP(){
		 return 2*(a+b);
	 }

	 
};
void main()
{
pryamoug A;
A.a=2;
A.b=12;
cout<<A.getS();
cout<<A.getP();
system("pause");
}
	 
