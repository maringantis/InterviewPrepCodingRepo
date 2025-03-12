#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
bool isAnagram(string s, string t) 
    {
        
        // int alphaCount[26]{};
        // int slength= s.length();
        // int tlength= t.length();
        // int i{0};
        
//         //if(slength<1 || slength<1){return -1;} 
//         while(i<slength)
//         {
            
//             char c=s[i];
//             // cout<<"Char: "<<c<<endl;
//             // cout<<"Char location: "<<c-'a'<<endl;
//             alphaCount[c-'a']++; 
//           //  cout<<"Char buffer value: "<<alphaCount[c-'a']<<endl;
//             i++;
//         }
        
//         int j{0};
//         //cout<<"Comparing now: \n\n";
//         while (j<tlength)
//         {
            
//             char c=t[j];
//             // cout<<"Char: "<<c<<endl;
//             // cout<<"Char location: "<<c-'a'<<endl;
//             alphaCount[c-'a']--; 
//              j++;
//         }
//         int k{};
//         int sum{0};
//         while (k<25)
//         {
//             sum= sum + alphaCount[k];
                        
//         }
        
//         if(sum=0) return true;
//         return false;
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        if(s==t)return true;
        return false;
    }
int main()
{
    cout<< "Valid Anagram\n"<< std::endl;
    
    cout<<"Are both the strings anagrams?? "<< boolalpha<<isAnagram("cat","act");
    getch();
    return 0;
}