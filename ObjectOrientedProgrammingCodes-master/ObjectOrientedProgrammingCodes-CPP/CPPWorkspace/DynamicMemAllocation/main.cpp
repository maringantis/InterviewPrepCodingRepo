#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    
    //Interger Dynamic allocation
    cout<< "Dynamic memory allocation, int"<< std::endl;
    
    int *(int_ptr) {nullptr};
    int_ptr = new int;// allocates memory on heap
    
    cout<<"\nBefore initialiaztion:"<<endl;
    cout<<"Address of int_ptr : "<<&(int_ptr)<<endl;
    cout<<"Value of int_ptr : (GARBAGE AS WE DID NOT INITILISE) "<<*(int_ptr)<<endl;
    
    cout<<"\nAfter initialiaztion:"<<endl;
    *(int_ptr) = 100;
    cout<<"Address of int_ptr : "<<&(int_ptr)<<endl;
    cout<<"Value of int_ptr : "<<*(int_ptr)<<endl;
    
    delete int_ptr;
    cout<<"\nAfter freeing the space:"<<endl;
    cout<<"Address of int_ptr : "<<&(int_ptr)<<endl;
    cout<<"Value of int_ptr : "<<*(int_ptr)<<endl;
    
    cout<< "\nDynamic memory allocation, array pointer"<< std::endl;
        
    int *(array_ptr) {nullptr};
    int size{};// does not allocate on heap
    cout << "Input the size of array to be created : ";
    cin >> size;
    array_ptr = new int[size];// allocates memory on heap
    
    cout<<"Address of int_ptr : "<<&(array_ptr)<<endl;
    cout<<"Value of int_ptr : (GARBAGE AS WE DID NOT INITILISE) " << *(array_ptr) << endl;
    
    int index {0};
    while(index < size) {
        *(array_ptr + index) = index; //derefenecing style
        //Same as
        //array_ptr[index] = index; // array type
        cout<<array_ptr[index]<<endl;
        index++;
    }

    getch();
    return 0;
}