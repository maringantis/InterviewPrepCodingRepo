#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    cout<< "Hello,World"<< std::endl;
    
    int scores [] {100,2,46,6767,-1};
    int *scores_ptr{nullptr};
    
    cout<<"Scores first element" << *scores<<endl; // alternate to scores[i]
    scores_ptr = scores;
    
    cout<<"Scores first element from score_ptr"<<scores_ptr[0] <<endl; //Alternate to *(scores_ptr +1)
    
    while(*(scores_ptr) != -1) 
        {
            cout<<*(scores_ptr)<<endl;
            scores_ptr++;
            
            //or one step  cout<<*(scores_ptr)++<<endl; // dereferences and points to next location after that
            
        }
        
    int *(temp) {nullptr};
    cout<<*(temp)<<endl;
    getch();
    return 0;
}