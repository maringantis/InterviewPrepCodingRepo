#include<iostream>
using namespace std;
#include<conio.h>
#define MAX 10
template<class T>
class queue
{
   public:
      T q[100];
      int rear,front;
      T x;
      queue()
      {
        front=0;
        rear=0;
        }
       void insert(T);
       T delete1(void);
       void display(void);
       };
       
     template<class T>
     void queue<T>::insert(T x)
     {
      if(rear==MAX)
      {
         cout<<"\n queue is full\n";
         }
         else
         {
          q[rear++]=x;
          }
          }
         
         template<class T>
         T queue<T>::delete1(void)
         {
          if(front==rear)
          {
             cout<<"\n queue is empty\n";
             }
            else
            {  
              return q[front++];
              }
              }
              
           template<class T>
           void queue<T>::display(void)
           {
            if(front==rear)
            cout<<"\n no elements in the queue";
            else
            {
              for(int i=front;i<rear;i++)
              cout<<q[i];
              }
              }
             
             int main()
             {
               queue <int> q;
               int ch;
               cout<<"\n1.INSERT";
               cout<<"\n2.DELETE";
               cout<<"\n3.DISPLAY";
               cout<<"\n4.EXIT";
               
               while(1)
               {
                 cout<<"\n enter choice";
                 cin>>ch;
                 switch(ch)
                 {
                    case 1:
                       cout<<"\n enter element to be inserted";
                       cin>>q.x;
                       q.insert(q.x);
                       break;
                       
                     case 2:
                        if(q.front==q.rear)
                        cout<<"\n queue is empty";
                        else
                         cout<<"deleted element is"<<q.delete1();
                         break;
                         
                       case 3:
                          q.display();
                          break;
                          
                        case 4:
                           exit(0);
                           
                       default:cout<<"\n invalid";
                       }
                       }
                       }                                              
                                             
         
                                           
