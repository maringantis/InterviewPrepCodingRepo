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
//	void set_name(std::string name_val) {
//		name = name_val;
//	}
//	
//	std::string get_name(){
//		return name;
//		}
	Player(std::string name_val ="None", int health_player=0, int xp_player=0);
		
};//EOC Player


//Delegating constructors

Player :: Player(std::string name_val, int health_player, int xp_player) 
				: name{name_val}, xp{xp_player}, health{health_player} {
	cout<<"\nHello "<<name<<" your XP is "<<xp<<" and health is "<< health
		<<endl;
	};

//Player :: Player(std::string name_val) : Player {name_val,0,0}{
//	cout<<"\nHello "<<name<<endl;
//	};
//	
//Player :: Player() : Player {"NONE",0,0}{
//	cout<<"\nNo args constr "<<endl;
//	};
	
int main()
{
    cout<< "Default Constrcutor Paramerters\n"<< std::endl;

	Player sunny;
	Player sunny_temp{"Sunny_test"};
	Player sunny_stats{"Sunny_stats",100,55};
    getch();
    return 0;
}