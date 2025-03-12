#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

 bool isPalindrome(string s) 
    {
        
        int length{s.length()};
        
        if (length<2) return true;
        //transform(data.begin(), data.end(), data.begin(), ::tolower);
        cout<<"Removing cases\n\nBefore transforming: "<<s<<endl;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<"After removing cases: "<<s<<endl;
        cout<<"Replacing special charcters:\n\n";
//        s.erase(remove(s.begin(),s.end(),' '),s.end());
//        cout<<"After removing spaces: "<<s<<endl;
        int i{};
        while(i<length)
            {
                char c{s[i]};
                cout<<"Char: "<<c<<endl;
                int diff{c-'a'};
                cout<<"Diff: "<<diff<<endl;
                if((diff>=0) && (diff<26))
//                    s.erase(i);
                {
                    diff = diff;
                }
                else s[i]=' ';
                                    i++;
                            }       
        cout<<"Removing spaces:\n\n";
        s.erase(remove(s.begin(),s.end(),' '),s.end());
        cout<<"After removing spaces: "<<s<<endl;       
        cout<<"Length of s: "<<s.length()<<endl;
    
        return equal(s.begin(),s.begin()+(s.length()/2),s.rbegin());
        
    }
    
int main()
{
    cout<< "Valid Palidrome\n"<< std::endl;
    
    cout<<"Is string a palindrome? "<< boolalpha<<isPalindrome("& Nin n%iN");
    getch();
    return 0;
}