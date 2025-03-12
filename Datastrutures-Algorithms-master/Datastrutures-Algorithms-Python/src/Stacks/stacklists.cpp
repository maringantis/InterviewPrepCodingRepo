#include<iostream>
using namespace std;
#include<conio.h>
class node
{
   int data;
   class node *link,*top,*p,*t;
   public:
          void push(int);
          void pop(void);
          void display(void);
          node()
          {
            top=NULL;
            p=NULL;
            t=NULL;
            }
            };
            
     void node::push(int x)
     {
       if(top==NULL)
       {
         top=new node;
         top->data=x;
         top->link=NULL;
         }
        else
        {
         p=new node;
         p->data=x;
         p->link=top;
         top=p;
         }
         }
         
       void node::pop(void)
       {
         if(top==NULL)
         cout<<"stack is empty"<<endl;
         
         else
         {
           cout<<"the popped element is"<<top->data<<endl;
           top=top->link;
           }
           }
         
        void node::display(void)
        {
          if(top==NULL)
          cout<<"stack is empty"<<endl;
          else
          {
           p=top;
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
             cout<<"\n1.PUSH";
             cout<<"\n2.POP";
             cout<<"\n3.DISPLAY";
             cout<<"\n4.EXIT";
             int ch,x;
             while(1)
             {
               cout<<"\nenter the choice";
               cin>>ch;
               switch(ch)
               {
                 case 1:
                    cout<<"enter element to be inserted"<<endl;
                    cin>>x;
                    n.push(x);
                    break;
                    
                 case 2:
                     n.pop();
                     break;
                     
                   case 3:
                      n.display();
                      break;
                    
                    case 4:
                       exit(0);
                       default:"\nINVALID";
                       }
                       }
                       _getch(); return 0;
                       }                                                            
         
                                                     
                          
