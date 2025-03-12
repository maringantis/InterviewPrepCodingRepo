#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class node
{
      public:
    int data;
    node *link,*rear,*front,*p;
    void insert(int);
    void del();
    void display();
    node()
    {
          rear=NULL;
          front=NULL;
          p=NULL;
    }
};
void node::insert(int x)
{
     if(rear==NULL)
     {
                   rear=new node;
                   rear->data=x;
                   rear->link=NULL;
                   front=rear;
      }
      else
      {
          p=new node;
          p->data=x;
          p->link=NULL;
          rear->link=p;
          rear=p;
       }
}
void node::del()
{
     if(front==NULL)
     cout<<"Queue underflow";
     else if(front==rear)
     {
     cout<<"deleted element:"<<front->data;
     front=NULL;
     rear=NULL;
     }
     else
     {
         cout<<"deleted element:"<<front->data;
         front=front->link;
         }
         }
void node::display()
{
     if(front==NULL)
     cout<<"Queue is empty";
     else
     {
         p=front;
         while(p->link!=NULL)
         {
                             cout<<p->data<<"->";
                             p=p->link;
         }
         cout<<p->data;
         }
         }
         int main()
         {
               node n;
               int ch;
               cout<<"\n1.Insert\n2.Delete\n3.Display\n4.Exit";
               while(1)
               {
                      cout<<"\nEnter choice\:";
                      cin>>ch;
                      switch(ch)
                      {
                                case 1:
                                     int x;
                                     cout<<"Enter element to be inserted";
                                     cin>>x;
                                     n.insert(x);
                                     break;
                                     case 2:
                                          n.del();
                                          break;
                                          case 3:
                                               n.display();
                                               break;
                                               case 4:
                                                    exit(0);
                                                    break;
                                                    default:
                                                            cout<<"Invalid";
                                                            }
                                                            }
                                                            _getch(); return 0;
                                                            }
                                      
          
