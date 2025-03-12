#include<iostream>
using namespace std;
#include<conio.h>
class node
{
   int data;
   class node *llink,*rlink;
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
           first->llink=first;
           first->rlink=first;
           last=first;
           }
           
         else
         {
           
           p=new node;
           p->data=x;
           last->rlink=p;
           p->llink=last;
           p->rlink=first;
           first->llink=p;
           last=p;
           }                       
                               
}

void node::insert_begin(int x)
{
   if(first==NULL)
   {
     first=new node;
     first->data=x;
     first->llink=first;
     first->rlink=first;
     last=first;
     }
    else
    {
      p=new node;
      p->data=x;
      p->rlink=first;
      first->llink=p;
      last->rlink=p;
      p->llink=last;
      first=p;
      }
      }
                       
void node::display(void)
{  int x,ch;
   cout<<"1.display from beginning\n";
   cout<<"2.display from end\n";
   cout<<"enter the choice\n";
   cin>>ch;
   switch(ch)
   {
    case 1:           
    p=first;
    if(p==NULL)
    {
        cout<<"\nlist empty";
        }
        
     else if(p->rlink==p)
     cout<<p->data<<"->"<<p->data;  
     else
     {
       while(p->rlink!=first)
       {
          cout<<p->data<<"->";
          p=p->rlink;
          }
        cout<<p->data<<"->"<<first->data;
        }                              
     break;
       
      case 2:
        p=last;
        if(p==NULL)
        {
        cout<<"list empty\n";
        }
        else if(p->llink==p)
        cout<<p->data<<"->"<<p->data;
        else
        {
          while(p->llink!=last)
          {
            cout<<p->data<<"->";
            p=p->llink;
            }
           cout<<p->data<<"->"<<last->data;
           }
           break;
           
      default:cout<<"invalid\n";
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
     while(p->rlink!=first)
     {
         p=p->rlink;
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
          p=p->rlink;
          i++;
          }
        t=new node;
        t->data=x;
        p->llink->rlink=t;
        t->llink=p->llink;
        t->rlink=p;
        p->llink=t;
        }
        else
        cout<<"\ninvlid position\n";
        }   
        }
   void node::delete_begin(void)
   {
     if(first==NULL)
     cout<<"\nlink is empty";
     else if(first->rlink==first)
     first=NULL;
     else
     first=first->rlink;
     last->rlink=first;
     first->llink=last;
     }                     

     void node::delete_end(void)
     {
        p=first;
        if(p==NULL)
        {
          cout<<"\nno elements in the list";
          }
          else if(first->rlink==first)
           first=NULL; 
        else
        {
          while(p->rlink!=first)
          {
          p=p->rlink;
          }
          p->llink->rlink=first;
          last=p->llink;
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
            while(p->rlink!=first)
           {
           p=p->rlink;
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
              p=p->rlink;
              i++;
              }                  
               p->llink->rlink=p->rlink;
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
