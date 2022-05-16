#include <iostream>
using namespace std;
void fun(); //func prototype
int main()
{
	fun(); // func call
	fun();
	return 0;
}
void fun()
{
	cout<<"Hello";
}

