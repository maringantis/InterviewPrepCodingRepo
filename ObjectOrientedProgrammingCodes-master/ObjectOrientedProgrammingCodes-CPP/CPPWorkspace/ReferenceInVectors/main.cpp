#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    cout<< "\nReferences in vectors"<< std::endl;
    
    vector <string> stooges {"Larry","Moe","Curly"};
    
    cout<<"Regular for loop before modifiying"<<endl;
    for (int i=0; i<stooges.size(); i++)
        {
            cout<<stooges[i]<<endl;
            stooges[i] = "This will change";
            //cout<<stooges[i]<<endl;
        }
        
     cout<<"\nRegular for loop before modifiying"<<endl;
     
        for (int i=0; i<stooges.size(); i++)
        {
            cout<<stooges[i]<<endl;
        }
        
    stooges ={"Larry","Moe","Curly"};
    cout<<"\nRanged based for loop before modifying"<<endl;
    //cout<<"Wont change as it makes a copy and changes copy"<<endl;    
    for(auto str : stooges)
        {
            cout<<str<<endl;
            str ="Wont change";
//            cout<<str<<endl;
            
        }
    
    cout<<"\nRanged based for loop before modifying"<<endl;
    cout<<"Wont change as it makes a copy and changes copy"<<endl;  
    
    for(auto str : stooges) cout<<str<<endl;
     
     cout<<"\nSo in ranged based for loop we need to use references to modify the elements"<<endl;
     cout<<"\nRanged based for loop before modifying using refereneces"<<endl; 
     for(auto &str : stooges)
        {
            cout<<str<<endl;
            str ="This will change";
//            cout<<str<<endl;
            
        }
     cout<<"\nRanged based for loop after modifying using refereneces"<<endl; 
     for(auto str : stooges) cout<<str<<endl;
     
        
    getch();
    return 0;
}