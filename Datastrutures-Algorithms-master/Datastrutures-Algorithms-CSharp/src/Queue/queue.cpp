#include<iostream>
#include<conio.h>
using namespace std;
#define MAX 5
class queue
{
      public:
             int rear,front;
             char q[100],x;
             queue()
             {
                    rear=-1;
                    front=0;
                    }
                    void insert(int x);
                    int remove();
                    void display();
                    };
                    void queue::insert(int x)
                    {
                         if(rear==MAX-1)
                         cout<<"Queue is full";
                         else 
                         q[++rear]=x;
               }
                                        int queue::remove()
                                        {
                                            if(rear<front)
                                            cout<<"Queue is empty";
                                            else
                                            return q[front++];
                                            }
                                            void queue::display()
                                            {
                                                 int i;
                                                 if(rear<front)
                                                 cout<<"Queue is empty";
                                                 else
                                                 {
                                                     for(i=front;i<=rear;i++)
                                                     cout<<q[i]<<"\n";
                                                     }
                                                     }
                                                     int main()
                                                     {
                                                         queue q;
                                                         int ch;
                                                         cout<<"Enter choice:";
                                                         cout<<"1.insert"<<"\n";
                                                         cout<<"2.remove"<<"\n";
                                                         cout<<"3.display"<<"\n";
                                                         cout<<"4.Exit"<<"\n";
                                                         while(1)
                                                         {
                                                                 cout<<"Enter choice";
                                                                 cin>>ch;
                                                                 switch(ch)
                                                                 {
                                                                            case 1:
                                                                                 cout<<"Enter elements in queue";
                                                                                 cin>>q.x;
                                                                                 q.insert(q.x);
                                                                                 break;
                                                                                 case 2:
                                                                                      q.remove();
                                                                                      break;
                                                                                      case 3:
                                                                                           q.display();
                                                                                           break;
                                                                                           case 4:
                                                                                                exit(0);
                                                                                                default:
                                                                                                cout<<"CHOICE INVALID";
                                                                                                break;
                                                                                                }
                                                                                                }
                                                                                                _getch(); return 0;
                                                                                                return 0;
                                                                                                }
