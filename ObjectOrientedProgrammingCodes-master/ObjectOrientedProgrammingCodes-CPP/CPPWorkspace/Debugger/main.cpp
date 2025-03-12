#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void swap(int *num1,int *num2); //decalaration of by pointers

void swap(int *num1,int *num2) // defination of by pointers
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    //cout<< "Hello,World"<< std::endl;
    
    int i{5};
    
    while(i>0)
    {
        cout<<i<<endl;
        i--;
    }
    
    int a{100},b{200};
    
    cout<<"Before swapping:\n\nA: "<<a<<"\nB: "<<b<<endl;
    swap(&a,&b);
    cout<<"After swapping:\n\nA: "<<a<<"\nB: "<<b<<endl;
       
    getch();
    return 0;
}