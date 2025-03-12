#include<iostream>
using namespace std;
#include<conio.h>
#define max 5
class cqueue
{
 public:
   int q[100];
   int front,rear;
   void insert(int);
   int delete1(void);
   void display(void);
   cqueue()
   {
      rear=-1;
      front=-1;
      }
      };
      
     void cqueue::insert(int x)
     {
       if(((front==0)&&(rear==max-1))||(rear+1==front))
       cout<<"queue is full\n";
       
       else
       {
        if(rear==max-1)
        {
          rear=-1;
          q[++rear]=x;
          }
          else
          {
           q[++rear]=x;
           }
           }
          if(front==-1)
            front=0;
            } 
            
       int cqueue::delete1(void)
       {
         int x;
         if(front==-1)
         cout<<"queue is empty\n";
         else
         {
          x=q[front];
          if(front==rear+1)
          front=rear=-1;
          
          else
          {
            if(front==max-1)
            front=0;
            else
            front++;
             }
            }
            return x;
            }  
                    
       void cqueue::display(void)
       {
          int i;
          if(front==-1)
          cout<<"circular queue is empty\n";
          else
          {
            if(rear<front)
            {
               for(i=front;i<=max-1;i++)
               cout<<q[i];
               
               for(i=0;i<=rear;i++)
               cout<<q[i];
               
               cout<<endl;
               }
              else
              {
               for(i=front;i<=rear;i++)
               cout<<q[i];
              cout<<endl;
              }
              }
              }     
                                   
         int main()
         {
            cqueue c;
            int x,ch;
            cout<<"1.insert\n";
            cout<<"2.delete\n";
            cout<<"3.display\n";
            cout<<"4.exit\n";
           while(1)
           {
            cout<<"enter the choice\n";
            cin>>ch;
            
            switch(ch)
            {
             case 1:
                 cout<<"enter the element to be inserted\n";
                 cin>>x;
                 c.insert(x);
                 break;
                 
              case 2:
                 cout<<"the deleted element is"<< c.delete1()<<endl;
                  break;
                  
              case 3:
                   c.display();
                   break;
                   
                case 4:
                    exit(0);
                    break;
                    
         default:cout<<"enter the correct choice\n";
         }
         }
         _getch(); return 0;
         }
                        
                   
                           
                                        
            
            
                                               
