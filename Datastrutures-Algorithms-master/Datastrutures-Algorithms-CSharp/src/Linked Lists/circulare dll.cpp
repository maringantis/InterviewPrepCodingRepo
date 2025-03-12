#include<iostream>
using namespace std;
#include<stdlib.h>
#include<conio.h>
void insert(int);
void display();
class node
{
      public:
      int n,data,count;
      class node *llink;
      class node *rlink,*p,*t,*prev,*first,*last;
      node()
      {
            p=prev=first=last=t=NULL;
            count=0;
      }
void insert_end(int);
void insert_begin(int);
void insert_pos(int);
void delete_end();
void delete_begin();
void delete_pos();
void display();
};
void node::insert_end(int n)
{
     if(p==NULL)
     {
                p=new node;
                p->data=n;
                p->rlink=NULL;
                p->llink=NULL;
                first=p;
     }
     else
     {
         p=first;
         while(p->rlink!=NULL)
         {
            p=p->rlink;
         }
         t=new node;
         t->data=n;
         t->rlink=t;
         t->llink=p;
   }
}
void node::insert_begin(int n)
{
     p=new node;
     p->data=n;
     p->rlink=first;
     p->llink=p;
     first=p;
}
void node::insert_pos(int n)
{
     int i=0,pos;
     p=first;
     cout<<"\nEnter pos:";
     cin>>pos;
     while(i<pos-1)
     {
                   prev=p;
                   p=p->rlink;
                   i++;
     }
     t=new node;
     t->data=n;
     t->llink=prev;
     prev->rlink=p;
     t->rlink=p;
     p->llink=t;
}
void node::display()
{
     p=first;
     if(p==NULL)
     cout<<"\nNo Elements in List";
     else
     {
         while(p->rlink!=NULL)
         {
            cout<<p->data<<"->";
            p=p->rlink;
         }
         cout<<p->data;
    }
    p=first;
    }
void node::delete_end()
{
     p=first;
     if(p==NULL)
     cout<<"\nNO elements in list";
     else if(p->rlink==NULL)
     {
          p=NULL;
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
    }
}
void node::delete_begin()
{
     if(first->rlink=NULL)
     {
         first=NULL;
     }
     else if(first==NULL)
     cout<<"\n No Elements in the list";
     else
     {
         first=first->rlink;
         first->llink=NULL;
}
}
void node::delete_pos()
{
     int pos,i;
     cout<<"Enter pos:";
     cin>>pos;
     p=first;
     while(i<pos-1)
     {
                   prev=p;
                   p=p->rlink;
                   i++;
    }
    prev->rlink=p->rlink;
}
int main()
{
node n1;
cout<<"\n 1.Insert_begin";
cout<<"\n 2.Insert_pos";
cout<<"\n 3.Insert_end";
cout<<"\n 4.Delete_begin";
cout<<"\n 5.Delete_pos";
cout<<"\n 6.Delete_end";
cout<<"\n 7.Display";
cout<<"\n 8.End";
int ch,n;
while(1)
{
cout<<"\nEnter choice:";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\n Enter element:";
cin>>n;
n1.insert_begin(n);
break;
case 2:
cout<<"\n Enter element:";
cin>>n;
n1.insert_pos(n);
break;
case 3:
cout<<"\n Enter element:";
cin>>n;
n1.insert_end(n);
break;
case 4:
n1.delete_begin();
break;
case 5:
n1.delete_pos();
break;
case 6:
n1.delete_end();
break;
case 7:
n1.display();
break;
default:
cout<<"\ninvalid"; 
}
}
_getch(); return 0;
return 0;
}
