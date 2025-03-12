#include<iostream>
using namespace std;
#include<conio.h>
template <class T>
 class insert
 {
    T a[100];
    int n,i,j;
    public:
           
        void input(void);
        void isort(void);
        void display(void);
        };
        template <class T>
      void insert<T>::input(void)
      {
       cout<<"enter the number of elements\n";
       cin>>n;
       cout<<"enter the elements\n";
       for(i=1;i<=n;i++)
       {
          cin>>a[i];
          }
          }
        
        template<class T>
        void insert<T>::isort(void)
        {
            for(i=2;i<=n;i++)
            {
             if(a[i]<a[i-1])
             {
               int temp=a[i];
               a[i]=a[i-1];
               a[i-1]=temp;
               j=i-1;
               }
               
               while(j>1)
               {
                 if(a[j]<a[j-1])
                 {
                    int temp=a[j];
                    a[j]=a[j-1];
                    a[j-1]=temp;
                    
                    j--;
                    }
                    else
                    break;
                     
                    
                    }
                    }
                    }
                    
                template <class T>
          void insert<T>::display(void)
          {
            cout<<"elements after sorting\n";
            for(int i=1;i<=n;i++)
            {
             cout<<a[i]<<endl;
             }
             }
             
           int main()
           {
            insert <int> b;
            b.input();
            b.isort();
            b.display();
            _getch(); return 0;
            }     
                    
                                                                             
