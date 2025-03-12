
#include <conio.h> 
#include <iostream>
#include <vector>

using namespace std;

void PrintVector(vector<int> arr)
{
    int i=0;
    for(i;i<arr.size();i++) cout<<arr.at(i) <<" ";
    
    arr.push_back(55);
    cout<<arr[i];
    arr.pop_back();
    cout<<arr[i];
    
}

int main()
{
    std::cout<< "Hello,World"<< std::endl;
        
    vector<int> numbers;
    numbers={1,22,3,4,55,5,6,6,567,8};
    PrintVector(numbers);
    //getch();
    cin.get();
    return 0;
}