using namespace std;
#include<iostream>
#include<conio.h>
struct node
{
       int info;
       node *ptr;
       }*head;
       node *temp,*q,*h,*k;
       int n,ch;
       int main()
       {
             head=new node;
             cout<<"ENTER THE DATA\n";
             cin>>head->info;
             head->ptr=NULL;
             //h=head;
             //k=head;
             label:
                   cout<<"ENTER UR CHOICE\n";
                   cout<<"PRESS 1:FOR CREATION \n";
                   cout<<"PRESS 2:FOR DELETION \n";
                   cout<<"PRESS 3:FOR DISPLAY\n";
                   cin>>ch;
                   switch(ch)
                   {
                             case 1:
                                    temp=new node;
                                    cout<<"ENTER THE DATA\n";
                                    cin>>temp->info;
                                    temp->ptr=head;
                                    head=temp;
                                    //h=temp;
                                    break;
                             case 2:
                                    /*if(head->ptr==NULL)
                                         {
                                         cout<<"SORRY!!!!!!!! WE CAN`T DELETE THE STACK UNDERFLOWS\n";
                                         goto lab;
                                         }*/
                                     /*else*/ if(head!=NULL)
                                         {
                                         q=head;
                                         head=head->ptr;
                                         delete q;
                                         }
                                         else
                                         {
                                             cout<<"SORRY!!!!!!!! WE CAN`T DELETE THE STACK UNDERFLOWS\n";
                                         goto lab;
                                         }   
                                         break;
                             case 3:
                                        h=head;
                                         if(h==NULL)
                                                  {
                                                  cout<<"THE STACK IS EMPTY!!!!!\n";
                                                  }
                                                  else
                                                    {
                                                    cout<<"THE ELEMENTS IN THE STACK ARE\n";
                                                    while(h!=NULL)
                                                      {
                                                      cout<<""<<h->info;
                                                      h=h->ptr;
                                                      }
                                                       }
                                                         //lab:
                                                         break; 
                   }
                                         cout<<"DO U WANT TO REPEAT PRESS 1:\n";
                                         cin>>n;
                                         if(n==1)
                                         {
                                         goto label;
                                         }
                                         /*else
                                         /*{
                                         if(head==NULL)
                                                  {
                                                  cout<<"THE STACK IS EMPTY!!!!!\n";
                                                  }
                                                  else
                                                    {
                                                    cout<<"THE ELEMENTS IN THE STACK ARE\n";
                                                    while(head!=NULL)
                                                      {
                                                      cout<<""<<head->info;
                                                      head=head->ptr;
                                                      }
                                                       }*/
                                                       //}
                                                         lab:
                                                         _getch(); return 0; 
                                                         }       
