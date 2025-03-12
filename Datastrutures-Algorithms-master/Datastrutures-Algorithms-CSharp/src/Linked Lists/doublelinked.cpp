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
      
    void node::insert_begin(int x)
    {
      if(first==NULL)
      {
       first->data=x;
       first->llink=NULL;
       first->rlink=NULL;
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
      {p=first;
        if(p==NULL)
        {
            p->data=x;
            p->llink=NULL;
            p->rlink=NULL;
            }
         else
         {
            while(p->rlink!=NULL)
            {
               prev=p;
               p=p->rlink;
               } 
              last=new node;
              last->data=x;
              last->rlink=NULL;
              last->llink=p;
              p->rlink=last;
              prev->rlink=p;
              p->llink=prev;
              }
              }
              
         void node::insert_pos(int x)
         {
                  
              
              
              
                               
                                   
                          
      
      
      
      
      
      
      
      
      
           
                           
