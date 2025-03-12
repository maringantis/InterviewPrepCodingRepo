#include<iostream>
using namespace std;
#include<conio.h>
template <class T>
 class select
 {
    T a[100];
    int n,i,j;
    public:
           
        void input(void);
        void ssort(void);
        void display(void);
        };
        template <class T>
      void select<T>::input(void)
      {
       cout<<"enter the number of elements\n";
       cin>>n;
       cout<<"enter the elements\n";
       for(i=1;i<=n;i++)
       {
          cin>>a[i];
          }
          }
          
        template <class T>
        void select<T>::ssort(void)
        {
          T temp;
          for(i=1;i<=n;i++)
          {
          int min=i;                
           for(j=i+1;j<=n;j++)
           {
              if(a[j]<a[min])
              {
               min=j;
                }
               temp=a[i];
               a[i]=a[min];
               a[min]=temp;
               }
               }
               }
               
          template <class T>
          void select<T>::display(void)
          {
            cout<<"elements after sorting\n";
            for(int i=1;i<=n;i++)
            {
             cout<<a[i]<<endl;
             }
             }
             
           int main()
           {
            select <int> b;
            b.input();
            b.ssort();
            b.display();
            _getch();
			return 0;
            }
                          
                         
