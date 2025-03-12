#include<iostream>
using namespace std;
#include<conio.h>
class node
{ public:
  int data;
  class node *llink,*rlink;
  class node *p,*t,*prev,*first,*last;

    node()
    {
     p=NULL;
     first=NULL;
     prev=NULL;
     last=NULL;
     t=NULL;
     }
   void insert_begin(int);
   void insert_pos(int);
   void insert_end(int);
   void delete_begin(void);
   void delete_pos(void);
   void delete_end(void);
   void display(void);
};
void node::insert_begin(int x)
{
  if(first==NULL)
  {
        first=new node;
        first->data=x;
        first->llink=NULL;
        first->rlink=NULL;
        last=first;
        }
                      
    else
    {
      p=new node;
      p->data=x;
      p->llink=NULL;
      p->rlink=first;
      first->llink=p;
      first=p;
      }
      }
                
void node::insert_end(int x)
{
    p=first;
    if(p==NULL)
    {
      p=new node;
      p->data=x;
      p->llink=NULL;
      p->rlink=NULL;
      first=p;
      last=p;
      }
      else
      {
         while(p->rlink!=NULL)
         {
           p=p->rlink;
           }
        last=new node;
        last->data=x;
        last->rlink=NULL;
        last->llink=p;
         p->rlink=last;
         }
         }
         
     void node::insert_pos(int x)
     {
       int pos;
       p=first;
       if(p==NULL)
       {
         cout<<"\nlink is empty";
         p->data=x;
         p->rlink=NULL;
         p->llink=NULL;
         first=p;
         last=p;
        }
       else
        {
         cout<<"\nenter position";
         cin>>pos;
         int i=1;
         while(p->rlink!=NULL)
          { 
           p=p->rlink;
           i++;
           }
          if(pos!=1 && pos<=i)  
           {p=first;
             int j=1;
             while(j<pos)
               {
                  prev=p;
                  p=p->rlink;
                  j++;
               }
         t=new node;
         t->llink=prev;
         prev->rlink=t;
         p->llink=t;
         t->rlink=p;
         t->data=x;
         }
         else  
         {
         cout<<"\ninvalid position";
         }                     
         }
         }
         
      void node::delete_begin()
      {
        if(first==NULL)
        {
        cout<<"\nlist is empty";
        }
              
        else if(first->rlink==NULL)
        {
            first=NULL;
            }
         else 
         {
           first=first->rlink;
           first->llink=NULL;
           }
           }         
         
       void node::delete_end()
       {
        p=first;
        if(p==NULL)
        {
          cout<<"\nlist empty";
          }
       else if(first->rlink==NULL)
           {
              first=NULL;
              }
          else
          {
            while(p->rlink!=NULL)
            {
              prev=p;
              p=p->rlink;
              }
            prev->rlink=NULL;
            last=prev;
            }
            }
         
       void node::delete_pos()
       {
         int pos;
         p=first;
         if(p==NULL)
         {
          cout<<"\nlink is empty";
          }
       else
       {
         cout<<"\nenter position";
         cin>>pos;     
           int i=1;
        while(p->rlink!=NULL)
        {
           p=p->rlink;
           i++;
           }
         if((pos<i)&&(pos!=1))
         {
           p=first;
           int j=0;
           while(j<pos-1)
           {
            prev=p;
            p=p->rlink;
            j++;
            }
           prev->rlink=p->rlink;
           p->rlink->llink=prev;
           }
            else
            {
              cout<<"\nposition invalid";
              }
              }
              }
              
            void node::display()
            {
              int ch;
              cout<<"\n1.display from begining";
              cout<<"\n2.display from end";
              cout<<"\nenter choice";
              cin>>ch;
              switch(ch)
                {     
                   case 1:
                          p=first;
                           if(p==NULL)
                           {
                           cout<<"\nlist empty";
                           }
                           else
                           {
                               while(p->rlink!=NULL)
                               {
                                 cout<<p->data<<"->";
                                 p=p->rlink;
                                }
                                cout<<p->data;
                            }
                           break;                                                
                   case 2:
                          p=last;
                          if(p==NULL)
                           {
                              cout<<"\nlist is empty";
                           }
                          else
                           {
                              while(p->llink!=NULL)
                               {
                                  cout<<p->data<<"->";
                                   p=p->llink;
                                }
                               cout<<p->data;
                            }
                           break; 
                           default:"\ninvalid\n";
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
                                                                          
         
         
                                           
     
     
     
     
     
     
     
     
     
     
     
                   
