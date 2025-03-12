#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;


int reverse(int x) 
{
        
        //check for over flows if overflow retyurn 0
        if(x>=(pow(2,32)-1) || (x<=pow(-2,31))) return 0;
        long remainder{},reverseNumber{};
        
        while(x!=0)
            {
                //check for over flows if overflow retyurn 0
                if (reverseNumber*10 > (1<<31)-1) return 0;
                remainder = x%10;
                reverseNumber = reverseNumber *10+ remainder;
                x/=10;
            }
        cout<<"Reverse of number: "<< reverseNumber<<endl;
        
        //check for over flows if overflow retyurn 0
        if(reverseNumber>=(pow(2,32)-1) || (reverseNumber<=pow(-2,31))) return 0;
        return reverseNumber;  
        
}


int main()
{
    cout<< "Reverse Number\n"<< std::endl;
    
    reverse(123);
    getch();
    return 0;
}