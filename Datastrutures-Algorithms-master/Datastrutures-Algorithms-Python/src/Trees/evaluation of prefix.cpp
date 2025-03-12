#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
#include<string.h>
class preeval
{
      public:
             int s[100],top;
             char e[100];
             void push(int);
             int pop(void);
             preeval()
             { 
                       top=-1;
             }
};
 void preeval::push(int x)
 {
      s[++top]=x;
 }
 int preeval::pop(void)
 {
      return(s[top--]);
 }
int main()
{
    preeval p;
    int i=0;
    cout<<"enter the prefix expression";
    cin>>p.e;
    strrev(p.e);
    while(p.e[i]!='\0')
    {
                       if((p.e[i]>='0')&&(p.e[i]<='9'))
                       p.push(p.e[i]-'0');
                       else
                       {
                           int a,b;
                           double c;
                           a=p.pop();
                           b=p.pop();
                           switch(p.e[i])
                           {
                                         case '+':c=a+b;
                                                  break;
                                         case '-':c=a-b;
                                                  break;
                                         case '/':c=a/b;
                                                  break;
                                         case '%':c=a%b;
                                                  break;
                                         case '$':c=pow(a,b);
                                                  break;
                                         case '*':c=a*b;
                                                  break;
                                         default:cout<<"invalid";
                           }
                           p.push(c);
                       } 
    i++;
    }//close while
    cout<<p.pop();
    _getch(); return 0;
    return 0;
}    
                                                                              
          
             
             
