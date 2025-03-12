#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
class posteval
{
      public:
             int s[100],top;
             char e[100];
             void push(int);
             int pop(void);
             posteval()
             { 
                       top=-1;
             }
};
 void posteval::push(int x)
 {
      s[++top]=x;
 }
 int posteval::pop(void)
 {
      return(s[top--]);
 }
int  main()
{
    posteval p;
    int i=0;
    cout<<"enter the postfix expression";
    cin>>p.e;
    while(p.e[i]!='\0')
    {
                       if((p.e[i]>='0')&&(p.e[i]<='9'))
                       p.push(p.e[i]-'0');
                       else
                       {
                           int a,b,c;
                           a=p.pop();
                           b=p.pop();
                           switch(p.e[i])
                           {
                                         case '+':c=b+a;
                                                  break;
                                         case '-':c=b-a;
                                                  break;
                                         case '/':c=b/a;
                                                  break;
                                         case '%':c=b%a;
                                                  break;
                                         case '$':c=pow(b,a);
                                                  break;
                                         case '*':c=b*a;
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
                                                                              
          
             
             
