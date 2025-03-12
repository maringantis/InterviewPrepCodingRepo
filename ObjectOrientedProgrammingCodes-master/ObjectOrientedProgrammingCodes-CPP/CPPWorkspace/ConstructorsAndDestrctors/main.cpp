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

Player (){
	cout<<"No agrs constr called"<<endl; 
}

Player (std::string name){
	cout<<"String args const called"<<endl;
}

Player(std::string name,int health, int xp){
	cout<<"Three args const called"<<endl;
}

~Player(){
	cout<<"Destructor call for "<< name<<endl;
	}
//	void talk(string); //prototype
//	bool is_dead();
	
};//Class Player end


int main()
{
    cout<< "Constructor and destructor"<< std::endl;

	{
		//Add breakpoint and see
		
		Player slayer;
		slayer.set_name("Slayer");
	}
	
	{
		//After the block exits destructor is called by default
	Player sunny;
	sunny.set_name("Sunny");	
	
	Player hero("Hero");
	
	hero.set_name("Hero");
	
	Player villan("Villan",100,2);
	villan.set_name("Villan");
	
	}//Constructor block
	
	Player *enemy = new Player();
	(*enemy).set_name("Enemy");
	
	delete enemy;
	//~Player();
	
    getch();
    return 0;
}