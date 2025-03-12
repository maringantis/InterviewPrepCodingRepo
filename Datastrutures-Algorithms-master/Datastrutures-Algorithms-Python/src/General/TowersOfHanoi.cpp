using namespace std;
#include<iostream>
#include<conio.h>
void push(char);
void push1(char);
void push2(char);
void pop(void);
void pop1(void);
void pop2(void);
char x[20],y[20],z[20],o;
int i,j,n,top,top1,top2;
int main()
{
      cout<<"enter the number of disc in tower1\n";
      cin>>n;
      cout<<"enter the disc\n";
      top=-1;top1=-1;top2=-1;
      for(i=0;i<n;i++)
      {
                      cin>>x[i];
                      o=x[i];
                      push(o);
                      }
                      cout<<"TOWER 1\n";
                                           for(i=0;i<n;i++)
                                           {
                                              cout<<"\n"<<x[i];
                                              }
                                              cout<<"TOWER 2\n";
                                              for(i=0;i<n;i++)
                                              {
                                                              cout<<"\n"<<y[i];             
                                                              }
                                                              cout<<"TOWER 3\n";
                                                              for(i=0;i<n;i++)
                                                              {
                                                                              cout<<"\n"<<z[i];
                                                                              }
                      /*for(i=n;i>=top;i++)
                      {*/
                      label:
                            for(i=n;i>=top;i--)
                      push2(x[top]);
                      for(i=n;i>=top;i--)
                      pop();
                      /*if(top1=-1)
                      {
                                 goto label;
                                 }
                                 else
                                 {*/
                                     //label:
                                           //for(i=0;i<=top1;i++)
                                           //{
                                                                 for(i=n;i>=top;i--)
                                           push1(x[top]);
                                           for(i=n;i>=top;i--)
                                           pop();
                                           //}
                                          /* for(i=0;i<=top1;i++)
                                           {
                                                               push2(y[i]);
                                                               }
                                                               for(i=0;i<=top1;i++)
                                                               pop1();*/
                                           for(j=0;j<=top2;j++)
                                           {
                                           push1(z[j]);
                                           }
                                           for(j=0;j<=top2;j++)
                                           {
                                           pop2();
                                           }  
                                           while(top=0)
                                           {    goto label;
                                                       }
                                           
                                           //}
                                           cout<<"TOWER 1\n";
                                           for(i=0;i<n;i++)
                                           {
                                              cout<<"\n"<<x[i];
                                              }
                                              cout<<"TOWER 2\n";
                                              for(i=0;i<n;i++)
                                              {
                                                              cout<<"\n"<<y[i];             
                                                              }
                                                              cout<<"TOWER 3\n";
                                                              for(i=0;i<n;i++)
                                                              {
                                                                              cout<<"\n"<<z[i];
                                                                              }
                                                                             // }
                                                                              _getch(); return 0;
                                                                              }
                                                                              void push(char t)
                                                                              {
                                                                                   top++;
                                                                                   x[top]=t;
                                                                                   }
                                                                                   void push1(char c)
                                                                                   {
                                                                                        top1++;
                                                                                        y[top1]=c;
                                                                                        }
                                                                                        void push2(char d)
                                                                                        {
                                                                                             top2++;
                                                                                             z[top2]=d;
                                                                                             }
                                                                                             void pop()
                                                                                             {
                                                                                                  x[top]=0;
                                                                                                  top--;
                                                                                                  }
                                                                                                  void pop1()
                                                                                                  {
                                                                                                       y[top1]=0;
                                                                                                       top1--;
                                                                                                       }
                                                                                                       void pop2()
                                                                                                       {
                                                                                                            z[top2]=0;
                                                                                                            top2--;
                                                                                                            }
                                                                                             
                                           
                      
