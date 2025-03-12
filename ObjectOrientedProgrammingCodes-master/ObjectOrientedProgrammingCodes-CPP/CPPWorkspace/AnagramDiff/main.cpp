#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    cout<< "Hello,World"<< std::endl;
    
    string a{"btoe"};
    string b{"aeeg"};
    
    sort(a.begin(),a.end());
    sort(b.begin(), b.end());
    
    cout<<"A: "<<a<<endl;
    cout<<"B: "<<b<<endl;
    getch();
    return 0;
}