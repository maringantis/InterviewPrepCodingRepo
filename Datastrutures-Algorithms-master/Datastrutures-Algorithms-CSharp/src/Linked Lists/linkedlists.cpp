#include<iostream>
using namespace std;
#include<conio.h>
class node
{
   int data;
   class node *link;
   class node *p,*t,*prev,*first;
   public:
     void insert_begin(int);
     void insert_pos(int);
     void insert_end(int);
     void delete_begin(void);
     void delete_end(void);
     void delete_pos(void);
     void display(void);
     node()
     {
       p= NULL;
       t=NULL;
       prev=NULL;
       first=NULL;
       }
       };
      void node::insert_end(int x)
      {
         p=first;
         if(p==NULL)
         {
           p=new node;
           p->data=x;
           p->link=NULL;
           first=p;
           }
           
         else
         {
           
           while(p!=NULL)
           {
             prev=p;
             p=p->link;
             }
           t=new node;
           t->data=x;
           t->link=NULL;
           prev->link=t;
           }                       
                               
}

void node::insert_begin(int x)
{
   if(first==NULL)
   {
     first=new node;
     first->data=x;
     first->link=NULL;
     }
    else
    {
      p=new node;
      p->data=x;
      p->link=first;
      first=p;
      }
      }
                       
void node::display(void)
{
   p=first;
   if(p==NULL)
   {
        cout<<"list empty";
        }
     else
     {
       while(p->link!=NULL)
       {
          cout<<p->data<<"->";
          p=p->link;
          }
        cout<<p->data;
        }                              
}

void node::insert_pos(int x)
{
   int pos;
   p=first;
   if(p==NULL)
   {
   cout<<"list empty";
}
   else
     {
        cout<<"enter position"<<endl;
        cin>>pos;
        int i=0;
        while(i<pos-1)
        {
          prev=p;
          p=p->link;
          i++;
          }
        t=new node;
        t->data=x;
        prev->link=t;
        t->link=p;
        }
        }   
       
   void node::delete_begin(void)
   {
     if(first==NULL)
     cout<<"link is empty";
     else if(first->link==NULL)
     first=NULL;
     else
     first=first->link;
     }                     

     void node::delete_end(void)
     {
        p=first;
        if(p==NULL)
        {
          cout<<"no elements in the list";
          }
          
        else
        {
          while(p->link!=NULL)
          {
          prev=p;
          p=p->link;
          }
          prev->link=NULL;
          }
          }
          
        void node::delete_pos(void)
        {
          int pos;
          p=first;
          if(p==NULL)
          {
          cout<<"list empty";
          }
          else
          {
            cout<<"enter position";
            cin>>pos;
            int i=0;
            while(i<pos)
            {
              prev =p;
              p=p->link;
              i++;
              }                  
               prev->link=p->link;
               }               
          
          }                               
    

int main()
{
  node n;
  cout<<"\n 1.insert begin";
  cout<<"\n 2.insert position";
  cout<<"\n 3.insert end";
  cout<<"\n 4.delete begin";
  cout<<"\n 5.delete pos";
  cout<<"\n 6.delete end";
  cout<<"\n 7.display";
  cout<<"\n 8.exit";
  int x,ch;
  while(1)
  {
     cout<<"\nenter choice";
       cin>>ch;
       switch(ch)
       {
         case 1:
           cout<<"\nenter element to be inserted";
           cin>>x;
           n.insert_begin(x);
           break;
           
         case 2:
            cout<<"\n enter element to be inserted";
            cin>>x;
            n.insert_pos(x);
            break;
            
         case 3:
            cout<<"\n enter the element to be inserted";
            cin>>x;
            n.insert_end(x);
            break;
            
        case 4:
           n.delete_begin();
           break;
         
        case 5:
            n.delete_pos();
            break;
            
         case 6:
             n.delete_end();
             break;
             
         case 7:
             n.display();
             break;
             
          case 8:exit(0);
          
       default:cout<<"\ninvalid";
       }
       }
       _getch(); return 0;
       }                
                                            











