#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player 
{
private:
	//attributes
	string name;
	int health;
	int xp;
	
public:
	//methods
void set_name(std::string name_val) {
		name = name_val;
	}
	
	std::string get_name(){
		return name;
		}
	
	int get_health(){
		return health;
		}
		
	int get_xp(){
		return xp;
		}
		
	Player(std::string name_val ="None", int health_player=0, int xp_player=0);
	
	//Copy constructor prototype
	Player(const Player &sourceObject);
	
	//Destructor
	~Player(){
	cout<<"\nDesctructor called "<< name<<endl;
	}
};//EOC Player


//Delegating constructors

Player :: Player(std::string name_val, int health_player, int xp_player) 
				: name{name_val}, xp{xp_player}, health{health_player} {
//	cout<<"\nHello "<<name<<" your XP is "<<xp<<" and health is "<< health
//		<<endl;
cout<<"three args"<<endl;
	}

Player :: Player(const Player &sourceObject)
	//:name{sourceObject.name}, xp{sourceObject.xp}, health{sourceObject.health}
	//                        OR
	: Player{sourceObject.name,sourceObject.health,sourceObject.xp}
	{
	cout<<"\nCopy constr -made copy of  "<<sourceObject.name<<endl;
	}
	
void display_player(Player p){
	
	cout<<"\nNOW!!"<<"\nHello "<<p.get_name()<<" your XP is "<<p.get_xp()
	<<" and health is "	<< p.get_health()<<endl;
	}
	
int main()
{
    cout<< "Copy Constrcutor\n"<< std::endl;

	Player sunny_stats{"Sunny_stats",100,55};
	Player sunny{sunny_stats}; //Copy constructor
	display_player(sunny);
    getch();
    return 0;
}