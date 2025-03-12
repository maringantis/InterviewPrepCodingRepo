#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <vector>

// Please complete as many of the following questions as you can in about two 
// hours. Answer in C++. Please briefly explain the reasoning behind your
// solutions.

//____________________________________________________________________
// 1. Implement a function to identify a duplicate integer in an unsorted array
// of integers
// * `input` contains N+1 numbers
// * `input` elements are integers in the domain [1, N]
// * `input` contains all integers in the domain [1, N] at least once
void decorator() 
{
	std::cout << "\n\n--------------------------------------------------\n\n"<<std::endl;
}

int findDuplicate(std::vector<int> const& input) 
{
	//We are using cycle detection method.
	// As `input` elements are integers in the domain [1, N] && `input` contains all integers in the domain [1, N] at least once
	// we can use cycle detection method. 

	//uses two pivots, one of them is slow, the other is fast.
	int slow = 0;
	int fast = 0;
	do {

		//if there exists a cycle , slow pivot will equal to fast pivot in first pass.
		slow = input[slow];
		fast = input[input[fast]];
		//std::cout << "Slow :  nums[slow] :" << slow << "Fast : nums[nums[fast]]: "<<fast<<std::endl;
	} while (slow != fast);

	//Chnage slow pivot to the initial position (slow = 0), run the second pass.
	slow = 0;
	while (slow != fast) {
		//When slow pivot meets fast pivot in the second pass, the duplicate element is found!!!
		slow = input[slow];
		fast = input[fast];
		//std::cout << "Slow2 :  nums[slow] :" << slow << "Fast2 : nums[nums[fast]]: " << fast << std::endl;
	}
	return slow;
	return 0;
}
//____________________________________________________________________


//____________________________________________________________________
// 2. Implement an integer stack that satisfies the following requirements:
// * `push` operation which adds a given value to the top
// * `pop`  operation which returns and removes the value at the top
// * `peek` operation which returns the value at the top
// * `size` operation which returns the count of values
//____________________________________________________________________



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
		(*stack_traversing_ptr).data = number_to_insert;   // stack_traversing_ptr->data = number_to_insert;
		(*stack_traversing_ptr).next = stack_top;			// stack_traversing_ptr->next = stack_top;
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

// Checks if the empty is empty or not. And returns element at top. If Stack is empty then, returns NULL
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
		while ((*stack_traversing_ptr).next != nullptr) // Eqvivalent to stack_traversing_ptr->next 

		{
			std::cout << (*stack_traversing_ptr).data << " -> ";//Eqvivalent stack_traversing_ptr->data
			stack_traversing_ptr = (*stack_traversing_ptr).next;// Eqvivalent to stack_traversing_ptr->next 
		}
		std::cout << (*stack_traversing_ptr).data; //Eqvivalent stack_traversing_ptr->data
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
		while ((*stack_traversing_ptr).next != nullptr) // Eqvivalent to stack_traversing_ptr->next 

		{
			totalElements++;
			stack_traversing_ptr = (*stack_traversing_ptr).next;// Eqvivalent to stack_traversing_ptr->next 
		}
		totalElements++;
	}
	//After travering 
	return totalElements;
}

//____________________________________________________________________
// 3. Implement memory allocation and deallocation functions
// * `posix_memalign` / `_aligned_malloc` / etc. do not exist or are unsuitable
//   on the target platform
// * `new` / `delete` / `malloc` / `free` are available and the alignment of
//   `malloc` is 1 byte
// * `size` is always greater than zero
// * `alignment` is a power of two
//____________________________________________________________________


//____________________________________________________________________
// Allocates a block of memory with at least `size` bytes available.
// Returned pointer is guaranteed to be aligned on an `alignment` byte boundary.
void* aligned_alloc(size_t size, size_t alignment) 
{
	void *original_block; // original memory block
	void **aligned_block; // aligned memory block

	int offset = alignment - 1 + sizeof(void * );

	//using malloc routine provided by C/C++ to implement the functionality.
	//Allocate memory of size (bytes required + alignment – 1 + sizeof(void*))
	if ((original_block = (void*)malloc(size + offset)) == nullptr) 
	{ 
		return nullptr; 
	} 
	aligned_block = (void**)(((size_t)(original_block)+offset)&~(alignment - 1));  
	aligned_block[-1] = original_block; 
	return aligned_block;
}

// Accepts an aligned pointer and releases the correct block of memory.
// Input of nullptr is acceptable and must do nothing.
void aligned_free(void* ptr) {
	void* p1 = ((void**)ptr)[-1];         // get the pointer to the buffer we allocated
	free(p1);
}



//____________________________________________________________________
// 4. Implement a blitting function which supports color-keyed transparency.

//unsigned int const COLOR_KEY{0xFF000000};

struct PixelBuffer {
  uint32_t *pixels;
  int width;
  int height;
};



// Copies the entire image from `src` into a destination buffer `dest`.
// The pixel buffers have a top-left origin and are row-major.
// `offsetX` and `offsetY` denote the origin within `dest` where `src` should be
// copied.
// Any pixel that exactly matches `COLOR_KEY` should be skipped.
// You may assume input buffers are pre-allocated and sufficiently large to
// complete the requested operation.

// Image dimensions
#define IMAGE_HEIGHT 3
#define IMAGE_WIDTH  3
const uint32_t COLOR_KEY = 0XFF000000;
// Flag
uint8_t isInvalidOffset = 0;

