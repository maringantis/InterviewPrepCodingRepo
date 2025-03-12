//Write a C++ program that displays a Letter Pyramid from a user-provided std::string.
//
//Prompt the user to enter a std::string and then from that string display a Letter Pyramid as follows:
//
//It's much easier to understand the Letter Pyramid given examples.

#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    cout<< "Letter Pyramid\n"<< std::endl;
    cout<<"Enter pyramid message: ";
    string pyramidString{};
    cin>>pyramidString;

    int printLength = pyramidString.length();
    int i{};
    
    while(i<printLength)
    {
        int difSpace{printLength-i-1};
        string printLine(difSpace,' ');
        
        int remainingTofill =  (printLength-1) - difSpace;
       // cout<< "Rem: "<< remainingTofill<<endl;
        for(int j=0;j<remainingTofill;j++)
            {
                printLine += pyramidString.at(j);    
            }
        printLine += pyramidString.at(i);
        for(int j=remainingTofill;j>0;j--)
            {
                printLine += pyramidString.at(j-1);    
            }
        cout<<printLine<<endl;
        i++;
    }
    
   // cout<<"\nPyramid:\n\n"<<pyramidString;
    
    
    
    getch();
    return 0;
}