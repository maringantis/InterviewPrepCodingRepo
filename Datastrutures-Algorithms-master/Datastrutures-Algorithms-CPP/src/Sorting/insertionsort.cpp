 using namespace std;
 #include<iostream>
 #include<conio.h>
 int main()
 {
       
       int x[20],i,j,n,y;
       cout<<"enter the number of elements u want\n";
       cin>>n;
       cout<<"enter the elements\n";
       for(i=0;i<n;i++)
       {
                       cin>>x[i];
       }
		for(i=1;i<n;i++)
		{
		y=x[i];
		for(j=i-1;j>=0&&y<x[j];j--)
		{
		x[j+1]=x[j];
		}
		x[j+1]=y;
		}

cout<<"the sorted elements\n";
for(i=0;i<n;i++)
{
cout<<""<<x[i];
}
_getch(); return 0;
}
                                                                       
                                                                  
        
