using namespace std;
#include<iostream>
#include<conio.h>
struct node
{
       int info;
       node *ptr;
       }*head;
       node *temp,*temp1,*temp2;
int l,i;
 void creation(void);
 void creationbeg(void);
 void creationend(void);
 void deletion();      
       int main()
       {
             
             cout<<"creation of an node\n";
             creation();
             creationbeg();
             creationend();
             while(head!=NULL)
             {
                              cout<<""<<head->info;
                              }
             _getch(); return 0;
             }
             void creation(void)
             {
                  head=new node;
               cout<<"ENTER THE DATA U WANT TO ENTER \n";
               cin>>head->info;
               head->ptr=NULL;
               //l=(int)temp->ptr;
               //cout<<""<<temp;
               //cout<<""<<temp->info;*/
               }
               void creationbeg()
               {
                    temp=new node;
                    cout<<"enter the data\n";
                    cin>>temp1->info;
                    temp->ptr=head;
                   head=temp;
                    }
                    void creationend()
                    {
                          temp2=new node;
                          cout<<"enter the data\n";
                          cin>>temp2->info;
                          while(head!=NULL)
                          {
                                           head=head->ptr;
                                           }
                                           temp2=head->ptr;
                                           temp2->ptr=NULL;
                                           }
                                           
                                           
                                
             
