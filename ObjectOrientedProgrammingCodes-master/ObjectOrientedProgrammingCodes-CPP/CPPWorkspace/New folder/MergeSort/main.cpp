
 #include <conio.h> 
 #include <iostream>
#include <vector>
using namespace std;

int unsortedArr[] = {4,6,652,21,12,34,9,678,2,1};

//vector <int> sortedArr ( unsortedArr.size() );
vector <int> even={2,4,6,8,10};
vector <int> odd={1,3,5,7};
vector <int> sortedArr{};
//vector <int> leftArray={6,2,8,4,10};
//vector <int> rightArray={7,3,1,5,9};






//void swapBasedOIndex(int num1, int num2);
//void display();
//void display(int index);

void display(vector<int> arrayName)
{
    for(auto num : arrayName)  cout<<num<<" ";
}

void mergeSortedHalves(vector<int> leftArray, vector<int> rightArray)
{   
    try
    {
    int i{};int j{};
    
    cout<<"\nLeft Array to join:"<<endl;
    display(leftArray);
    
    cout<<"\nRight Array to join:"<<endl;
    display(rightArray);
    
    while(i<leftArray.size() && j<rightArray.size())
        {
            if(leftArray.at(i)>=rightArray.at(j)) 
                {
                    sortedArr.push_back(rightArray.at(j));
                    j++;
                }
            else if (leftArray.at(i)<rightArray.at(j)) 
                {
                    sortedArr.push_back(leftArray.at(i));
                    i++;
                }
        }
        
        while(i<leftArray.size())
            {
                 sortedArr.push_back(leftArray.at(i));
                i++;
            }
        while(j<rightArray.size())
            {
                sortedArr.push_back(rightArray.at(j));
                j++;
    }
    cout<<"\nAfter Joining :"<<endl;
    display(sortedArr);
    cout<<endl;
    }
    catch(exception ex)
    {
        //cout<<"Exception: "<< 
    }
}

void partitionArray(vector<int> arrayToBeSplit)
{
    try
    {
        cout<<"\nArray to be partitioned is: "<<endl;
        display(arrayToBeSplit);
        cout<<endl;
    
    int mid{};
    
    int leftArrayLength = arrayToBeSplit.size()/2;
    int rightArrayLength = arrayToBeSplit.size() - leftArrayLength;
    
    if (arrayToBeSplit.size()<2) 
        {
            cout<<"\nMAX spilts reached!\n";
            display(arrayToBeSplit);
            cout<<"\n";
            return;
    }
    
    vector<int> leftArray(leftArrayLength);
    vector<int> rightArray(rightArrayLength);
 
    if(arrayToBeSplit.size()%2==0)
        {
            mid = arrayToBeSplit.size() - leftArrayLength;
        }
    else 
        {
            mid = arrayToBeSplit.size() - leftArrayLength - 1;
        }
        
        int i{0};
        int j{0};
        
        while(i<leftArrayLength)
            {
                leftArray.at(i)= (arrayToBeSplit.at(i));
                i++;
            }
        cout<<"\nWhile partioning LEFT: "<<endl;
        display(leftArray);
        cout<<endl;
        while(j<rightArrayLength)
            {
                rightArray.at(j) = arrayToBeSplit.at(mid);
                j++; mid++;
            }
        cout<<"\nWhile partioning RIGHT: "<<endl;
        display(rightArray);
        cout<<endl;
     
    partitionArray(leftArray);
partitionArray(rightArray);
    mergeSortedHalves(leftArray,rightArray);
   // partitionArray(0,mid,leftArray)
    }
    catch(exception ex){}
}

int main()
{
    std::cout<< "Merge Sort"<< std::endl;
    
    //vector elements
    
    cout<<"Elements of unsorted array : ";
    display(sortedArr);
    cout<<endl;
    //mergeSortedHalves(even,odd);
    partitionArray(unsortedArr);
   // mergeSortedHalves();
    
    
    cout<<"\n\nElements of sorted array   : ";
    display(sortedArr);
    
    getch();
    return 0;
}

void display()
{
    for(auto num : sortedArr)  cout<<num<<" ";
}

//void display(int index)
//{
//    int i{};
//    for(auto num : sortedArr)  
//        {
//            cout<<num<<" ";
//            if( index == i){cout<<"| ";}
//            i++;
//        }
//}

//void swapBasedOIndex(int num1, int num2)
//{
//    int temp{};
//    temp = unsortedArr.at(num1);
//    unsortedArr.at(num1) = unsortedArr.at(num2);
//    unsortedArr.at(num2)= temp;
//    
//}
