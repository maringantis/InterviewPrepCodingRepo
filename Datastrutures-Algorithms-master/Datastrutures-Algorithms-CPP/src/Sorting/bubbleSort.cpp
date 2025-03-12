#include<iostream>
#include <conio.h>
using namespace std;
template <class T>
 
class bubbleSort
 {
    T a[100];
    int n,i,j;
    public:
        void input(void);
        void bsort(void);
        void display(void);
 };
        
template <class T>
void bubbleSort<T>::input(void)
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
void bubbleSort<T>::bsort(void)
{
	T temp;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
               
template <class T>
void bubbleSort<T>::display(void)
{
cout<<"elements after sorting\n";
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<endl;
	}
}
             
int main()
{
	bubbleSort <int> b;
	b.input();
	b.bsort();
	b.display();
	_getch();
	return 0;
}
                          
                                    
               
                                                                                                
