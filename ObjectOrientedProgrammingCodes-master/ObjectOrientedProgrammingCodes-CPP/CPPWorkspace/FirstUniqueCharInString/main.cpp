#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
using namespace std;
 int firstUniqChar(string s) 
    {
        
        int alphaCount[26]{};
        int length= s.length();
        int i{0};
        
        while(i<length)
        {
            
            char c=s[i];
            cout<<"Char: "<<c<<endl;
            cout<<"Char location: "<<c-'a'<<endl;
            alphaCount[c-'a']++; 
            cout<<"Char buffer value: "<<alphaCount[c-'a']<<endl;
            i++;
        }
        
        int j{0};
        cout<<"Comparing now: \n\n";
        while (j<length)
        {
            
            char c=s[j];
            cout<<"Char: "<<c<<endl;
            cout<<"Char location: "<<c-'a'<<endl;
            
            
            if(alphaCount[c-'a']==1) 
             {
                 cout<<"Returing "<<c<<" at : "<<j;
                 return j;
             };
             j++;
        }
        
    }


int main()
{
    cout<< "First Unique Character in a String\n"<< std::endl;
    
    firstUniqChar("loveleetcode");
    getch();
    return 0;
}