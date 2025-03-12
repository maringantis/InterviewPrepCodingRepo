#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> fizzBuzz(int n) {
        

        
        vector<string> fizzVector(n);
        //n=n+1;
        int i{1};
        
         while(i<n)
         {
             cout<<i<<endl;
            if(i%3!=0 && i%5!=0)
            {
                fizzVector.at(i) = to_string(i);    
            }
             else if((i%3==0) && (i%5==0)) fizzVector.at(i) ="FizzBuzz";
             else if(i%3==0){fizzVector.at(i) ="Fizz";}
             else if(i%5==0){fizzVector.at(i) ="Buzz";}
             
             i++;
         }
        return fizzVector;
    }

int main()
{
    cout<< "Hello,World"<< std::endl;
    vector <string> temp = fizzBuzz(15);
    int i{};
    for(auto num : temp) cout<<num<<" ";
    getch();
    return 0;
}