void blit(PixelBuffer const *src, PixelBuffer* dest, size_t offsetX, size_t offsetY)
{
	// Handle bounds
	if (offsetX > IMAGE_HEIGHT || offsetY > IMAGE_WIDTH) {
		std::cout <<"\nInvalid offset" << std::endl;
		isInvalidOffset = 1;
		return;
	}

	if (offsetX == IMAGE_HEIGHT && offsetY == IMAGE_WIDTH) {
		isInvalidOffset = 1;
		std::cout << "\nNothing to copy" <<std::endl;
		return;
	}

	// Compute the size of the image
	uint32_t srcImageSize = (*src).width * (*src).height; //Eqvivalent to src->width * src->height;
	//std::cout<<"\nTotal pixels: "<< srcImageSize<<std::endl;

	// Allocate memory to the render space    
	dest->pixels = (uint32_t *)malloc(srcImageSize * sizeof(uint32_t));//Eqvivalent to dest->pixels
	memset(dest->pixels, 0, srcImageSize * sizeof(uint32_t));

	// Compute pixels to be skipped based on offset
	uint32_t start = (offsetX * src->width) + offsetY;
	

	// Copy pixels    
	for (; start < srcImageSize; start++) {
		if (*(src->pixels + start) != COLOR_KEY) {
			// condition
			*(dest->pixels + start) = *(src->pixels + start);
		}
	}
}


void testFunctions() 
{
	std::vector<int> unsortedIntergers = { 1, 2, 3, 6,7,8,1,9,1 };
	decorator();
	//Question1
	std::cout << "Question1:\nStarting to test fuction to identify"<<
		"a duplicate integer in an unsorted array of integers\n\n\n";
	
	std::cout<<"Duplicate element is: "<<findDuplicate(unsortedIntergers)<<std::endl;
	decorator();
	//Question2
	std::cout << "Question2:\nStarting to test integer stack fucntions\n\n\n";
	Stack _stack;

	std::cout << "\nPushing, displaying , seeking and counting the size of stack\n" << std::endl;
	for (auto num : unsortedIntergers)
	{
		_stack.push(num); //Inserting element
		_stack.display_stack(); //Display the stack after push
		std::cout << "\nCurrent stack top is: " << _stack.seek() << std::endl; //Seek to stack top
		std::cout << "Current size of stack is: " << _stack.size_of_stack() << std::endl; //Seek to stack top
	}
	
	std::cout << "\nPopping, displaying , seeking and counting the size of stack\n" << std::endl; 

	for (auto num : unsortedIntergers)
	{
		_stack.pop(); //Inserting element
		_stack.display_stack(); //Display the stack after push
		std::cout << "\nCurrent stack top is: " << _stack.seek() << std::endl; //Seek to stack top
		std::cout << "Current size of stack is: " << _stack.size_of_stack() << std::endl; //Seek to stack top
	}
	decorator();
	//Question3
	std::cout <<"Question3:\nStarting to test memory allocation and deallocation functions\n\n\n";
	
	void *ptr = aligned_alloc(100, 16);
	std::cout << "Aligned address block for aligned_alloc(100, 16) : "<< ptr<< std::endl;
	aligned_free(ptr);

	void *ptr1 = aligned_alloc(100, 512);
	std::cout <<"Aligned address block for aligned_alloc(100, 512) : " << ptr1 << std::endl;
	aligned_free(ptr1);
	
	decorator();	//Question4
	std::cout << "Question4:\nStarting to blitting function which supports color-keyed transparency\n\n\n";

	PixelBuffer myImage = {
							myImage.pixels = (uint32_t *)malloc(IMAGE_HEIGHT*IMAGE_WIDTH * sizeof(int)),
							myImage.width = IMAGE_WIDTH,
							myImage.height = IMAGE_HEIGHT
	};

	// Sample image, this can point to a file too   
	myImage.pixels[0] = 0x33335555;
	myImage.pixels[1] = 0xdeaddead;
	myImage.pixels[2] = 0xb00dd00b;
	myImage.pixels[3] = COLOR_KEY;
	myImage.pixels[4] = 0xDEADbeef;
	myImage.pixels[5] = COLOR_KEY;
	myImage.pixels[6] = 0x44444444;
	myImage.pixels[7] = 0xCADCBADD;
	myImage.pixels[8] = COLOR_KEY;

	// Final image
	PixelBuffer renderImage = {
								renderImage.pixels = NULL ,
								renderImage.width = 0,
								renderImage.height = 0
	};

	std::cout << "\nBlitting for offsetX :1 offsetY :0 "<< std::endl;
	blit(&myImage, &renderImage, 1, 0);

	// Print pixels of the rendered image
	if (!isInvalidOffset) {
		int a = 0;
		for (; a < myImage.width * myImage.height; a++) {
			printf("%x ", renderImage.pixels[a]);
		}
		free(renderImage.pixels);
	}

	std::cout << "\n\nBlitting for offsetX :0 offsetY :0 " << std::endl;
	blit(&myImage, &renderImage, 0, 0);

	// Print pixels of the rendered image
	if (!isInvalidOffset) {
		int a = 0;
		for (; a < myImage.width * myImage.height; a++) {
			printf("%x ", renderImage.pixels[a]);
		}
		free(renderImage.pixels);
	}

	std::cout << "\n\nBlitting for offsetX :2 offsetY :0 " << std::endl;
	blit(&myImage, &renderImage, 2, 0);

	// Print pixels of the rendered image
	if (!isInvalidOffset) {
		int a = 0;
		for (; a < myImage.width * myImage.height; a++) {
			printf("%x ", renderImage.pixels[a]);
		}
		free(renderImage.pixels);
	}
	// Not needed if importinga file
	free(myImage.pixels);
	decorator();
	//END OF ALL TEST funtions

}

int main()
{
	std::cout << "\nStarting to test functions...\n" << std::endl;
	testFunctions();
	getchar();
	return 0;


}
