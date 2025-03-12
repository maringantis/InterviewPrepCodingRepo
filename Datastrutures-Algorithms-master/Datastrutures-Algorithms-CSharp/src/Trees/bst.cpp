#include<iostream>
using namespace std;
#include<conio.h>
class bst
{public:
  int data;
  bst *lchild,*rchild;
  bst *root,*p,*prev,*t;
      bst()
      {
        root=NULL;
        p=NULL;
        prev=NULL;
        t=NULL;
        }
       void create(int);
       void find(int x);
       };
       void bst::create(int x)
       {
          if(root==NULL)
          {
                root=new bst;
                root->data=x;
                root->lchild=NULL;
                root->rchild=NULL;
                }
                else 
                {
                  p=root;
                  while(p!=NULL)
                  {
                     if(x<p->data)
                     {
                       prev=p;
                       p=p->lchild;
                       }
                       else if(x>p->data)
                       {
                         prev=p;
                         p=p->rchild;
                         }
                            
                       else if(x==p->data)
                       cout<<"insertion not possible\n";
                       }
                       t=new bst;
                       t->data=x;
                       t->lchild=NULL;
                       t->rchild=NULL;
                       if(t->data<prev->data)
                       prev->lchild=t;
                       else
                       prev->rchild=t;
                       }
                       }
                       
                 void bst::find(int x)
                 {
                    p=root;
                    while(p!=NULL)
                    {
                     if(x<p->data) 
                     {
                       prev=p;
                       p=p->lchild;
                       }
                       else if(x>p->data)   
                       {
                          prev=p;
                          p=p->rchild;
                          }
                         else if(x==p->data)
                         {
                              cout<<"the element is found \n";
                              break;
                              }
                           if(p==NULL)
                           {
                           cout<<"element is not found\n";
                           }  
                           }                          
                           }                          
                                       
                 int main()
                 {
                   bst b;
                   int ch,x;
                   cout<<"1.create\n";
                   cout<<"2.find\n";
                   cout<<"3.exit\n";
                   while(1)
                   {
                    cout<<"enter the choice"<<endl;       
                    cin>>ch;
                    switch(ch)
                    {
                     case 1:
                       cout<<"enter the number\n";
                       cin>>x;            
                        b.create(x);     
                       break;
                       
                     case 2:
                          cout<<"enter the number you want to search\n";
                          cin>>x;
                          b.find(x);
                          break;
                          
                   
                       case 3:
                           exit(0);     
                           
                           
                   default:cout<<"enter the correct choice\n";
                    }
                     }
                     }       
                                   
                       
                       
                       
                       
                       
                       
                       
                       
                                                                     
