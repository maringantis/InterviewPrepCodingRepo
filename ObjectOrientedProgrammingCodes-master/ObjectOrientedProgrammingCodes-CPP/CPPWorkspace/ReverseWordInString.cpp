//
//#include <iostream>
//#include <conio.h>
//#include <stdio.h>
//#include <string>
//#include <vector>
//#include <sstream>    
//using namespace std;
//
//	//Reverse words in a string (words are separated by one or more spaces). Now do it in-place. By far the most popular string question! 
//string reveseString(string stringToBeReversed) 
//{
//	
//	int j = stringToBeReversed.size() - 1;
//	string temp="";
//	//while (i < j)
//	while (j>=0)
//	{
//		temp = temp + stringToBeReversed[j];
//		j--;
//	}
//
//	return temp;
//}
//
//int main()
//{
//	cout << "Enter the string with spaces to reverese them"<<endl;
//
//	string tempString;
//	string StringWithSpaces;
//	vector<string> ArrayWords;
//
//
//	getline(cin, StringWithSpaces); //get the string with spaces
//
//	stringstream ss(StringWithSpaces); // take input to streamString
//	//char blankspace;
//	cout << "Entered string: ";
//	while (ss >> tempString) 
//	{
//		ArrayWords.push_back(tempString);
//		cout << tempString<<" ";	
//	}
//	cout << endl << "Reverse word in strings" << endl;
//	for (int i = 0; i < ArrayWords.size(); i++) 
//	{
//		cout<<reveseString(ArrayWords.at(i))<<" ";
//		/*for (int j = 0; j <= strlen(ArrayWords[i]); j++)
//		{
//
//		}*/
//	}
//
//	
//	_getch();
//	return 0;
//}