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

/*OLD WAY
 
Player (){
	cout<<"No agrs constr called"<<endl; 
}

Player (std::string name){
	cout<<"String args const called"<<endl;
}

Player(std::string name,int health, int xp){
	cout<<"Three args const called"<<endl;
}*/

/*
 * OLD
Player (std::string name_val){
	name = name_val;
	cout<<"Hello "<<name<<endl;
}*/

//NEW WAY AND BETTER
//Constructor init lists

Player(std::string name_val) : name{name_val}{
	cout<<"Hello "<<name;
	};

Player(std::string name_val, int health_player, int xp_player) 
				: name{name_val}, xp{xp_player}, health{health_player} {
	cout<<"Hello "<<name<<" your XP is "<<xp<<" and health is "<< health<<endl;
	};


~Player(){
	cout<<"Destructor call for "<< name<<endl;
	}
//	void talk(string); //prototype
//	bool is_dead();
	
};//Class Player end
int main()
{
    cout<< "Constructor init lists\n"<< std::endl;
	Player sunny("Sunny",100,1);
    getch();
    return 0;
}