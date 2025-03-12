using namespace std;
#include<iostream>
#include<conio.h>
struct node
{
       int info;
       node *lptr;
       node *rptr;
       }*root;
       node *temp,*p,*q,*kl;
       void in(int,node);
       void del(int,node);
       void display(node);
       int i,j,ch,co,x;
       char de;
       int main()
       {
             co=0;
             label:
             cout<<"press 1:for insertion\n";
             cout<<"press 2:for deletion\n";
             cout<<"press 3:for display\n";
             cout<<"enter ur choice\n";
             cin>>ch;
             switch(ch)
             {
                       case 1:
                               if(co==0)
                               {
                                        root=new node;
                                        cout<<"enter the data\n";
                                        cin>>root->info;
                                        root->lptr=NULL;
                                        root->rptr=NULL;
                                        co++;
                                        }
                                        else
                                        {
                                            /*temp=new node;
                                            cout<<"enter the data\n";
                                            cin>>temp->info;*/
                                            cout<<"enter the data\n";
                                            cin>>j;
                                            in(j,*temp);
                                            }
                                            break;
                       /*case 2:
                              cout<<"enter the element to delete\n";
                              cin>>i;
                              del(i,root);
                              break;*/
                       /*case 3:
                              display(*root);
                              break;
                              }
                              cout<<"repeat[y/n]\n";
                              cin>>de;*/
                              if(de=='y')
                              {
                                         goto label;
                                         }
                                         else
                                         {
                                             cout<<"!!thank you!!\n";
                                             }
                                             _getch(); return 0;
                                             }
                                             in(int y,node *k);
                                             {
                                                  q=k;
                                                  if(q==NULL)
                                                  {
                                                             temp=new node;
                                                             temp->info=y;
                                                             temp->lptr=NULL;
                                                             temp->rptr=NULL;
                                                             _getch(); return 0;
                                                             }
                                                             else if(x>q->info)
                                                                  in(x,q->rptr);
                                                                  else
                                                                      in(x,q->lptr);
                                                                      }
                                                                      }
                                                                     /* display(*key)
                                                                      {
                                                                                   if(key==NULL)
                                                                                   {
                                                                                                cout<<""<<key->info;
                                                                                                }
                                                                                                else if(key->lptr!=NULL)
                                                                                                {
                                                                                                     display(key->lptr);
                                                                                                     }
                                                                                                     else
                                                                                                     {
                                                                                                         display(key->rptr);
                                                                                                         }
                                                                                                         }*/
                                                                      
                                                                    
                                                   
                                            
                                             
             
       
