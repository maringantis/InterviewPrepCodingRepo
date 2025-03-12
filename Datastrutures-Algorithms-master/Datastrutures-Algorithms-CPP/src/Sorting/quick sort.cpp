#include<iostream>
using namespace std;
#include<conio.h>
template <class T>
 class quick
 { public:
    T a[100];
    int n,i,j,low,high,key,t;
    
        void qsort(int [],int,int);
        int partition(int a[100],int low,int high);
        
        };
     
          
          template<class T>
          int quick<T>::partition(int a[100],int low,int high)
          {
             key=a[low];
             j=low+1;
             j=high;
             do
             {
               while((i<=high)&&(key>=a[i]))
               i++;
               while((i>=low)&&(key<a[j]))
               j--;
               if(i<j)
               {
                 int t=a[i];
                 a[i]=a[j];
                 a[j]=t;
                 }
                 }while(i<=j);
               t=a[low];
               a[low]=a[j];
               a[j]=t;
               return j;
               }
          
        template<class T>
        void quick<T>::qsort(int a[100],int low,int high)
        {
           int j;
           if(low<high)
           {
             j=partition(a,low,high);
             qsort(a,low,j-1);
             qsort(a,j+1,high);
             }
             }
                 
                 int main()
                 { 
                    quick <int>q;
                    int a[100],n;
                    cout<<"enter the number of elements\n";
                  cin>>n;
                cout<<"enter the elements\n";
                   for(int i=1;i<=n;i++)
                   {
               cin>>a[i];
                 }
                    q.qsort(a,1,n);
                     cout<<"\n sorted elements\n";
                for(int j=1;j<=n;j++)
                {
                  cout<<a[j];
                  }
                    _getch(); return 0;
                    }
                                       
                      
                 
                                              
