#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class BST
{
	//private:
	public:
	//attributes
	BST *left_child, *right_child; 
	BST  *root_node, *present_number_operation, *prev_number;
	int data {};
	
	public:
	//methods
	void insertNumber(int);
	bool searchForNumber(int);
	void deleteNumber(int);
	void displayTree(BST *node, int level);
	
	BST()//Construter
	{
		root_node = nullptr;
		prev_number = nullptr;
		present_number_operation = nullptr;
	}
};//EOC BST

void BST :: insertNumber(int number)
{
	if(root_node == nullptr)
		{
			//Default case
			root_node = new BST; //heap 
			(*root_node).data = number;
			(*root_node).left_child = nullptr;
			(*root_node).right_child = nullptr;
			
		}
	else 
		{
			//cout<<"BST is already created.";
			
			
			present_number_operation = root_node;
			while(present_number_operation != nullptr){
				if(number < (*present_number_operation).data )
					{
						prev_number = present_number_operation;
						present_number_operation
							= (*present_number_operation).left_child;
					}
				else if (number > (*present_number_operation).data )
					{
						prev_number = present_number_operation;
						present_number_operation
							= (*present_number_operation).right_child;
					}
				else 
					{
						cout<<"Operation not possible"<<endl;
						break;
					}
			}
			
			BST *temp_number_insert = new BST;
			(*temp_number_insert).data = data;
			(*temp_number_insert).left_child = NULL;
            (*temp_number_insert).right_child = NULL;

			if((*temp_number_insert).data < (*prev_number).data)
				(*prev_number).left_child = temp_number_insert;
			else
				(*prev_number).right_child = temp_number_insert;
				
			delete present_number_operation;
			delete prev_number;
		}
}

bool BST :: searchForNumber(int number)
{ 
	
	//cout<<"BST is already created.";
	BST *present_number_operation = new BST;
	
	present_number_operation = root_node;
	while(present_number_operation != nullptr)
		{
			if(number < (*present_number_operation).data )
				{
					prev_number = present_number_operation;
					present_number_operation
						= (*present_number_operation).left_child;
				}
			else if (number > (*present_number_operation).data )
				{
					prev_number = present_number_operation;
					present_number_operation
						= (*present_number_operation).right_child;
				}
			else 
				{
					//cout<<number<<" found !"<<endl;
					return true;
				}
			
		}
			
	return false;
}

void BST :: deleteNumber(int number)
{
	
}

void BST :: displayTree(BST *node, int level)
{
	cout<<"\nCurrent order of BST (preorder) :"<<endl;
	
	//void BST::display(node *ptr, int level)

    int i;

    if (root_node != NULL)

    {

        displayTree((*root_node).right_child, level+1);

        cout<<endl;

        if (root_node == root_node)

            cout<<"Root->:  ";

        else

        {

            for (i = 0;i < level;i++)

                cout<<"       ";

	}

        cout << (*root_node).data;

        displayTree((*root_node).left_child, level+1);

    }
} 


int main()
{
    cout<< "Binary seacrh tree"<< std::endl;
	int user_choice{}, number{};
	
	//Class object
	BST binary_search_tree;
	
	cout << "Please select the operation\n" << endl;
	cout << "1. Insert number " << endl;
	cout << "2. Search number " << endl;
	cout << "3. Delete number " << endl;
	cout << "4. Exit the operation" << endl;
	while(1)
	{
		cout<<"\nEnter the choice: " ;      
		cin>>user_choice;
		
		switch(user_choice)
		{
			case 1:
			cout<<"Enter the number you want to insert :";
			cin>>number;            
			binary_search_tree.insertNumber(number);     
			break;

			case 2:
			cout<<"Enter the number you want to search :";
			cin>>number;
			if(!binary_search_tree.searchForNumber(number))
				{
					cout<<number<<" is not present in the binary search"
					<<" tree";
				}
			else
				cout<<number<<" is present in the binary search"
					<<" tree";
			break;
			
			case 3:
			cout<<"Enter the number you want to search :";
			cin>>number;
			binary_search_tree.deleteNumber(number);
			break;

			case 4:
			cout<<"Display the BST:";
			cin>>number;
			binary_search_tree.displayTree((binary_search_tree).root_node,1);
			break;
			case 5:
			exit(0);     


			default:cout<<"\nEnter the correct choice."<<endl;
		}
   }
    getch();
    return 0;
}
