#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class prefix
{public:
  char s[100];
  char exp[100];
  int top;
  void push(char);
  char pop(void);
  char stacktop(void);
  int instop(char);
  int inexop(char);
  prefix()
  {
    top=-1;
  }
};

   void prefix::push(char x)
   {
      s[++top]=x;
      }
    char prefix::pop(void)
    {
      return s[top--];
      }
      char prefix::stacktop(void)
      {
          return s[top];
          }
        int prefix::instop(char x)
        {
          if(x=='+'||x=='-')
          return 1;
          else if(x=='*'||x=='/'||x=='%')
          return 2;
          else if(x==')')
          return 0 ;
          else if(x=='$')
          return 3;
          }
       int prefix::inexop(char x)/*fgfggfgg*/
       {
          if(x=='+'||x=='-')
          return 1;
          else if(x=='*'||x=='/'||x=='%')
          return 2;
          else if(x=='$')
          return 3;
          }
          
        int main()
        {
           prefix s;
           cout<<"enter the expression infix form"<<endl;
           cin>>s.exp;
           strrev(s.exp);
           char e[100];
           int i=0,j=0;
           while(s.exp[i]!='\0')
           {
             if((s.exp[i]>='a'||s.exp[i]>='A')&&(s.exp[i]<='z'||s.exp[i]<='Z'))
             {
             e[j]=s.exp[i];
             j++;
             }
             
             else if((s.exp[i]=='+'||s.exp[i]=='-'||s.exp[i]=='*'||s.exp[i]=='/'||s.exp[i]=='%'||s.exp[i]=='$')&& (s.top==-1))
             {
             s.push(s.exp[i]);
             }
             else if(s.exp[i]==')')
             {
             s.push(s.exp[i]);
             }
             
             else if(s.exp[i]=='(')
             {
                while((s.stacktop())!=')')
                {
                    e[j]=s.pop();
                    j++;
                    }
                  s.pop();
                  }
                  
                else if ((s.inexop(s.exp[i]))>=(s.instop(s.stacktop())))
                {
                s.push(s.exp[i]);
                }
                
                else if((s.inexop(s.exp[i]))<(s.instop(s.stacktop())))
                {
                 while((s.inexop(s.exp[i]))<(s.instop(s.stacktop()))&&(s.top>=0))
                 {
                     e[j]=s.pop();
                     j++;
                     }
                   s.push(s.exp[i]);
                   }
                   
                   i++;
                   }
                   
                   while(s.top>=0)
                   {
                   e[j]=s.pop();
                   j++;
                   }
                   e[j]='\0';
                   strrev(e);
                  cout<<e;
                    _getch(); return 0;
                    }
                                    
                   
                   
                   
                   
                   
                                                                               
                 
                                                                                                            
             
                                                                                              
                
                    
                    
