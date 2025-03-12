
#include <conio.h> 
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //std::cout<< "Hello,World"<< std::endl;
    vector<int> nums;
    nums= {1,2,3,4,5,6,7,8,9,10};
  for(auto num: nums) 
      {
          cout<<"Num: "<<num<<endl;
          }
          
int scores[]{10,20,30};

for(auto score:scores)
    cout<<score<<endl;
    
    
for(auto val:{1,2,4,4,6,8})
    cout<<val<<endl;

for(auto c:"Sunny")
    cout<<c;
    getch();
    return 0;
}