#include<iostream>
#include<string>
using namespace std;

struct Distance
{
	int feet;
	float inches;
};

struct Triangle
{
	Distance base;
	Distance height;	
};

float TriangleArea(Triangle t)
{
	return 0.5*((t.base.feet) + (t.base.inches / 12)) * ((t.height.feet) + (t.height.inches / 12));
}

int main()
{
	Triangle t;
	float tarea;

	t.base = { 9, 7.5 };
	t.height = { 11, 6.0 };

	cout<<"Area : " << TriangleArea(t);


	cout << endl;
	system("echo Thanxx");
	system("pause>0");
}