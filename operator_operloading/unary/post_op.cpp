#include<iostream>
using namespace std;

class A
{
	private:int x;
	public: A()
		{
                   x=10;
		}

		void display()
		{
                  cout<<x<<endl;
		}

                void operator ++()
                {
                   cout<<"In pre increment funtion.. "<<endl;
                   x=++x;
		}

		void operator ++(int)
		{
	            cout<<"In post increment function.."<<endl;
	      	    x=x++;
		}
};

main()
{
	A a1;
	a1.display();

        ++a1;
	a1++;  //a1.operator++(int);

	a1.display();
}


