#include<iostream>
using namespace std;
#include<conio.h>
template <class T>
class lsearch
{ public:
   T x,a[100];
    int n;
    void input(void);
    void search(void);
};
    template <class T>
   void lsearch<T>::input(void)
   { 
     cout<<"enter the number of elements you want to enter\n";
     cin>>n;
     cout<<"enter the elements\n";
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
        }
        cout<<"enter the element you want to search\n";
        cin>>x;
        }
                
     template <class T>
     void lsearch<T>::search(void)
     {
          int i;
       for( i=0;i<n;i++)
       {
         if(a[i]==x)
         {
           cout<<"element found\n";
           break;
           }
           }
          if(i==n)
          {
            cout<<"element not found\n";       
            }
            }
            
       int main()
       {
         lsearch <int> l;
         l.input();
         l.search();
         _getch(); return 0;
         }         
         
         
                                     
