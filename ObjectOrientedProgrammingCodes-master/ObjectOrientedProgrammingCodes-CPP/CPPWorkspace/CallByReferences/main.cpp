#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
using namespace std;


void swap(int &num1,int &num2); //decalaration of by reference 
void swap(int *num1,int *num2); //decalaration of by pointers
 
int main()
{
    cout<< "Call by reference swapping numbers:\n"<< std::endl;
    int a{100},b{60};
    cout<<"Before swapping:\n\nA: "<<a<<"\nB: "<<b<<endl;
    swap(a,b);
    cout<<"After swapping:\n\nA: "<<a<<"\nB: "<<b<<endl;
    getch();
    return 0;
}

void swap(int &num1,int &num2) // defination of by reference 
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}


void swap(int *num1,int *num2) // defination of by pointersx`
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}