#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
using namespace std;


int countPrimes(int n) 
    {
    
        if(n<=2) return 0;
        
        int flag{1};
        bool isPrime = true;
        n = n-1;
      //  if (n>4)
      //  {
            if(n%2==0)
            {
               // cout<<"Even range"<<endl;             
                n = n-1;
            //    cout<<"Changing number from "<<n+1<<" to "<<n<<endl; 
            }
           // else cout<<"Odd even range"<<endl;
       // }
        
        
        for(int i=n;i>=3;i=i-2)
        {
            isPrime =true;
            for(int j=3;j<=n;j=j+2)
            {
                if(i!=j) 
                {
                    if(i%j==0)
                    {
                        isPrime =  false;
                        //cout<<"Not prime: "<<i<<endl;
                        break;
                    }
                }
            }
            
            if(isPrime)
            {
               // cout<<"Prime number: "<<i<<endl;
                flag++;
            }
        }
        return flag;
    }
    

int main()
{
    cout<< "Counting Primes\n"<< std::endl;
    cout<<"Please enter the number to count the prime numbers between them: ";
    int range_number;
    cin>> range_number;
    
    cout<<"Total prime numbers from 0 to "<<range_number<<" are: "<<countPrimes(range_number);
    
    getch();
    return 0;
}