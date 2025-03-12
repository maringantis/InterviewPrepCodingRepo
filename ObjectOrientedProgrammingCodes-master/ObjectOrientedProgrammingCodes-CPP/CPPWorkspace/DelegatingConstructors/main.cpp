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
//Overloading the constructors

//Delegating constructors

Player(std::string name_val, int health_player, int xp_player) 
				: name{name_val}, xp{xp_player}, health{health_player} {
	cout<<"\nHello "<<name<<" your XP is "<<xp<<" and health is "<< health
		<<endl;
	};

Player(std::string name_val) : Player {name_val,0,0}{
	cout<<"\nHello "<<name<<endl;
	};
	
Player() : Player {"NONE",0,0}{
	cout<<"\nNo args constr "<<endl;
	};




~Player(){
	cout<<"Destructor call for "<< name<<endl;
	}
//	void talk(string); //prototype
//	bool is_dead();
	
};//Class Player end
int main()
{
    cout<< "Delegating Constructors\n"<< std::endl;
	
		Player sunny;
		Player sunny_temp{"Sunny_test"};
		Player sunny_stats{"Sunny_stats",100,55};
//	}
    //getch();
    return 0;
}