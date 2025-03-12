#include<iostream>
using namespace std;
#include<conio.h>
template <class T>
 class merge1
 {
       public:
    T a[100],b[100];
    T c[100];
    int n,i,j,k,m;       
        void input(void);
        void combine(void);
        void display(void);
        };
        
        
        template <class T>
      void merge1<T>::input(void)
      {
       cout<<"enter the number of elements in first array\n";
       cin>>m;
       cout<<"enter the elements\n";
       for(i=0;i<m;i++)
       {
          cin>>a[i];
          }
           cout<<"enter the number of elements in second array\n";
       cin>>n;
       cout<<"enter the elements\n";
       for(j=0;j<n;j++)
       {
          cin>>b[j];
          }
          
          }
          
       template<class T>
       void merge1<T>::combine(void)
       {
             i=0,j=0,k=0;
             while((i<m)&&(j<n))
             {
              if(a[i]<b[j])
              {
                 c[k]=a[i];
                 k++;
                 i++;
                 }
                 else if(a[i]>b[j])
                 {
                  c[k]=b[j];
                  k++;
                  j++;
                  }    
                else if(a[i]==b[j])
                {
                   c[k]=a[i];
                   i++;
                   k++;
                   c[k]=b[j];
                      j++;
                      k++;
                      }
                      }
                   while(i<m)
                   {
                     c[k]=a[i];
                     i++;
                     k++;
                     }
                    
                    while(j<n)
                    {
                       c[k]=b[j];
                       j++;
                       k++;
                       }
                       }
                    template<class T>
                    void merge1<T>::display(void)
                    {
                     for(i=0;i<k;i++)
                     {
                        cout<<c[i]<<" ";
                        }
                        }
                        
                      int main()
                      {
                       merge1 <int> m;
                       m.input();
                       m.combine();
                       m.display();
                       _getch(); return 0;
                       }                                                                             
