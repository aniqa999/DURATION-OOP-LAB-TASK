#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class student
{
private:
	string Name , ContactNo , Semester , SapId , Cgpa ;
public:
	void menu();
	void insert();
	void display();
};

void student::menu()
{
menustart:
	int choice;
	char x;
	
    cout << "\t\t\t-----------------------------" << endl;
	cout << "\t\t\t-----------------------------" << endl;
	cout << "\t\t\t 1. Enter New Record" << endl;
	cout << "\t\t\t 2. Display Record" << endl;
	cout << "\t\t\t 3. Exit" << endl;
     cout << "\t\t\t---------------------------" << endl;
	cout << "\t\t\tChoose Option:[1/2/3]" << endl;
	cout << "\t\t\t---------------------------" << endl;
	cout << "Enter Your Choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		do
		{
			insert();
			cout << "\n\t\t\t Add Another Student Record (Y,N): ";
			cin >> x;
		} while (x == 'y' || x == 'Y');
		break;
	case 2:
		display();
		break;
	case 3:
		exit(0);
	default:
		cout << "\n\t\t\t Invalid choice... Please Try Again..";
	}
	goto menustart;
}

void student::insert() // add student details
{
	fstream file;
	cout << "\n-----------------------------------------------------------------------------------------------------";
	cout << "\n------------------------------------- Add Student Details ---------------------------------------------" << endl;

	cout << "\t\t\tEnter Name: ";
	cin >>Name;
	cout << "\t\t\tEnter ContactNo: ";
	cin >>ContactNo;
	cout << "\t\t\tEnter Semester: ";
	cin >>Semester;
	cout << "\t\t\tEnter SapId: ";
	cin >>SapId;
	cout << "\t\t\tEnter Cgpa: ";
	cin >> Cgpa;
	file.open("studentRecord.txt", ios::app | ios::out);
	file << " " << Name << " " << ContactNo << " " << Semester <<" " << SapId << " " << Cgpa << "\n";
	file.close();
}

void student::display() // display students details
{
	fstream file;
	int total = 0;
	cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
	cout << "------------------------------------- Student Record Table --------------------------------------------" << endl;
	file.open("studentRecord.txt", ios::in);
	if (!file)
	{
		/* code */
		cout << "\n\t\t\tNo Data Is Present...";
		file.close();
	}
	else
	{
		file >> Name >> ContactNo >>Semester >> SapId >> Cgpa;
		while (!file.eof())
		{
			cout << "\n\n\t\t\t Student No.: " << ++total << endl;
			cout << "\t\t\t Student Name: " << Name << endl;
			cout << "\t\t\t Student ContactNo : " << ContactNo << endl;
			cout << "\t\t\t Student Semester : " << Semester << endl;
			cout << "\t\t\t Student SapId: " << SapId << endl;
			cout << "\t\t\t Student Cgpa: " << Cgpa << endl;
			file >> Name >> ContactNo >>Semester >> SapId >> Cgpa;
		}
		if (total == 0)
		{
			cout << "\n\t\t\tNo Data Is Present...";
		}
	}
	file.close();
}
	
int main()
{
	student project;
    project.menu();
	return 0;
}


