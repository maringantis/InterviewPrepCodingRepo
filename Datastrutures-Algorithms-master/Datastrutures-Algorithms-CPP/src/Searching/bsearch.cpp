#include<iostream>
using namespace std;
#include<conio.h>
template <class T>
class bsearc
{
 public:
  T x,a[100];
  int low,high,mid;
  int n;
  void input(void);
  void search(void);
};

template<class T>
void bsearc<T>::input(void)
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
 
 template<class T>
 void bsearc<T>::search(void)
 { 
    low=1;
    high=n;
    while(low<=high)
    {
      mid=(low+high)/2;
      if(x==a[mid])
      {
       cout<<"element found";
       break;
       }
       else if(x<a[mid])
         high=mid-1;
         else 
         low=mid+1;
         }
         if(low>high)
         cout<<"element not found\n";
         }
         
     int main()
     {
       bsearc <int> b;
       b.input();
       b.search();
       _getch(); return 0;
       }        
         
        
                                                
