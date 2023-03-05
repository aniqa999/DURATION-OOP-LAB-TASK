#include<iostream>
class Duration{
	int days;
	int hours;
	int minutes;
	long seconds;
	public:
		Duration(){
			days=0;
			hours=0;
			minutes=0;
			seconds=0;
		}
		Duration(int days,int hours, int minutes,long seconds)
		{
			this->days=days;
			this->hours=hours;
			this->minutes=minutes;
			this->seconds=seconds;
		}
		Duration(int  n)
		{ 
   			days = n / (24 * 3600); 
   			n = n % (24 * 3600); 
   			hours = n / 3600; 
			n %= 3600; 
			minutes = n / 60 ; 
			n %= 60; 
			seconds = n; 
		}
 		void display()
  		{
  			std::cout<<"the day is: "  <<days;
			std::cout<<"\nthe hours is: "<<hours;
			std::cout<<"\nthe minutes is: "<<minutes;
			std::cout<<"\nthe seconds is: "<<seconds;
		}
};
int main()
{
	int n;
	std::cout<<"Enter the duration in secinds which you want to calculate: ";
	std::cin>>n;
	Duration d1(n);
	d1.display();
	return 0;
}
