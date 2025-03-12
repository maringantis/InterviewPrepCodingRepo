#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player 
{
	//FR
	//attributes
	string name{"Player"};
	int health{100};
	int xp{1};
	
	//method
	void talk(string); //prototype
	bool is_dead();
	
};//Class Player end

class Account
{
	//attributes
	string name {"Account"};
	double balance {0.0};
	
	//methods
	bool deposit(double);
	bool withdraw(double);
};// Account class end



int main()
{
    cout<< "Creating the Classes and objects"<< std::endl;
	
	//Account class objects and calls
	Account sunny_account;
	Account hero_account;
	
	//Player class objects and calls
	Player sunny; //stack
	Player hero; // stack

	Player *enemy = new Player; // creates object on heap
	
	Player players[] {sunny,hero,*(enemy)};

	delete enemy;// free the heap spavce
   // getch();
    return 0;
}  