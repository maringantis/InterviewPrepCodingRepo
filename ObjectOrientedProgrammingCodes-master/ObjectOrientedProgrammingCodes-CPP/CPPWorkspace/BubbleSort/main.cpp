#include <conio.h> 
#include <iostream>
#include <vector>
using namespace std;

vector <int> unsortedArr = {4,6,652,21,12,34,9,678,2,1};
void swapBasedOIndex(int num1, int num2);
void display();

int main()
{
    std::cout<< "Bubble Sort"<< std::endl;
    
    //vector elements
    cout<<"Elemenets of unsorted array : ";
    display();
    cout<<endl;
    
    int highest{};
    
    for(int i=0;i<unsortedArr.size();i++)
        {
            for(int j=i+1;j<unsortedArr.size();j++)
                {
                    if(unsortedArr.at(i) >= unsortedArr.at(j)) swapBasedOIndex(i,j);
                } 
        }
    
    cout<<"Elemenets of sorted array   : ";
    display();
    
    getch();
    return 0;
}

void display()
{
    for(auto num : unsortedArr)  cout<<num<<" ";
}

void swapBasedOIndex(int num1, int num2)
{
    int temp{};
    temp = unsortedArr.at(num1);
    unsortedArr.at(num1) = unsortedArr.at(num2);
    unsortedArr.at(num2)= temp;
    
}