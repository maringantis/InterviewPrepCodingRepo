#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player 
{
public:
	//attributes
	string name{"Player"};
	int health{100};
	int xp{1};
	
	//method
	void talk(string text_to_say)  //Implementing
	{
		cout << name << " says " << text_to_say << endl;
	}

	bool is_dead(); //proto typing
	
};//Class Player end

class Account
{

	//attributes
	public:
	string name {"Account"};
	double balance {0.0};
	
	//methods
	bool deposit(double bal)
	{
		balance += bal;
		cout<<name<<" you have deposited $"<<bal<<" to your account"<<endl;
		cout<<name<<" your current balance is "<<balance<<"\n"<<endl;
		
		return true;
	}
	bool withdraw(double bal)
	{
		balance -= bal;
		cout<<name<<" you have withdrew $"<<bal<<" from your account"<<endl;
		cout<<name<<" your current balance is "<<balance<<"\n"<<endl;
		return true;
	}
};// Account class end


//void display (Player *player); // Player vector display
void display (Player player); // Player display
void display (Account account); //Account display


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

	//Definfing sunny object 
	sunny.name = "Sunny";
	sunny.health = 100;
	sunny.xp = 10;
	
	sunny.talk("Howdy!!");
	
	display(sunny);
	
	//Definfing hero object 
	hero.name = "Hero";
	hero.health = 90;
	hero.xp = 7;
	display(hero);
	
	//Definfing hero object 
	(*enemy).name = "Enemy";
	(*enemy).health = 1000;
	(*enemy).xp = 100;
	display(*(enemy));
	
	//Definfing sunny_account object 
	
	sunny_account.name = "Sunny";
	sunny_account.balance = 40.0;
	sunny_account.deposit(100.0);
	sunny_account.withdraw(15.0);
	display(sunny_account);


	
	Player players[] {sunny,hero,*(enemy)};
	
	//display(&players);

	delete enemy;// free the heap spavce
   // getch();
    return 0;
}  

void display (Player player)
{
	cout<<"\nPlayer details:\nName: "<<player.name<<"\tPlayer health: "
			<<player.health<<"\tPlayer XP: "<<player.xp<<"\n"<<endl;
			
	
}

//void display (Player *player)
//{
//	for(auto play : (*player))
//		{
//			cout<<"Player details:\nName: "<<play.name<<"\tPlayer health: "
//			<<play.health<<"\tPlayer XP: "<<play.xp<<endl;
//		}
//}

void display (Account account)
{
	cout<<"\nAccount details:\nName: "<<account.name<<"\tAccount balance: "
	<<account.balance<<"\n"<<endl;
}