//
// #include <conio.h> 
// #include <iostream>
//
//struct Node
//{
//    int data;
//    Node* link;
//};
//
////struct Node* head;
//Node* insert(int data,Node* head);
//Node* insertAt(Node* head,int data,int pos);
//bool deleteAt();
//void PrintElementsOfLinkedList(Node *LL);
//
//int main()
//{
//    try{
//
//    Node* head = NULL;
//    
//    int i,n;
//    std::cout<<"Enter the total number of elements to insert into Linked List: ";
//    
//    std::cin>>n;
//    
//    for(i=1;i<=n;i++)
//    {
//        std::cout<<"Enter the data element : ";
//        int data;
//        std::cin>>data;
//        head= insertAt(head,data,i);
//        
//    }
//    
//    PrintElementsOfLinkedList(head);
//    
//    getch();
//    return 0;
//    }
//    catch (const std::exception ex)
//    {
//        return -1;
//    }
//}
//void PrintElementsOfLinkedList(Node* LL)
//{   
//    try
//    {
//       
//       //Traverse until the the link is not null.
//        while((*LL).link !=NULL)
//        {
//            //Printing all the elements except the last element
//            std::cout<<"Element data : "<< (*LL).data <<std::endl;
//            LL = (*LL).link;
//            
//        }
//        
//        //Printing the last element
//        std::cout<<"Element data : "<< (*LL).data <<std::endl;
//    }
//    catch(const std::exception ex) {return;}
//}
Node* insert(int data,Node* head)
{
    try
    {
        
        /// Insert at begining
        //std::cout<< "Inserting the element to Linked list"<< std::endl;
        std::cout<<"Head Address : "<< head<<std::endl;
       // std::cout<<"Head Value : "<< *(int *)head<<std::endl;
        Node* temp = new Node();
        (*temp).data = data;
        (*temp).link = head;
        head = temp;
        ///END INSERT at beginning
        std::cout<<"After Head Address : "<< head<<std::endl;
    return head;
    }
    catch (const std::exception ex)
    {
        return head;
    }

}
//
//Node* insertAt(Node* head,int data,int pos)
//{
//    try
//    {
//        Node* temp = new Node();
//        
//        temp->data = data;
//        temp->link =  NULL; //Applies only when list is empty
//        
//        if(pos==1)
//            {
//                temp->link = head;
//                head = temp;
//                
//                return head;
//            }
//            
//        Node* temp1 = head;
////        for(int i=0;i<pos-2;i++)
////            {
////                temp1 = (*temp1).link;
////            }
////            
//            (*temp).link = (*temp1).link;
//            (*temp1).link = temp;
//
//            head = temp1;
//        return head; 
//    }
//    catch (const std::exception ex)
//    {
//        return head;
//    }
//}

using namespace std;
#include<iostream>
#include<conio.h>


struct Node
{
    int data;
    Node* link;
};

Node* insertAt(Node* list, int data, int pos);
Node* deleteFirst(Node* list);

void PrintLinkedList(Node* list);
int totalElementsPresent(Node* list);
int countFlag=0;

Node* insert(int data,Node* head)
{
    try
    {
        
        /// Insert at begining
        //std::cout<< "Inserting the element to Linked list"<< std::endl;
        //std::cout<<"Head Address : "<< head<<std::endl;
       // std::cout<<"Head Value : "<< *(int *)head<<std::endl;
        Node* temp = new Node();
        (*temp).data = data;
        (*temp).link = head;
        head = temp;
        ///END INSERT at beginning
        std::cout<<"After Head Address : "<< head<<std::endl;
    return head;
    }
    catch (const std::exception ex)
    {
        return head;
    }

}

Node* deleteFirst(Node* head)
{
    try{
        Node* temp = head;
        
        head = (*head).link;
        delete(temp);

        return head;
        }
    catch (const exception ex)
    {
        return head;
        }
}

void deleteLast(Node* head)
{
    //Hanlde when head == first
    try{
        Node* temp1 = head;
        Node* temp2 = new Node();
        
        if(head ==  NULL)
            {
                return;
            }
        //cout<<"Hello";
        while((*temp1).link!=NULL)
            {
            temp2 = temp1;
            temp1 = (*temp1).link;
            }
        delete((*temp1).link);
        (*temp2).link = NULL;
            
        
        //return head;
        }
    catch (const exception ex)
    {
        return;
        }
}

