#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player 
{

	//attributes
	private:
	string name{"Player"};
	int health{100};
	int xp{1};
	
	public:
	//method
	void talk(string text_to_say)  //Implementing
	{
		cout << name << " says " << text_to_say << endl;
	}

	bool is_dead(); //proto typing
	
};//Class Player end


int main()
{
    cout<< "Access modifers"<< std::endl;
	
	//Player class objects and calls
	Player sunny; //stack

	//Definfing sunny object 
	
	/*//////// CANNOT USE THESE AS THEY ARE PRIVATE \\\\\\\\\\\*/
//	sunny.name = "Sunny";
//	sunny.health = 100;
//	sunny.xp = 10;
	
	sunny.talk("Howdy!!");
	

    return 0;
}  

