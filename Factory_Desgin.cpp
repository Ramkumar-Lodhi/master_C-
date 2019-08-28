#include<iostream>
using namespaces std;
class Computer
{
	public:
		void run()=0;
		void stop()=0;
		virtual void Computer(){}
};
class laptop:public Computer
{
	public:
		void run(){cout<<"laptop development is running "<<endl;}
		void stop(){cout<<"Laptop Development is stop"<<endl;}
};
int main()
{
	return 0;
}