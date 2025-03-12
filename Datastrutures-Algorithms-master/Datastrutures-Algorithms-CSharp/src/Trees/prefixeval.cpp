#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
class prefix
{
      public:
  char exp[100];
  int s[100];
  int top;
  prefix()
  {
    top=-1;
 }
   void push(int);
   int pop(void);
};
void prefix::push(int x)
{
    s[++top]=x;
}
int prefix::pop(void)
{
    return s[top--];
}

int main()
{
   prefix p;
   cout<<"enter the prefix exp"<<endl;
   cin>>p.exp;
   int i,x1,x2;
   int l;
   l=strlen(p.exp);
   for(i=l-1;i>=0;i--)
   {
     if((p.exp[i]>='0')&&(p.exp[i]<='9'))
     {
        p.push(p.exp[i]-'0');
        }
        
       else if(p.exp[i]=='+')                                                      
      { 
        x1=p.pop();
        x2=p.pop();
          p.push(x1+x2);
          }                   
       else if(p.exp[i]=='-')
       {     
        x1=p.pop();
        x2=p.pop();
          p.push(x1-x2);
          }
                                                      
       else if(p.exp[i]=='*')
       {
        x1=p.pop();
        x2=p.pop();
          p.push(x1*x2);
          }                                                                
       else if(p.exp[i]=='/')
       {
        x1=p.pop();
        x2=p.pop();
         p.push(x1/x2);
         }     
      else if(p.exp[i]=='%')
      {
        x1=p.pop();
        x2=p.pop();
          p.push(x1%x2);
          }
      else if(p.exp[i]=='$')
      {
        x1=p.pop();
        x2=p.pop();
       p.push((int)pow(x1,x2));
       }
      }
    if(p.top==0)
    cout<<p.pop();
    else
    cout<<"invalid expression";
    _getch(); return 0;
}  
       
