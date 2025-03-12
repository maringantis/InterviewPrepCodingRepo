using namespace std;
#include<iostream>
#include<conio.h>
struct node
{
       int info;
       node *ptr;
       }*head;
       node *temp,*h,*q,*y,*l,*o,*x,*k;
       int ch,n,pos,i;
       int main()
       {
             head=new node;
             cout<<"enter the data\n";
             cin>>head->info;
             head->ptr=NULL;
             label:
                   cout<<"enter ur choice\n";
                   cout<<"press 1: for insertion at the begging\n";
                   cout<<"press 2: for insertion at the end\n";
                   cout<<"press 3: for insertion at a particular position\n";
                   cout<<"press 4:for deletion at the begging\n";
                   cout<<"press 5:for deletion at the end\n";
                   cout<<"press 6:for deletion at a particular position\n";
                   cout<<"press 7:for display\n";
                   cin>>ch;
                   switch(ch)
                   {
                             case 1:
                                    temp=new node;
                                    cout<<"ENTER THE DATA\n";
                                    cin>>temp->info;
                                    temp->ptr=head;
                                    head=temp;
                                    break;
                             case 2:
                                    if(head==NULL)
                                    {
                                    temp=new node;
                                    cout<<"enter the data\n";
                                    cin>>temp->info;
                                    head->ptr=temp;
                                    temp->ptr=NULL;
                                    }
                                    else
                                    {
                                        q=head;
                                        while(q->ptr!=NULL)
                                        {
                                                      q=q->ptr;
                                                      }
                                                      temp=new node;
                                                      cout<<"enter the data\n";
                                                      cin>>temp->info;
                                                      q->ptr=temp;
                                                      temp->ptr=NULL;
                                                      }
                                                      break;
                               case 3:
                                      cout<<"enter the position to insert \n";
                                      cin>>pos;
                                     // i=0;
                                     h=head;
                                      for(i=1;i<pos-1;i++)
                                      {
                                               h=h->ptr;    
                                                  
                                                    }
                                                      y=h->ptr;
                                                    temp=new node;
                                                    cout<<"enter the data\n";
                                                    cin>>temp->info;
                                                    h->ptr=temp;
                                                    temp->ptr=y;
                                                    break;
                               case 4:
                                       l=head;
                                       head=head->ptr;
                                       delete l;
                                       break;
                               case 5:
                                      if(head->ptr==NULL)
                                      {
                                                   delete head;
                                                   }
                                       else
                                       {             
                                    o=head;
                                    k=head->ptr;
                                    while(k->ptr!=NULL)
                                    {
                                                  k=k->ptr;
                                                  o=o->ptr;
                                                  }
                                                  delete k;
                                                  o->ptr=NULL;
                                                  }
                                                  break;
                               case 6:
                                    cout<<"enter the position\n";
                                    cin>>pos;
                                    i=0;
                                    x=head;
                                    y=head->ptr;
                                    while(i<pos-2)
                                    {
                                                  x=x->ptr;
                                                  y=y->ptr;
                                                  }
                                                  temp=y->ptr;
                                                  delete y;
                                                  x->ptr=temp;
                                                  break;
                                 case 7:
                                         h=head;
                                         if(h==NULL)
                                                  {
                                                  cout<<"THE LIST IS EMPTY!!!!!\n";
                                                  }
                                                  else
                                                    {
                                                    cout<<"THE ELEMENTS IN THE LIST ARE\n";
                                                    while(h!=NULL)
                                                      {
                                                      cout<<""<<h->info;
                                                      h=h->ptr;
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
                                                               _getch(); return 0; 
                                                               }                
                                                   
                                                         
                                                  
                                              
                                                            
                                                                                 
