using namespace std;
#include<iostream>
#include<conio.h>
void push(char);
void pop();
void push1(char);
void display(int,int);
 char x[20],y[20];
      int i,n,top1;
int main()
{
     
      //top=-1;
      top1=-1;
      cout<<"enter how many do u  whant to enter including the operators and operands\n";
      cin>>n;
      for(i=0;i<n;i++)
      {
                      cout<<"enter \n";
                      cin>>x[i];
                      push(x[i]);
                      }
                     /* for(i=0;i<n;i++)
                      {
                                      cout<<""<<x[i];
                                      }*/
                      for(i=0;i<n;i++)
                      {
                                      cout<<""<<y[i];
                                      }
                                      cout<<"\n";
                                    
                      
                     /* for(i=0;i<n;i++)
                      {
                                      if(x[i]='+'||x[i]='-'||x[i]=*||x[i]='/')
                                      {
                                                                              pop();
                                                                              }*/
                                                                              for(i=0;i<n-1;i++)
                                                                              {
                                                                                              pop();
                                                                                              }
                                                                                                /*for(i=0;i<n;i++)
                                      {
                                                      cout<<""<<x[i];
                                                      }*/
                                                     /* for(i=top;i>top-2;i--)
                                                      {
                                                                      push1(x[top]);
                                                                      }*/
                                                                      for(i=n;i!=0;i--)
                                                                      {
                                                                                       push(x[i]);
                                                                                       }
                                                                     for(i=0;i<=n;i++)
                                                                      {
                                                                                      cout<<""<<y[i];
                                                                                      }
                      
                      _getch(); return 0;
                      }
                      void push(char m)
                      {
                                top1++;
                                y[top1]=m;
                                
                                }
                            void pop()
                             {
                                  y[top1]=0;
                                  top1--;
                                  }
                                  /*void push1(char l)
                                  {
                                       top++;
                                       x[top]=l;
                                       }*/
                                  
                                    
      
