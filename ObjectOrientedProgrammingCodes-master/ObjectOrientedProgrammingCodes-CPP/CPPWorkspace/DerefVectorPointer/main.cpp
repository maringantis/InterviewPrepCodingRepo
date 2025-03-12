#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    //cout<< "Hello,World"<< std::endl;
    
    vector<string> stooges {"Apple","Ball","Cat"};
    vector<string> *vect_ptr {nullptr};
    
    vect_ptr =&(stooges);
    for(auto stooge : *(vect_ptr))
        cout<< stooge<<endl;
        
    (*(vect_ptr)).push_back("Dog");
    cout<<"Inserting :"<<endl;
     for(auto stooge : *(vect_ptr))
        cout<< stooge<<endl;
    getch();
    return 0;
}