
 #include <conio.h> 
 #include <iostream>
#include <vector>
using namespace std;

vector <int> unsortedArr = {4,6,652,21,12,34,9,678,2,1};

void swapBasedOIndex(int num1, int num2);
void display();
void display(int index);
int main()
{
    std::cout<< "Insertion Sort"<< std::endl;
    
    //vector elements
    
    cout<<"Elemenets of unsorted array : ";
    display();
    cout<<endl;
    
    int sortedIndex {0};
    int currentElement{};
    
    for(int i=1;i<unsortedArr.size();i++)
        {
            if(unsortedArr.at(sortedIndex) <= unsortedArr.at(i)) 
                {
                    //if(unsortedArr.at(sortedIndex) != unsortedArr.at(i)){
                    cout<<"\nComparing if "<<unsortedArr.at(sortedIndex)<< " <= 
					" << unsortedArr.at(i)<<" : 
					"<<boolalpha<<(unsortedArr.at(sortedIndex) <= unsortedArr.at(i))<<endl; 
                    sortedIndex++;
                    cout<<endl;
                    cout<<"\nsortIndex: "<< sortedIndex<<endl;
                    display(sortedIndex);
                    //cout<<endl;
                    
                }
            else
                {
                    //Points to next non sorted element
                    currentElement = sortedIndex+1;
                    
                    for(int j=0; j<=sortedIndex;j++)
                    {
                        
                        cout<<"\n\ncurrentElement: "<< unsortedArr.at(currentElement)<<" Current Sorted pointer: "<< unsortedArr.at(j);
                        //cout<<"\ncurrentElement: "<< currentElement<<" Current Sorted pointer: "<< (j);
                        if(unsortedArr.at( currentElement ) < unsortedArr.at(j))
                            {
                                cout<<"\n\nComparing if "<<unsortedArr.at(currentElement)<< " < " << unsortedArr.at(j)<<" : "<<boolalpha<<(unsortedArr.at( currentElement ) < unsortedArr.at(j)); 
                                swapBasedOIndex(j, currentElement );
                                
                                cout<<endl;
                                cout<<"\nsortIndex: "<< sortedIndex<<endl;
                                display(sortedIndex);

                                cout<<endl; 
                                
                                //checks till the last iteration
                                if(sortedIndex==j)
                                    {
                                        sortedIndex++;
                                        cout<<endl;
                                      //  cout<<"\nsortIndex: "<< sortedIndex<<endl;
                                        display(sortedIndex);
                                        break;
                                    }
                                
                            }

                     
                    }
                    
                }
        }
    
    cout<<"\n\nElements of sorted array   : ";
    display();
    
    getch();
    return 0;
}

void display()
{
    for(auto num : unsortedArr)  cout<<num<<" ";
}

void display(int index)
{
    int i{};
    for(auto num : unsortedArr)  
        {
            cout<<num<<" ";
            if( index == i){cout<<"| ";}
            i++;
        }
}

void swapBasedOIndex(int num1, int num2)
{
    int temp{};
    temp = unsortedArr.at(num1);
    unsortedArr.at(num1) = unsortedArr.at(num2);
    unsortedArr.at(num2)= temp;
    
}
