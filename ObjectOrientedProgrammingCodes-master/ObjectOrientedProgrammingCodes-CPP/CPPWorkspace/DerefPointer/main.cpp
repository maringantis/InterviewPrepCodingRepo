#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
 
    int score{10};
    int *score_ptr{&score};
    
    cout<< "Value of score: "<<score<< endl;
    cout<< "Address of score: "<<&score<< endl;
    cout<< "Value of score_ptr: "<<score_ptr<< endl;
    cout<< "Address of score_ptr: "<<&score_ptr<< endl;
    cout<< "Defredrence of score_ptr: "<<*(score_ptr)<< endl;
    score_ptr = nullptr;
    cout<< "Value of score_ptr after setting it to null: "<<score_ptr<< endl;
    double num{10.1};
    void *void_ptr{&num};
    
    cout<< "Value of void void_ptr after setting it to null: "<<void_ptr<< endl; 
    //cout<< "Deref of void void_ptr after setting it to null: "<<**void_ptr<< endl; //ERROR Not the same type of ptr void and double
    double *num1_ptr{nullptr};
    cout<< "Value of void num1_ptr after setting it to null: "<<void_ptr<< endl; 
    num1_ptr = static_cast<double*> (void_ptr);
    cout<< "Value of void num1_ptr after setting it to null: "<<*(static_cast<double*> (void_ptr))<< endl; 
    
    void_ptr = &score;
    int *score1_ptr{nullptr};
    score1_ptr = static_cast<int*> (void_ptr);
    cout<< "Value of void score1_ptr: "<<*score1_ptr<< endl; 
    getch();
    return 0;
}