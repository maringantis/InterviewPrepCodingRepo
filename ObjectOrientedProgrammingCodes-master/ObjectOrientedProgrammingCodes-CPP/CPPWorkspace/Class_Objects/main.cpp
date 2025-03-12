#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player 
{
	
	//attributes
	string name;
	int health;
	int xp;
	
	//method
	void talk(string); //prototype
	bool is_dead();
	
};//Class Player end


int main()
{
    cout<< "Creating the Classes and objects"<< std::endl;
	Player sunny; //stack
	Player hero; // stack
	
	
	
	Player *enemy = new Player; // creates object on heap
	
	Player players[] {sunny,hero,*(enemy)};
	
//	for(auto obj : players)
//		std::cout << obj<<endl;
	delete enemy;// free the spavce
   // getch();
    return 0;
}