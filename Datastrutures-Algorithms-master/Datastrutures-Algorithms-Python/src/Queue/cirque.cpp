using namespace std;
#include<iostream>
#include<conio.h>
int front,rer,n,i,j,x[5],mn;
//front=0;
//rer=0;
char ch,ch1;
void enqueue(int);
void dequeue(void);
int main()
{
      front=0;
rer=0;
label1:
      cout<<"ENTER NO OF ELEMENTS U WANT TO ENTER IN QUEUE\n";
      cin>>n;
      if(n>5)
      {
             cout<<"THE QUEUE WILL BE OVERFLOWING\n";
             
             goto label1;
             }
      label:
      for(i=0;i<n;i++)
      {
                      cout<<"enter the element\n";
                      cin>>j;
                      //j=x[i];
                      enqueue(j);
                      }
                      for(i=0;i<5;i++)
                      {
                                      cout<<""<<x[i];
                                      }
                      cout<<"DO U WANT TO DELETE[Y/N]\n";
                      cin>>ch;
                      if(ch=='y')
                      {
                               dequeue();
                               }
                               for(i=0;i<5;i++)
                               {
                                               cout<<""<<x[i];
                                               }
                                               cout<<"\n";
                               cout<<"DO U WHANT TO ENTER ANY ELEMENT[Y\N]\n";
                               cin>>ch1;
                               if(ch1=='y')
                               {
                                         cout<<"ENTER THE NUMBER OF ELEMENTS U WHANT TO ENTER \n";
                                         cin>>n;
                                         /*for(i=rer;i<n;i++)
                                         {
                                                           cout<<"enter the element\n";
                                                           cin>>x[i];
                                                           mn=x[i];
                                                           enqueue(mn);
                                                           }*/
                                         goto label;
                                              }
                               _getch(); return 0;
                               }
                               void enqueue(int t)
                               {
                                    rer=(rer+1)%5;
                                   /*if(rer==front)
                                    {
                                                  cout<<"THE QUEUE IS FULL\n";
                                                  }
                                                  else*/
                                                  {
                                                      x[rer]=t;
                                                      }
                                                      if(rer==front)
                                    {
                                                  cout<<"THE QUEUE IS FULL\n";
                                                  }
                                    
                                                      }
                                                      void dequeue()
                                                      {
                                                           front=(front+1)%5;
                                                           if(front==rer)
                                                           {
                                                                         cout<<"THE QUEUE IS EMTY\n";
                                                                         }
                                                                         else
                                                                         {
                                                                             x[front]=0;
                                                                             }
                                                                             }
                                    
                               
                      
