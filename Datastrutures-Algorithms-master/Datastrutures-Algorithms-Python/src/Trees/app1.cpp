
using namespace std;
#include<iostream>
#include<conio.h> 
void push(int);
void pop(void);
int a[20],top,j,n,i,op,o,l,label;
char ch;
int main()
{
	cout<<"enter the no of operends\n";
    cin>>n;
    top=-1;
    for(i=0;i<n;i++)
    {
		cout<<"enter the operand\n";
		cin>>op;
		push(op);
	}
	for(l=1;l<=n-1;l++)
    {
		cout<<"enter the operator\n";
        cin>>ch;
        switch(ch)
		{
			case'+':
				o=a[top]+a[top-1];
                for(i=0;i<2;i++)
				{
					pop();
                }
                push(o);
                break;
			case'*':
				o=a[top]*a[top-1];
				for(i=0;i<2;i++)
				{
					pop();
				}
				push(o);
				break;
            case'/':
				o=a[top]/a[top-1];
                for(i=0;i<2;i++)
                {
                    pop();
                }
                push(o);
                break;
        }
    }
	cout<<""<<a[top];
                                                                                
	return 0;
}

void push(int j)
{
	top++;
	a[top]=j;
}

void pop()
{
	a[top]=0;
	top--;
}
