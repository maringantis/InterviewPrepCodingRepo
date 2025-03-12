//
#include <iostream>
#include <conio.h>
#include <stdio.h>
//#include <string>
//#include <vector>
//#include <sstream>  
//#include <climits>
//#define maxLength 6
//
//using namespace std;
//
//int subArray[16];
//int hourglassFetcher(int twoDArray[6][6]) 
//{
//	try {
//		int i{ 0 }, j{0} ;
//		int _i{ i }, _j = {j};
//		int hourglassArr[7];
//		long subArraySum = 0;
//		long MaxSum = LONG_MIN;
//		
//			for (i; i < maxLength; i++)
//			{
//			
//				for (j; j < maxLength; j++)
//				{
//					if (j + 2 < maxLength && i + 2 < maxLength) {
//
//						/*
//						if (!((_i + 1 == i) && _j == j) || ((_i + 1 == i) && _j + 2 == j)) {
//							cout << "\nIgnoring : arr [" << i << "]" << "[" << j << "]"<<endl;
//							break;
//						}*/
//						//cout << "\narr [" << i << "]" << "[" << j << "]" << endl;
//						//cout << "\nAdding cuurent Sum " << subArraySum << " with current array value " << twoDArray[i][j] << endl;
//
//						subArraySum = twoDArray[i][j] + twoDArray[i][j + 1] + twoDArray[i][j + 2] + twoDArray[i + 1][j + 1] + twoDArray[i + 2][j] + twoDArray[i + 2][j + 1] + twoDArray[i + 2][j + 2];
//						if (subArraySum >= MaxSum) {
//							MaxSum = subArraySum;
//						}
//						//subArraySum = subArraySum + twoDArray[i][j];
//					}
//				}	
//			}
//			//cout << "Sum of :" << subArraySum;
//			//cout << "Sum of :" << subArraySum;
//		
//		
//
//
//
//
//
//
//		return MaxSum;
//	}
//	catch (exception ex)
//	{
//		return NULL;
//	}
//	
//}
//
//
//
//
//int main()
//{
//	try 
//	{ 
//		 //int maxLength = 2;
//
//		int arrOfArr[maxLength][maxLength];
//
//		
//		cout << "Enter the array elements rowwise seperated by space"<<endl;
//		int i = 0;
//		for (i = 0; i < maxLength; i++)
//		{
//			
//			for (int j = 0; j < maxLength	; j++) 
//			{
//				
//				cin >> arrOfArr[i][j];
//				
//				cout << arrOfArr[i][j]<<" ";
//			}
//			std::cout << std::endl;
//			//std::cout << std::endl;
//		}
//
//
//		cout<<"Max Value: " <<hourglassFetcher(arrOfArr);
//
//		_getch();
//		return 0;
//	}
//	catch (exception ex) 
//	{ 
//		return -1; 
//	}
//}



//1 1 1 0 0 0 0 1 0 0 0 0 1 1 1 0 0 0 0 0 2 4 4 0 0 0 0 2 0 0 0 0 1 2 4 0


//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
	// Compute the sum of hourglasses


	long temp_sum = 0, MaxSum = LONG_MIN;
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 6; ++j) {
			if (j + 2 < 6 && i + 2 < 6) {
				temp_sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
				if (temp_sum >= MaxSum) {
					MaxSum = temp_sum;
				}
			}
		}
	}
	return MaxSum;

}

int main()
{
	//ofstream fout(getenv("OUTPUT_PATH"));

	vector<vector<int>> arr(6);
	for (int i = 0; i < 6; i++) {
		arr[i].resize(6);

		for (int j = 0; j < 6; j++) {
			cin >> arr[i][j];
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	int result = hourglassSum(arr);

	cout << result << "\n";

	//cout.close();

	return 0;
}
