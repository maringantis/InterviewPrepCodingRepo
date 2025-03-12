#include<iostream>
using namespace std;
#include<conio.h>
class node
{
   int data;
   class node *link;
   class node *p,*t,*prev,*first,*last;
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
       last=NULL;
       }
       };
      void node::insert_end(int x)
      {
         if(first==NULL)
         {
           first=new node;
           first->data=x;
           first->link=first;
           last=first;
           }
           
         else
         {
           
           p=new node;
           p->data=x;
           last->link=p;
           p->link=first;
           last=p;
           }                       
                               
}

void node::insert_begin(int x)
{
   if(first==NULL)
   {
     first=new node;
     first->data=x;
     first->link=first;
     last=first;
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
        cout<<"\nlist empty";
        }
     else if(p->link==p)
     cout<<p->data<<"->"<<p->data;  
     else
     {
       while(p->link!=first)
       {
          cout<<p->data<<"->";
          p=p->link;
          }
        cout<<p->data<<"->"<<first->data;
        }                              
}

void node::insert_pos(int x)
{
   int pos;
   p=first;
   if(p==NULL)
   {
   cout<<"\nlist empty";
}
   else
{
       int j=1;   
     while(p->link!=first)
     {
         p=p->link;
         j++;
         }                 
        cout<<"enter position"<<endl;        
        cin>>pos;
        if((pos<=j)&&(pos>1))
        {
        int i=0;
        p=first;
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
        else
        cout<<"\ninvlid position\n";
        }   
        }
   void node::delete_begin(void)
   {
     if(first==NULL)
     cout<<"\nlink is empty";
     else if(first->link==first)
     first=NULL;
     else
     first=first->link;
     last->link=first;
     }                     

     void node::delete_end(void)
     {
        p=first;
        if(p==NULL)
        {
          cout<<"\nno elements in the list";
          }
          else if(first->link==first)
           first=NULL; 
        else
        {
          while(p->link!=first)
          {
          prev=p;
          p=p->link;
          }
          prev->link=first;
          last=prev;
          }
          }
          
        void node::delete_pos(void)
        { 
          int pos;
          p=first;
          if(p==NULL)
          {
          cout<<"\nlist empty";
          }
          else
          {  
            int j=1;   
            while(p->link!=first)
           {
           p=p->link;
           j++;
           }            
            cout<<"\nenter position";
            cin>>pos;
            if((pos>1)&&(pos<j))
            {
            int i=0;
            p=first;
            while(i<pos-1)
            {
              prev =p;
              p=p->link;
              i++;
              }                  
               prev->link=p->link;
               }               
          else
          cout<<"\ninvalid position\n";
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
