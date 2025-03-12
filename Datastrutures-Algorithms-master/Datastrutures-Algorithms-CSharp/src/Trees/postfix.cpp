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
  int postfix()
  {
    top=-1;
 }
   void push(int);
   int pop(void);
};
void postfix::push(int x)
{
    s[++top]=x;
}
int postfix::pop(void)
{
    return s[top--];
}

int main()
{
   postfix p;
   cout<<"enter the postfix exp"<<endl;
   cin>>p.exp;
   int i=0,x1,x2;
   
   while(p.exp[i]!='\0')
   {
     if(p.exp[i]>='0'&&p.exp[i]<='9')
     {
        p.push(p.exp[i]-'0');
        }
        }
        
        while(p.exp[i]!='\0')
        {
            switch (exp[i])
            {                 
            case'+':                                                      
       
        x1=p.pop();
        x2=p.pop();
          p.push(x2+x1);
        break;
                          
       
    case'-':                                                      
       
        x1=p.pop();
        x2=p.pop();
          p.push(x2-x1);
        break;
        case'*':                                                      
       
        x1=p.pop();
        x2=p.pop();
          p.push(x2*x1);
        break;
                              
        
    case'/':                                                      
       
        x1=p.pop();
        x2=p.pop();
         p.push(x2/x1);
        break;
             
      case'%':                                                      
       
        x1=p.pop();
        x2=p.pop();
          p.push(x2%x1);
        break;
      case'$':
      
        x1=p.pop();
        x2=p.pop();
       p.push((int)pow(x2,x1));
       break;
       default:cout<<"enter correct operator"<<endl;
       }
      i++;
      }
    if(p.top==0)
    cout<<p.pop();
    else
    cout<<"invalid expression";
    _getch(); return 0;
}  
       
                                                                           
