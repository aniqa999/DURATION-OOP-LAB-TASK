#include<iostream>
using namespace std;
class student{
public:		
	int semester;
	string name;
	float cgpa;

	student(float cgpa, int semester)
	{
		this->cgpa=cgpa;
		this->semester=semester;
	}
	student(string name,int semester,float cgpa)
	{
		this->name=name;
		this->semester=semester;
        this->cgpa=cgpa;		
		}
		student(student &std)
		{
		    semester=std.semester;
		    cgpa=std.cgpa;
		    name=std.name;
		}
	
		void display()
		{
			cout<<"The cgpa is "<<cgpa<<endl;
			cout<<"The semester is "<<semester<<endl;
		}
		void displays()
		{
			cout<<"the name is "<<name<<endl;
			cout<<"semester is "<<semester<<endl;
		    cout<<"cgpa  is "<<cgpa<<endl;
		}
		
		~student(){
	    	cout<<"Destructor of student is running"<<endl;	
		}
};
		
int main()
{
	cout<<"First student detail is: ";
	cout<<"\n";
	student s1(3.1,2);
	s1.display();
	cout<<"\n";
	cout<<"Second student detail is: ";
	cout<<"\n";
    student s2("aniqa",2,3.2);
	s2.displays();1
	return 0;
}
