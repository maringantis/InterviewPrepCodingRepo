#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <vector>

class Stack
{
	//Stack frame variables and pointer 
	int data {};
	Stack *next;

	//Pointers to stack top and pointer to traverse and operate upon
	Stack *stack_top, *stack_traversing_ptr; 

public:
	//Stack operations
	void push(int); //Inserts element
	int pop(void); //Pops element and returns popped element value
	void display_stack(void); //Displays the stack and elements
	int seek(void); // Returns the top element in the stack
	int size_of_stack(void); //returns the total number of elements in the stack

	//Constructor inialization
	Stack()
	{
		stack_top = nullptr;
		stack_traversing_ptr = nullptr;
		//totalElements = 0;
	}
};

void Stack::push(int number_to_insert)
{
		stack_traversing_ptr = new Stack;
		//Eqvivalent to stack_traversing_ptr->data = number_to_insert;
		(*stack_traversing_ptr).data = number_to_insert;   
		//Eqvivalent to stack_traversing_ptr->next = stack_top;
		(*stack_traversing_ptr).next = stack_top;			
		stack_top = stack_traversing_ptr;

}

int Stack::pop(void)
{
	int poppedElement{}; // Creating and initialising the poppedElement variable

	if (stack_top == nullptr)
	{
		// Stack is empty popped operation returns NULL
		//std::cout << "stack is empty" << std::endl;
		return NULL;
	}
	else
	{
		// Stack pops the element at top and returns popped element
		
		//std::cout << "the popped element is" << top->data << std::endl;

		Stack* currentTop = stack_top;
		poppedElement = (*stack_top).data; // Eqvivalent to stack_top->data;
		stack_top = (*stack_top).next; //Eqvivalent to stack_top->next;

		delete (currentTop);// delete the element at stack_top

		return poppedElement;
	}
}

// Checks if the empty is empty or not. And returns element at top. 
//If Stack is empty then, returns NULL
int Stack::seek(void) 
{
	if (stack_top == nullptr)
	{
		// Stack is empty seek operation returns NULL
		//std::cout << "stack is empty" << std::endl;
		return NULL;
	}
	else
	{
		// Stack points to head and gets the element at stack_top
		//std::cout << "Stack top is: " << (*stack_top).data<<std::endl;
		return (*stack_top).data; //// Eqvivalent to stack_top->data;
	}
}

void Stack::display_stack(void)
{
	if (stack_top == nullptr)
	{
		//If stack is empty the msg is displayed.
		std::cout << "Stack is empty" << std::endl;
	}
	else
	{
		stack_traversing_ptr = stack_top;
		while (stack_traversing_ptr->next != nullptr)

		{
			std::cout << stack_traversing_ptr->data << "->";
			stack_traversing_ptr = stack_traversing_ptr->next;
		}
		std::cout << stack_traversing_ptr->data;
	}
}

int Stack::size_of_stack(void)
{
	
	size_t totalElements {}; // Declaring and initialsing to 0
	if (stack_top == nullptr)
	{

		//If stack is empty then size is returned as 0
		return 0;
	}
	else 
	{
		stack_traversing_ptr = stack_top;
		while (stack_traversing_ptr->next != nullptr)

		{
			totalElements++;
			stack_traversing_ptr = stack_traversing_ptr->next;
		}
		totalElements++;
	}
	//After travering 
	return totalElements;
}

int main()
{
	Stack _stack;
	std::cout << "1.PUSH";
	std::cout << "\n2.POP";
	std::cout << "\n3.SEEK";
	std::cout << "\n4.SIZE";
	std::cout << "\n5.DISPLAY";
	std::cout << "\n6.EXIT";
	int ch, x;
	while (1)
	{
		std::cout << "\nEnter the choice: ";
		std::cin >> ch;
		switch (ch)
		{
		case 1:
			//std::cout << "\nEnter element to be inserted" << std::endl;
			std::cin >> x;
			_stack.push(x);
			break;

		case 2:
			std::cout << _stack.pop();
			break;

		case 3:
			std::cout<<_stack.seek();
			break;
		case 4:
			std::cout<<_stack.size_of_stack();
			break;

		case 5:
			_stack.display_stack();
			break;
		case 6:
			exit(0);
		default:
			break;
		}
	}
	getchar();
	return 0;
}