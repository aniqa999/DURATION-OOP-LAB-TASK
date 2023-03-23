#include<iostream>
using namespace std;
class Elevator {
	private :
	  string currLocation;
	  string companyName;
	  string color;
	  float maxLoad;
	  string properties;
	  int model;
	  int id;
	  int validity;
	public :
	Elevator()
	{
		// null constructor
	  string currLocation="\0";
	  string companyName="\0";
	  string properties="\0";
	  string color="\0";
	  float maxLoad=0;
	  int model=0;
	  int id=0;
	  int validity=0;	
	}
	
	// DESTRUCTOR
	
	~Elevator(){
		
	}
	
	Elevator(string loc,string Com_name,string t, string p,string c,float ml,int m,int ID,int vld )
	{
		// parameteric constructor
	  currLocation= loc;
	  companyName= Com_name;
	  properties=p;
	  color=c;
	  maxLoad=ml;
	  model=m;
	  id=ID;
	   validity=vld;
    }
    
    // Display the detail of the Elavator
  
    void Details_of_Elevator(){
    	cout<<"--------- THE DETAILS ARE ----------\n";
    	cout<<"COMPANY NAME IS: "<<companyName<<endl;
    	cout<<"MAXIMUM LOAD IS: "<<maxLoad<<"KG"<<endl;
    	cout<<"CURRENT LOCATION IS: "<<currLocation<<endl;
    	cout<<"COLOR IS: "<<color<<endl;
    	cout<<"ID IS: "<<id<<endl;
    	cout<<"MODEL IS: "<<model<<endl;
    	cout<<"VALIDITY IS: "<<validity<<endl;
	}
	
		void Up(){
			cout<<"Elevator's Going Up!!!"<<endl;
			cout<<"\nWe Have Reached Your Destination!!!"<<endl;
		}
		void Down(){
			cout<<"Elevator's Going Down!!!"<<endl;
			cout<<"\nWe Have Reached Your Destination!!!"<<endl;
		}
	
//   	getters and setters 
	
	void getCOMPANY(string ComName){
		companyName = ComName;	
	}
	string setCOM(){
		return companyName;
	}
	void getMAX(float ml){
		maxLoad=ml;	
	}
	float setMAX(){
		return maxLoad;
	}
	void gerCUR(string loc){
		currLocation=loc;
	}
	string setCUR(){
		return currLocation;
	}
	void getColor(string c){
		color=c;
	}
	string setColor(){
		return color;
	}
	void getModel(int m){
		model = m;
	}
	int setModel(){
		return model;
	}
	void getid(int ID){
		id=ID;
	}
	int setid(){
		return id;
	}
	void getvalidity(int vld){
    	validity = vld;
	}
	int setvalidity(){
		return validity;
	}
};


int main()
{
	
	string ComName,c,loc,p;
	int m,ID,vld;
	float ml;
	Elevator E;
	int choice;	
	cout<<"ENTER ALL THE FOLOOWING DETAILS: "<<endl;
	cout<<"ENTER COMPANY NAME: ";
	cin>>ComName;
	cout<<"ENTER MODEL: ";
	cin>>m;
	cout<<"ENTER MAXIMUM LOAD: ";
	cin>>ml;
	cout<<"ENTER COLOR: ";
	cin>>c;
	cout<<"ENTER CURRENT LOCATION: ";
	cin>>loc;
	cout<<"ENTER ID OF ELEVATOR: ";
	cin>>ID;
	cout<<"ENTER VALIDITY : ";
	cin>>vld;
	cout<<"ENTER PROPERIES: ";
	cin>>p;
	cout<<"PRESS 1 TO GO UP OR PRESS 2 TO GO DOWN: ";
	cin>>choice;
	switch (choice){
	 case 1:
	 	E.Up();
	 	break;
	case 2:
		E.Down();
	}
	E.getCOMPANY(ComName);
	E.getMAX(ml);
	E.gerCUR(loc);
	E.getColor(c);
	E.getModel(m);
	E.getid(ID);
	E.getvalidity(vld);
	E.Details_of_Elevator();	
}
