using namespace std;
#include<iostream>
#include<conio.h>
struct node
{
       int info;
       node *bptr,*fptr;
       }*head;
       node *temp,*temp1,*q,*h,*k;
       int ch,pos,i,co;
       char c;
  int main()
  {
        co=1;
        head=new node;
        cout<<"enter the data\n";
        cin>>head->info;
        head->fptr=NULL;
        head->bptr=NULL;
        label:
        cout<<"enter ur choice\n";
        cout<<"press 1: for insertion at the begging \n";
        cout<<"press 2:for insertion at the end\n";
        cout<<"press 3: for insertion at the desired pos\n";
        cout<<"press 4: for deletion at the beg\n";
        cout<<"press 5: for deletion at the end\n";
        cout<<"press 6: for deletion at the desired position\n";
        cout<<"press 7: for display\n";
        cin>>ch;
        switch(ch)
        {
                  case 1: temp=new node;
                           cout<<"enter the data\n";
                           cin>>temp->info;
                           lab1:
                           temp->bptr=head;
                           temp->fptr=NULL;
                           head=temp;
                           co++;
                           break;
                 case 2: temp=new node;
                         cout<<"enter the data\n";
                         cin>>temp->info;
                         lab:
                         q=head;
                         while(q->bptr!=NULL)
                         {
                                                q=q->bptr;
                                                }
                                                q->bptr=temp;
                                                temp->fptr=q;
                                                temp->bptr=NULL;
                                                 co++;
                                                 
                                               break;
                case 3:
                       temp=new node;
                      
                        cout<<"enter the data\n";
                        cin>>temp->info;
                        cout<<"enter the position to insert\n";
                        cin>>pos;
                        if(co<pos)
                        {
                                   goto lab;
                                   }
                                   else if(pos==1)
                                   {
                                        goto lab1;
                                        }
                                        else
                                        {
                        h=head;
                        q=head->bptr; 
                        for(i=1;i<pos-1;i++)
                        {
                                            h=h->bptr;
                                            q=q->bptr;
                                            }
                                            h->bptr=temp;
                                            temp->fptr=h;
                                            temp->bptr=q;
                                            q->fptr=temp;
                                            }
                                            co++;
                                            break;
               case 4:ke:   
                     k=head;
                          head=head->bptr;
                          delete k;
                          head->fptr=NULL;
                          co--;
                          break;
              case 5:  lo: 
                   h=head;
                   k=head->bptr;
                        while(k->bptr!=NULL)
                        {             k=k->bptr;
                                      h=h->bptr;
                                      }
                                      delete k;
                                      h->bptr=NULL;
                                       co--;
                                       break;
            case 6:
                  k=head;
                    h=head->bptr;
                    //q=h->bptr;
                    cout<<"enter the position u wnt to delete\n";
                    cin>>pos;
                    cout<<""<<co;
                    
                    if(co==pos)
                    {
                               goto lo;
                               }
                      else if(co==1)
                      {
                           goto ke;
                           }
                           else
                           {         
                    for(i=1;i<pos-1;i++)
                    {
                                        k=k->bptr;
                                        h=h->bptr;
                                        }
                                        q=h->bptr;
                                        delete h;
                                        k->bptr=q;
                                        q->fptr=k;
                                        }
                                        co--;
                                        break;
           case 7:
                   q=head;
                   cout<<"the elements are\n";
                   while(q!=NULL)
                   {
                                 cout<<""<<q->info;
                                 q=q->bptr;
                                 }
                                 break;
                                 }
                                 cout<<"do u want to repeat [y/n]";
                                 cout<<"enter\n";
                                 cin>>c;
                                 if(c=='y')
                                 {
                                           goto label;
                                           }
                                           else
                                           {
                                               cout<<"thank you!!!!\n";
                                               }
                                               _getch(); return 0;
                                               }
                                                 
                                        
                                        
                                      
                                                                                   
                                          
                                                                         
                                                
                                                
                                   
