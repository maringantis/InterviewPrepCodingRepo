#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string reverseString(string s) 
    {
        int len = s.length();
        //if(len<2){return s;}
        int i{0},j{len-1};

        while(i<len/2 && j>(len/2))
            {
                cout<<"String Length: "<<len<<endl;
                cout<<"s["<<i<<"]: "<<s[i]<<endl;
                cout<<"s["<<j<<"]: "<<s[j]<<endl;
                char temp{};
                temp= s[i];
                s[i] =s[j];
                s[j] = temp;
                i++;
                j--;
            }
            
            // Swap character starting from two
    // corners
    // for (int i = 0; i < n / 2; i++)
    // {
    //             int temp= str[i];
    //             str[i] =str[n-i-1];
    //             str[n-i-1] = temp;
    // }
       // swap(str[i], str[n - i - 1]);
       
        cout<<"Reversed String: "<<s<<endl;
        return s;
    }

int main()
    {
        cout<< "Reverse String\n"<< endl;
        
        reverseString("hello");
        getch();
        return 0;
    }