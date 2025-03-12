#include<iostream>
using namespace std;
#include<conio.h>
class stack
{
   public:
     char s[100];
     char exp[100];
     int top;
     stack()
     {
         top=-1;
         }
       void push(char);
       char pop(void);
       char stacktop(void);
       int instop(char);
       int inexpop(char);
       };
       void stack::push(char x)
       {
           s[++top]=x;
           }
        
       char stack::pop(void)
       {
           return s[top--];
           }
         char stack::stacktop(void)
         {
             return s[top];
             }
           
         int stack:: instop(char x)
         {
           if(x=='+'||x=='-')
             return 1;
         else  if(x=='*'||x=='/')
           return 2;
          else if(x=='(')
           return 0;
          else if(x=='$')
           return 3;
           }
           
         int stack::inexpop(char x)
         {
          if(x=='+'||x=='-')       
             return 1;
          else if(x=='*'||x=='/')
            return 2;
           else if(x=='$')
            return 3;
            }
            
            int main()
            {
              stack s;
               cout<<"enter the infix expression"<<endl;
               cin>>s.exp;
               int i=0;   
              while(s.exp[i]!='\0')
              {
               if(s.exp[i]>='a'&&s.exp[i]<='z')
               {
               cout<<s.exp[i];
               }
               else if((s.exp[i]=='+'||s.exp[i]=='-'||s.exp[i]=='*'||s.exp[i]=='/'||s.exp[i]=='$')&&(s.top==-1))
               {
               s.push(s.exp[i]);
               }
               else if(s.exp[i]=='(')
               {
               s.push(s.exp[i]);
               }
               else if(s.exp[i]==')')
               {
               while(s.stacktop()!='(')
                    {
                      cout<<s.pop();
                      }
                    s.pop();
                    }
                    
                else if(s.inexpop(s.exp[i])>s.instop(s.stacktop()))
                {
                       s.push(s.exp[i]);
                       }                                   
                else if(s.inexpop(s.exp[i])<=s.instop(s.stacktop()))
                {
                      while(((s.inexpop(s.exp[i]))<=(s.instop(s.stacktop())))&&(s.top>=0))
                      {
                        cout<<s.pop();
                        }
                       s.push(s.exp[i]);                                                  
                       }
               
               i++;
               }
               while(s.top>=0)
               {
                 cout<<s.pop();
                 }
                _getch(); return 0;
                }              
               
               
               
                                       
            
            
                                         
              
