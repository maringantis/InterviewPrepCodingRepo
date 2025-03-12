using namespace std;
#include<iostream>
#include<conio.h>
struct node
{
       int info;
       node *ptr;
       }*head;
       node *temp,*q,*h,*k;
       int ch,n;
       int main()
       {
             head=new node;
             cout<<"enter the data\n";
             cin>>head->info;
             head->ptr=NULL;
             label:
                   cout<<"enter ur choice\n";
                   cout<<"press 1: for insertoon\n";
                   cout<<"press 2:for deletion\n";
                   cout<<"press 3: for display\n";
                   cin>>ch;
                   switch(ch)
                   {
                             case 1:
                                    if(head->ptr==NULL)
                                    {
                                      temp=new node;
                                      cout<<"enter the data\n";
                                      cin>>temp->info;
                                      head->ptr=temp;
                                      temp->ptr=NULL;
                                      }
                                      else
                                      {
                                          h=head;
                                          while(h->ptr!=NULL)
                                          {
                                                             h=h->ptr;
                                                             }
                                                             temp=new node;
                                                             cout<<"enter the data\n";
                                                             cin>>temp->info;
                                                             h->ptr=temp;
                                                             temp->ptr=NULL;
                                                             }
                                                             break;
                                 case 2:
                                        if(head==NULL)
                                        {
                                                      cout<<"SORRY!!!!! U CANT DELETE THE QUEUE UNDERFLOWS\n";
                                                      goto lab;
                                                      }
                                                      q=head;
                                                      head=head->ptr;
                                                      q->ptr=head;
                                                      delete q;
                                                      break;
                                case 3:     k=head;
                                            if(k==NULL)
                                            {
                                                       cout<<"the queue is empty\n";
                                                       }
                                                       else
                                                       {
                                                           cout<<"the elements in the queue are\n";
                                                           while(k!=NULL)
                                                           {
                                                                         cout<<""<<k->info;
                                                                         k=k->ptr;
                                                                         }
                                                                         }
                                                                         break;
                                }
                                cout<<"do u want to repeat press 1:\n";
                                cin>>n;
                                if(n==1)
                                {
                                        goto label;
                                        }
                                        lab:
                                            _getch(); return 0;
                                            }                                                                                                     
