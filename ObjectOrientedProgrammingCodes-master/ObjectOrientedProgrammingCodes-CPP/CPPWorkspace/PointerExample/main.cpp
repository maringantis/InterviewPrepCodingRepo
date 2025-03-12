#include <iostream>
#include <conio.h> 

void decorater();
void voidPointerTest(int* p);
void ptrToptr(int* p);

int main()
{
    
    try
    {
        int a;
        int  *p;
        // Initilising value of 'p' as address of a 
        p=&a;
        std::cout<< "BEFORE INT initaialization:\nAddress Where the int variable 'a' is stored is " << p <<"\nValue of refered int: "<< *p<<"\nAddress of pointer variable: " <<&p<<std::endl;
        a = 200;
        decorater();
        std::cout<< "AFTER INT initaialization:\nAddress Where the int variable 'a' is stored is " << p <<"\nValue of refered int: "<< *p<<"\nAddress of pointer variable: " <<&p<<std::endl;
        
        //Changing the values of a by chnaginf the dereferencing the pointer
        //decorater();
        //*p=300;
        //std::cout<<"Changing the values of 'a' to 300 by referencing the pointer *p= 300\nValues of a: "<< a <<std::endl;
        
        decorater();
        //Test void poniter
        voidPointerTest(p);

        //Testing ptr to ptr 
        decorater();
        ptrToptr(p);
        
        getch();
        return 0;
    }
    catch (const std::exception e)
    {
        return -1;
    }
}

void decorater()
{
    try
    {
       std::cout<<"\n________________________________________\n"; 
    }
    catch(const std::exception ex)
    {
        return;
    }
}

void ptrToptr(int* p )
{
    try
    {
        int* p1 = p;
        int** p2;
        int*** p3;
        //p1= p;
        std::cout<< "\nPointer:\nAddress of the pointer (p) referencing is : " << p1<<" as p1 pointer refernece";
        std::cout<< "\nValue of the pointer (p) referencing is : " << *p1<<" from p1 pointer refernece";
        decorater();
        p2 = &p1;
        std::cout<< "\nPointer to pointer\nAddress of the pointer (p) referencing from p1 is : " << p2<<" as p2 pointer refernece";
        std::cout<< "\nValue of the pointer to pointer(p) referencing is : " << **p2<<" from p2 pointer refernece";
        
        decorater();
        p3 = &p2;
        std::cout<< "\nPointer to pointer to pointer\nAddress of the pointer (p) referencing from p1 is : " << p3<<" from p3 pointer refernece";
        std::cout<< "\nValue of the Pointer to pointer to pointer (p) referencing is : " << ***p3<<" from p3 pointer refernece";
    }
    catch (const std::exception ex)
    {
    return;
    }
}
void voidPointerTest(int* p)
{
    try
    {
     void* p1;
     p1 = p;
     std::cout<< "\nVOID POINTER & Typecasting \n";
     std::cout<< "Address of the pointer (p) referencing is : " << p1<<" as void pointer refernece";
     
     
     //Typecasting void point to int pointer and dereferencing
     // void* -> int *
     //Dereferening *ptr
     //defreencing void pointer == *(type *)ptr
     std::cout<< "Value of the pointer (p) referencing is : " << *(int *)p1<<" as void pointer refernece";
     
        
    }
    catch(const std::exception ex)
    {
        return;
    }
}