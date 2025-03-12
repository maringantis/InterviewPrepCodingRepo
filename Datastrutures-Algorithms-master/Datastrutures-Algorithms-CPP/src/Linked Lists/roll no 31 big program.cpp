#include<iostream>
#include<conio.h>
//program for linked lists
using namespace std;
class node
{
      public:
      int data;
      node *link;
      node *p,*t,*prev,*first;
      node()
      {
            p=NULL;
            t=NULL;
            prev=NULL;
            first=NULL;
      }
            void insert_begin(int);
            void insert_pos(int);
            void insert_end(int);
            void delete_begin(void);
            void delete_pos(void);
            void delete_end();
            void display(void);
            };
            void node::insert_end(int x)
            {
                 p=first;
                 if (p==NULL)
                 {
                             p=new node;
                             p->data=x;
                             p->link=NULL;
                             first=p;
                 }
                             while (p->link!=NULL)
                             {
                                   prev=p;
                                   p=p->link;
                             }
                                   t=new node;
                                   t->data=x;
                                   t->link=NULL;
                                   prev->link=t;
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
                                                                           cout<<"No node in list";
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
                                                                                                        cout<<"list is empty";
                                                                                                        else
                                                                                                        {
                                                                                                            cout<<"enter pos";
                                                                                                            cin>>pos;
                                                                                                            int i=0;
                                                                                                            while(i<pos)
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
                                                                                                                             cout<<"list empty";
                                                                                                                             else
                                                                                                                             first=first->link;
                                                                                                                        }
                                                                                                                             void node::delete_end(void)
                                                                                                                             {
                                                                                                                                  p=first;
                                                                                                                                  if(p==NULL)
                                                                                                                                  cout<<"list empty";
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
                                                                                                                                                           if(p==NULL)
                                                                                                                                                           cout<<"list empty";
                                                                                                                                                           else
                                                                                                                                                           {int i=0;
                                                                                                                                                           cout<<"enter pos";
                                                                                                                                                           cin>>pos;
                                                                                                                                                           while(i<pos-1)
                                                                                                                                                           {
                                                                                                                                                                         prev=p;
                                                                                                                                                                         p=p->link;
                                                                                                                                                                         i++;
                                                                                                                                                                         }
                                                                                                                                                                         prev->link=p->link;
                                                                                                                                                                         }
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
                                                                                                                                                                               cout<<"\nEnter choice";
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
                                                                                                                                                                                              
                                                                                                                                                                               
                                                                                                                                                                                                        
                                                                                                            
