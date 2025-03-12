using namespace std;
#include<iostream>
#include<conio.h>
int push(int);
int pop(void);
int display(void);
int x[10],top=-1,i,n,k;
char t;
int main()
{
    cout<<"enter the number of elements u whant to enter\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
                    cout<<"enter the element\n";
                    cin>>k;
                    push(k);
                    }
                    cout<<"do you whant to delete press[Y/N]"<<endl;
                    cin>>t;
                    display();
                    if(t=='y')
                    {
                            pop();
                            }
                            else
                            {
                                cout<<"k";
                                }
                                display();
                                _getch(); return 0;
                                }
                                int push(int j)
                                {
                                         top++;
                                         x[top]=k;
                                         }
                                        int  pop()
                                         {
                                              x[top]=0;
                                              top--;
                                              }
                                              int display()
                                              {
                                                          for(i=0;i<top;i++)
                                                          {
                                                                          cout<<"\n"<<x[i];
                                                                          }
                                                                          }
                                 
