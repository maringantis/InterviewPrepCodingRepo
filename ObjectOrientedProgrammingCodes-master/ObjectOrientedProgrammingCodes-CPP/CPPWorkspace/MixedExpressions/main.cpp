
 #include <conio.h> 
 #include <iostream>
using namespace std;
int main()
{
    std::cout<< "Enter 3 values for average"<< std::endl;
    int num1{},num2{},num3{};
    int total{};
    const int count {3};
    cin>>num1>>num2>>num3;
    
    total = num1 + num2+ num3;
    double avg{};
    
    avg = static_cast<double>(total)/count;
    
    cout<<"Average: "<<avg;
    getch();
    return 0;
}