int main()
{
    try
    {
        Node* head = NULL;
        //Node* tail;
        cout<<"Please enter the number of itemes to be insertered.\n";
        int totItems;
        cin>>totItems;
        
        
        for(int i=0; i<totItems;i++)
            {
                
                int numberToBeInserted;
                int positionToBeInserted;
                
                cout<<"Please enter the numbers : ";
                cin >> numberToBeInserted;
              //  cin >> positionToBeInserted;
                //cout<<"Total number of Nodes: " << totalElementsPresent(head)<<endl;
              if(head==NULL)
                   {
                       //cout<<"Creating the Linked list for the first time!!\n";
                        Node* temp = new Node();
                        (*temp).data = numberToBeInserted;
                        (*temp).link = head;
                        head = temp;
                   }
                   else
                   {
                            //head =  insert(numberToBeInserted,head);
                            head =  insertAt(head,numberToBeInserted,i-1);
                            //head =  insertAt(head,numberToBeInserted,1);
                    }
             
               

              PrintLinkedList(head);
              
              //deleteFirst()
            }
           // head= deleteFirst(head);
            //PrintLinkedList(head);
//            deleteLast(head);
//            PrintLinkedList(head);
//            deleteLast(head);
//            PrintLinkedList(head);
//            deleteLast(head);
//            PrintLinkedList(head);
            cout<<"\nTotal number of Nodes: " << totalElementsPresent(head)<<endl;
            cout<<"\nEND\n";
        getch();
        return 0;
    }
    catch (exception ex)
    {
        return -1;
    }
}

Node* insertAt(Node* list,int data,int pos)
{
    try
    {
       // cout <<"POS: "<< pos <<" Tot: "<< totalElementsPresent(list);
       // if(pos > totalElementsPresent(list)) return list;
        
        int headFlag = 0;
        Node* temp = new Node();
        (*temp).data = data;
        (*temp).link = NULL;
        
        Node* temp1 = list;
        Node* temp2 = new Node();
        
        while((*temp1).link != NULL)
            {
                temp2 = temp1; 
                temp1 = (*temp1).link;
                headFlag++;
                
                cout <<"HF: "<<headFlag <<" pos: "<< pos;
                
                if(headFlag == pos)
                    {
                        
//                        
                        (*temp2).link = temp;
                        (*temp).link = (*temp2).link; 
                        //list = temp1;
//                        (*temp).link 
                    }
                    //return lis;
            }
            
        
        
//       // cout<<"Data: "<<data<<" Pos: "<<pos<<endl;
//        Node* temp = new Node();
//        (*temp).data = data;
//        (*temp).link = NULL;
//        
//        
//        cout <<"\nPrinting TEMP\n" <<endl;
//        PrintLinkedList(temp);
//        
////        if(totalElementsPresent(list)==1)
////            {
////                cout<<"Why?";
////                (*temp).link = list;
////                list = temp;
////                return list;
////            }
//        
//        Node* temp1 = list;
//        Node* temp2 = list;
//        cout <<"Printing LIST" <<endl;
//        PrintLinkedList(temp1);
//                
//        while(1)
//            {
//                
//               if(temp1->link==NULL)
//                    {
//                       break;
//                    }
//                    temp1 = (*temp1).link;
//            }
//            
//            cout <<"Printing BEFORE" <<endl;
//            PrintLinkedList(temp1);
//            cout <<"\nPrinting AFTER" <<endl;
//              // PrintLinkedList(temp1);
//              //temp1 = (*temp1).link;
//               //temp 
//              (*temp).link = (*temp2).link;
//               (*temp2).link = temp;
//               PrintLinkedList(temp2);
//    //   cout <<"Printing TEMP1" <<endl;
//     //   PrintLinkedList(temp1);
//      //  list = temp1;
//        
//          //  (*temp).link = (*temp1).link;
//           // (*temp1).link = temp;
//
//            //head = temp1;
//        
//        list = temp2;
//        
//        
//       // list->link = temp1;
     //   return list;
    }
    catch (exception ex)
    {
        return list;
    }
}

int totalElementsPresent(Node* list)
{

    try
    {
        while((*list).link != NULL)
            {
                list = (*list).link;
                countFlag++;
            }
            cout<<"Total list elements : "<< countFlag;
       // if(countFlag==0) countFlag =100;
     return countFlag;
    }
    catch (exception ex)
    {
        return -1;
    }
}

void PrintLinkedList(Node* list)
{
    try
    {
        
        cout<< "Printing the linked list : " ;
        while((*list).link !=NULL)
        {
            //Printing all the elements except the last element
            std::cout<<(*list).data <<" ";
            list = (*list).link;
            
        } 
       std::cout<< (*list).data <<std::endl;
//        while((*list).link != NULL)
//            {
//                cout<< (*list).data << " ";
//                list = (*list).link;
//            }
        return;
    }
    catch (exception ex)
    {
        return;
    }
}