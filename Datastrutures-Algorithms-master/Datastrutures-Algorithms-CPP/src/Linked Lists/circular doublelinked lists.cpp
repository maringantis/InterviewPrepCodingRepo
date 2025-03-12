#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
void insert(int);
void display();
class node
{
      public:
      int n,data,count;
      class node *link;
      class node *p,*t,*prev,*first,*last;
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
void node::insert_end(int)
{
     if(p==NULL)
     {
                p=new node;
                p->data=n;
                p->link=p;
                first=p;
     }
     else
     {
         p=first;
         while(p->link!=first)
         {
                              p=p->link;
         }
         t=new node;
         t->data=n;
         t->link=first;
         p->link=t;
         last=t;
   }
}
void node::insert_begin(int n)
{
     p=new node;
     p->data=n;
     p->link=first;
     last->link=p;
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
                   p=p->link;
                   i++;
     }
     t=new node;
     t->data=n;
     prev->link=t;
     t->link=p;
}
void node::display()
{
     p=first;
     if(p==NULL)
     cout<<"\nNO Elements in List";
     else
     {
         while(p->link!=first)
         {
            cout<<p->data<<"->";
            p=p->link;
         }
         cout<<p->data;
         cout<<"->";
         p=p->link;
    }
    cout<<p->data;
    cout<<"->"<<p->link->data;
    }
void node::delete_end()
{
     p=first;
     if(p==NULL)
     cout<<"\nNO elements in list";
     else if(p->link==first)
     {
          p=NULL;
          first=NULL;
     }
     else
     {
         while(p->link!=first)
         {
            prev=p;
            p=p->link;
         }
         prev->link=first;
    }
}
void node::delete_begin()
{
     first=first->link;
     last->link=first;
}
void node::delete_pos()
{
     int i=0,pos;
     cout<<"Enter pos:";
     cin>>pos;
     p=first;
     while(i<pos-1)
     {
                   prev=p;
                   p=p->link;
                   i++;
    }
    prev->link=p->link;
}
int main()
{
node n;
cout<<"\n 1.Insert_begin";
cout<<"\n 2.Insert_pos";
cout<<"\n 3.Insert_end";
cout<<"\n 4.Delete_begin";
cout<<"\n 5.Delete_pos";
cout<<"\n 6.Delete_end";
cout<<"\n 7.Display";
cout<<"\n 8.End";
int ch,x;
while(1)
{
cout<<"\nEnter choice:";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\n Enter element:";
cin>>x;
n.insert_begin(x);
break;
case 2:
cout<<"\n Enter element:";
cin>>x;
n.insert_pos(x);
break;
case 3:
cout<<"\n Enter element:";
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
default:
cout<<"\ninvalid"; 
}
}
_getch(); return 0;
return 0;
}

