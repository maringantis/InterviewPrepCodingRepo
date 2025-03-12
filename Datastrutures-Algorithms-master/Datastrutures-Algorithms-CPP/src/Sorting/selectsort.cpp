using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
      int x[20],i,j,n,max,t,k,l;
      cout<<"enter the number of elements to be entered\n";
      cin>>n;
      cout<<"enter the elements\n";
      for(l=0;l<n;l++)
      {
                     cin>>x[l];
                      }
                      for(i=n;i>0;i--)
                      {
                                      max=0;
                                      for(j=1;j<i;j++)
                                      {
                                                      if(x[max]<x[j])
                                                      {
                                                                     max=j;
                                                                     }
                                                                     }
                                                                  t=x[max];
                                                                  x[max]=x[i-1];
                                                                  x[i-1]=t;
                                                                  }
                            cout<<"the sorted elements are\n";
                            for(k=0;k<n;k++)
                            {
                                            cout<<""<<x[k];
                                            }
                                            _getch(); return 0;
                                            }                                         
                      
                      
