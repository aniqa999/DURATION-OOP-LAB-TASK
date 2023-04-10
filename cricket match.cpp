/*You have to create a simulation of Cricket. As a first step you have to develop the Classes for Players.
There are 4 types of Players (Batsman, Bowler, Wicket Keeper and All-Rounder).
All the Players have some common attributes like their Jersey Number, Name, Array of 3 Rankings (ODI, Test, T20).
A Part from that there are separate attributes for each of them
Bowlers (Bowling style(Fast ,Spin), Average Speed, Total Wickets, Bowling Average, Strike Rate)
Batsman (Batting style (Left, Right), Batting No, Total Score, Batting Average, Strike Rate)
Wicket Keeper (Batting Style (Left, Right), Total Score, Total Catches, Total Stumps)
All Rounder (Inherits the Properties of Both Batsman and Bowler)
They have some common functions like Getters and Setters of common attributes and there are also some common attributes
Bowlers(Bowl, Change Side)
Batsmen(Hit the Ball, Run)
Keeper(Catch the Ball, Do Stumping)
Allrounder (Inherit Functions of Batsman and Bowler)*/



#include<iostream>
using namespace std;
class player{
public :
	int Jnum;
	string name;
	int array [3];
	player(){
		cout<<"null constructor is running" ;
			}
	player(int Jn; string n; int array [3]);
	
	this->Jn=Jnum;
	this->n=name;
	this->array[3]=array [3];
	cout<<"parametric constructor is running" ;
	};
class Batsman:public player{
	protected:
		string batstyle;
		int battingturn;
		int Tscore;
		float strikerrate;
	
 public:
 void input(){
		cout<<"Enter the jersey no :";
		cin>>Jnum;
		cout<<"Enter the name  :";
		cin>>name;
		for(int i=0;i<3,i++){
			cout<<"enter rankings";
			cin>>rankings[i];
		}
		cout<<"bat style(left/right);"
		cin>>batstyle;
		cout<<"enter battingturn";
		cin>>battingturn;
		cout<<"enter total score"
		cin>>Tscore;
		cout<<"enter te strike rate"
		cin>>strikerate;
		}
};
 
class Bowler:public player{
	private:
	string ballingstyle;
	float averagespeed;
	int totalwickets;
	float battingavg;

    public:
     Bowler("string ballst,float averagesp,int twick,float batavg");
	
	    this->ballingstyle=ballst;
	    this->averagespeed=averagesp;
	    this->totalwickets= twick;
	    this->battingavg= batavg;
	     cout<<"parametric constructor";
	     void input();
};
class WicketPlayer :public player{
protected:
	string ballingstyle;
	int totalscore;
	int totalcatches;
	float totalstump;
	public:
	WicketPlayer();
	
    WicketPlayer( int Jn; string n; int array [3], string ballingstyle,int totalscore,int totalcatches,float totalstump);
	 	this->Jn=Jnum;
	    this->n=name;
	    this->array[3]=array [3];
	    this-> ballingstyle= ballingstyle;
	    this->totalscore=totalscore;
	    this->totalcatches= totalcatches;
	    this->totalstump=totalstump;
	void input();
};
class AllRounder:public player
{
 public:
	int jerseyNo;
    string name;
    int Test;
	int ODI;
	int T20; 
	string battingStyle;
    int battingNo; 
	int totalScore;
    float average; 
	float BatstrikeRate;  
	string bowlingStyle;  
	float aveSpeed;
	int totalWickets;
	float bowlingAverage; 
	float strikeRate;
		
		void AllRounder::input(){
		
			cout << "Enter Jersey Number: ";
			cin >> jerseyNo;
			cout << "Enter Name: ";
			cin >> name;
			for(int i = 0; i<3; i++){
				if(i<1){
					ranking[i]=Test;
				}
				else if(i<2){
					ranking[i]=ODI;
				}
				else
					ranking[i]=T20;
			}
			this->battingStyle=battingStyle;
			this->battingNo=battingNo;
			this->totalScore=totalScore;
			this->average=average;
			this->BatstrikeRate=BatstrikeRate;
			this->bowlingStyle=bowlingStyle;
			this->aveSpeed=aveSpeed;
			this->totalWickets=totalWickets;
			this->bowlingAverage=bowlingAverage;
			this->strikeRate=strikeRate;
		}
	
};
int main(){
    
    AllRounder ar;
    Batsmen bat(5, "Ahmad", 5, 9, 16, "Left", 5, 4434, 45.7, 89.5);
	Bowler bowl(7, "Abdullah", 8, 17, 6, "Spin", 89.6, 54, 23.7, 56.9);
	WicketKeeper wk(6, "Haris", 9, 23, 12, "Right", 2305, 43, 35);
	AllRounder ar(3, "Zeeshan", 2, 5, 7, "Left", 5, 2654, 39.5, 95.7, "Spin", 83.7, 47, 28.3, 63.9);
	
	int option;
	char again;

	cout << Cricket<< endl;
	do{
	cout << "1. Add Batsman ";
    cout <<"2. Add Bowler ";
	cout <<"3. Add wicketplayer";
	cout <<"4. Add All-Rounder ";
	cout << "choose one option: ";
	cin >> option;
	switch(option){
		case 1:			
			bat.Batinput();
			break;
		case 2:			
			bowl.Bowlinput();
			break;
		
		case 3:
			wk.input();
			break;
		
		case 4:
			ar.input();
			break;
		case 5:
			cout << "Thank You For Using!!!" << endl;
			break;

		}
}
















