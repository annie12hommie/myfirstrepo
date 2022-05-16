//// no arg, no return 
//#include<iostream>
//using namespace std;
//void fn(void);
//int main()
//{
//	fn();
//}
//void fn()
//{
//	int a = 10;
//	cout<<a;
//}

// no arg but return
//#include<iostream>
//using namespace std;
//int fn(void);
//int main()
//{
//	int a;
//	a=fn();
//	cout<<a;
//}
//int fn()
//{
//	return(10);
//}


// arg, no return 
//#include<iostream>
//using namespace std;
//void fn(int);
//int main()
//{
//	int a=10;
//	fn(a);
//	return 0;
//}
//void fn(int x)
//{
//	cout<<x;
//}

// arg , return 
#include<iostream>
using namespace std;
int  fn(int);
int main()
{
	int a = 10,z;
	z=fn(a);
	cout<<z;
	return 0;
}
int fn(int x)

	int p;
	p=x*2;
	return (p);
}















