#include <iostream>
#include <conio.h> 
int main()
{
   int a;
    int  *p;
    p=&a;
    std::cout<< "Address Where the int variable  is stored is" << p <<std::endl;
    //std::cout<< "Hello,World"<< std::endl;
    
    getch();
    return 0;
}