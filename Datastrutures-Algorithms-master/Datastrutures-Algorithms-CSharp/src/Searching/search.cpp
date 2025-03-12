#include<iostream>
using namespace std;
#include<conio.h>
class bst
{
  public:
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
      void search(int);
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
                       cout<<"insertion not possible";
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
                       
               void bst::search(int i)
               { 
                    
                    if(i==root->data)
                    {
                     cout<<"element present\n";                
                     }
                    
              else if(i<p->data)
                 {
                  p=p->lchild;
                  if(p->data==i)
                  cout<<"element present\n";
                  else
                    search(p->data);
                    }
                             
                 else if(i>p->data)
                  {
                    p=p->rchild;
                    if(p->data==i)
                    cout<<"element present\n";
                    else
                    search(p->data);
                    } 
                    
                   else 
                   cout<<"element not present\n";  
                   }
                   
                 int main()
                 {bst b;
                 int ch,x;
                  cout<<"1.create\n";
                  cout<<"2.search\n";
                  cout<<"3.exit\n";
                  while(1)
                  {
                    cout<<"enter the choice\n";
                    cin>>ch;
                    switch(ch)
                    {
                     case 1:
                       cout<<"enter the data\n";
                       cin>>x;
                       b.create(x);
                       break;                   
                                        
                      case 2:
                        cout<<"enter the number you want to search\n";
                        cin>>x;
                        b.search(x);
                        break;
                        
                      case 3:
                         exit(0);       
                           
                    default:cout<<"enter the correct choice\n";
                    
                    }
                    }
                    }     
                   
                   
                   
                   
                   
                   
                   
                   
                             
