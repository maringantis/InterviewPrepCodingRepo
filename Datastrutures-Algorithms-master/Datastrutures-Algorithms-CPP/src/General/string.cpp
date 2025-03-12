#include<iostream>
using namespace std;
#define MAXSIZE 100
#include<conio.h>
class stack
{
   char s[100][100];
   int top;
   public:
      stack()
      {
        top=-1;
        }
       void push(char *);
       char* pop(void);
       void display(void);
       };
     
     void stack::push(char*p)
     {
         if(top==MAXSIZE-1)
         {
         cout<<"stack overflowed"<<endl;
         }
         else
         {
           strcpy(s[++top],p);
           }
         }
         
	 char* stack::pop(void)
	 {
		 if (top == -1)
			 cout << "stack underflowed" << endl;

		 else
			 return(s[])
	 }