using namespace std;
#include<iostream>
#include<conio.h>
struct node
{
       int info;
       node *ptr;
       }*head;
       node *temp,*tail,*q,*h,*l,*k;
       int ch,n,lk,i;
       int co;
     int main()
     {
          co=0;
           head=new node;
           //tail=new node;
           cout<<"enter the data\n";
           cin>>head->info;
          tail=head;
           tail->ptr=head;
           co++;
           label:
                 cout<<"enter ur choce\n";
                 cout<<"press 1:for creation\n";
                 cout<<"press 2:for deletion\n";
                 cout<<"press 3:for another options\n";
                 cout<<"press 4: for display\n";
                 cin>>ch;
                 switch(ch)
                 {
                           case 1:
                                   if(co!=5)
                                   {
                                               if(tail==head)
                                               {
                                                                  temp=new node;
                                                                  co++;
                                                                  cout<<"enter the data\n";
                                                                  cin>>temp->info;
                                                                  tail->ptr=temp;
                                                                 tail=temp;
                                                                  temp->ptr=head;
                                                                  }
                                                                  else if(co>5)
                                                                  {
                                                                       cout<<"u cant enter \n";
                                                                       }
                                                                  else
                                                                  {
                                                                      q=head;
                                                                      while(q!=tail)
                                                                      {
                                                                                       q=q->ptr;
                                                                                       }
                                                                                       temp=new node;
                                                                                       co++;
                                                                                       cout<<"enter the data\n";
                                                                                       cin>>temp->info;
                                                                                       q->ptr=temp;
                                                                                       tail=temp;
                                                                                       
                                                                                       tail->ptr=head;
                                                                                       //temp->ptr=NULL;
                                                                                       }
                                                                                       }
                                                                                       cout<<"count"<<co;
                                                                                       break;
                                 case 2:
                                      //if(co!=5)
                                      {
                                         h=head;
                                         head=head->ptr;
                                         delete h;
                                         //k=tail;
                                         tail->ptr=head;
                                         co--;
                                         }
                                        /* else
                                         {
                                             cout<<"u cant delete\n";
                                             }*/
                                         break;
                                case 3:
                                       cout<<"enter the no of elements u want\n";
                                       cin>>lk;
                                        l=tail;
                                        //l->ptr=head;
                                        for(i=0;i<lk;i++)
                                        {
                                        cout<<"enter the data\n";
                                        cin>>l->info;
                                        l=l->ptr;
                                        }
                                        break;
                                       /* k=head;
                                        while(k->ptr!=NULL)
                                        {
                                                      k=k->ptr;
                                                      }
                                                      k->ptr=head;
                                                      cout<<"enter the data\n";
                                                      cin>>k->info;
                                                      break;*/
                                 case 4:
                                        l=head;
                                        while(l!=tail)
                                        {
                                                      cout<<""<<l->info;
                                                      l=l->ptr;
                                                      }
                                                      cout<<""<<l->info;
                                                      break;
                                                      }
                                                      cout<<"do u want to repeat\n";
                                                      cin>>n;
                                                      if(n==1)
                                                      {
                                                              goto label;
                                                              }
                                                              _getch(); 
															  return 0; 
                                                              }                             
                                                                                                 
       
