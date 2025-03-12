using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Datastrutures_Algorithms_CSharp.Sorting
{
    public class SortingAlogrithms
    {
        private static readonly string TAG = "SortingAlogrithms ";

        #region BUBBLE SORT
        public static void bubbleSort()
        {
            try
            {
                Console.Clear();
                Console.WriteLine("Selected bubble sort.");
                int[] numbersToBeSorted = Common.Utils.Sort();

                for (int i=0; i < numbersToBeSorted.Length; i++)
                {
                    Console.WriteLine("Iterating loop number: " + i );
                    for (int j = 0 ;j< numbersToBeSorted.Length-i-1; j++)
                    {
                        Console.WriteLine("Comparing " + numbersToBeSorted[j] + " with "+ numbersToBeSorted[j+1]);
                        if (numbersToBeSorted[j] > numbersToBeSorted[j+1])
                        {
                            Console.WriteLine("Swapping " + numbersToBeSorted[j] + " with " + numbersToBeSorted[j+1]);
                            int temp = numbersToBeSorted[j];
                            numbersToBeSorted[j] = numbersToBeSorted[j+1];
                            numbersToBeSorted[j+1] = temp;
                            Common.Utils.PrintIntArray(numbersToBeSorted);
                        }
                    }
                }
                Console.WriteLine("Numbers after sorting with bubble sort");
                Common.Utils.PrintIntArray(numbersToBeSorted);
               

            }
            catch (Exception e)
            {
                Common.Utils.ExceptionHandleMsg(TAG,"Excpetion handled when trying to sort using bubble sort",e);
            }
        }
        #endregion

        #region SELECTION SORT
        public static void SelectionSort()
        {
            try
            {
                Console.Clear();
                Console.WriteLine("Selected selection sort.");
                int[] numbersToBeSorted = Common.Utils.Sort();
                int biggestNum;

                for (int i = 0; i < numbersToBeSorted.Length; i++)
                {
                    biggestNum = i;
                    Console.WriteLine("Array length: " + numbersToBeSorted.Length);
                    Console.WriteLine("Iterating loop number: " + i);
                    for (int j = 0; j < numbersToBeSorted.Length ; j++)
                    {
                        Console.WriteLine("Comparing " + numbersToBeSorted[j] + " with " + numbersToBeSorted[biggestNum]);
                        if (numbersToBeSorted[biggestNum]<numbersToBeSorted[j]  )
                        {
                            
                            biggestNum = j;
                            Console.WriteLine("New max is " + numbersToBeSorted[j]);
                        }
                        int temp = numbersToBeSorted[i];
                        numbersToBeSorted[i] = numbersToBeSorted[biggestNum];
                        numbersToBeSorted[biggestNum] = temp;
                        Common.Utils.PrintIntArray(numbersToBeSorted);
                    }
                }
                Console.WriteLine("Numbers after sorting with selection sort");
                Common.Utils.PrintIntArray(numbersToBeSorted);


            }
            catch (Exception e)
            {
                Common.Utils.ExceptionHandleMsg(TAG, "Excpetion handled when trying to sort using selection sort" , e);
            }
        }
        #endregion

        #region INSERTION SORT
        public static void InsertionSort()
        {
            try
            {
                Console.Clear();
                Console.WriteLine("Selected insertion sort.");
                int[] numbersToBeSorted = Common.Utils.Sort();

                int N = numbersToBeSorted.Length;
                for (int i = 1; i < N; i++)
                {
                    int value= numbersToBeSorted[i];
                    int holePos = i-1;
                    //int j = i - 1;
                    while ((holePos >= 0) && (numbersToBeSorted[holePos] > value))
                    {
                        numbersToBeSorted[holePos + 1] = numbersToBeSorted[holePos];
                        holePos--;
                    }
                    numbersToBeSorted[holePos + 1] = value;
                    Common.Utils.PrintIntArray(numbersToBeSorted);
                }

                Console.WriteLine("Numbers after sorting with insertion sort");
                Common.Utils.PrintIntArray(numbersToBeSorted);


                //for (int i = 1; i < N; i++)
                //{
                //    int j = i - 1;
                //    int temp = numbersToBeSorted[i];

                //    while (j >= 0 && temp < numbersToBeSorted[j])
                //    {
                //        numbersToBeSorted[j + 1] = numbersToBeSorted[j];
                //        j--; ;
                //    }

                //    numbersToBeSorted[j + 1] = temp;
                //    Console.Write("After pass " + i + "  : ");
                //    //Printing array after pass
                //    Console.WriteLine(String.Join(" ", numbersToBeSorted));
                //}
            }

            
            catch (Exception e)
            {
                Common.Utils.ExceptionHandleMsg(TAG, "Excpetion handled when trying to sort using insertion sort" , e);
            }
        }
        #endregion

        #region MERGE SORT
        public static void MergeSort()
        {
            try
            {
                Console.Clear();
                Console.WriteLine("Selected merge sort.");


                //    if (mid <= totalLength) { j++; mid++; }
                //}
                int[] numbersToBeSorted = Common.Utils.Sort();
                spiltUnsortedNumbers(numbersToBeSorted);


                //Console.WriteLine("Numbers after sorting with merge sort");
                // Common.Utils.PrintIntArray(numbersToBeSorted);
                // Common.Utils.PrintIntArray(rightSorted);

            }
            catch (Exception e)
            {
                Common.Utils.ExceptionHandleMsg(TAG, "Excpetion handled when trying to sort using merge sort", e);
            }
        }


        public static void mergeSortedHalves(int[] leftSorted, int[] rightSorted, int[] numbersToBeSorted)
        {
            try
            {
                //int[] leftSorted = Common.Utils.Sort();
                //int[] rightSorted = Common.Utils.Sort();
                //int[] numbersToBeSorted = new int[leftSorted.Length + rightSorted.Length];

                int i = 0, j = 0, k = 0;//indexes

                while (i < leftSorted.Length && j < rightSorted.Length)
                {
                    if (leftSorted[i] <= rightSorted[j])
                    {
                        numbersToBeSorted[k] = leftSorted[i];
                        i++;
                    }
                    else
                    {
                        numbersToBeSorted[k] = rightSorted[j];
                        j++;
                    }
                    k++;

                }

                while (i < leftSorted.Length)
                {
                    numbersToBeSorted[k] = leftSorted[i];
                    i++; k++;
                }

                while (j < rightSorted.Length)
                {
                    numbersToBeSorted[k] = rightSorted[j];
                    j++; k++;
                }

                Console.WriteLine("Numbers after sorting with merge sort");
                Common.Utils.PrintIntArray(numbersToBeSorted);
            }
            catch (Exception e)
            {
                Common.Utils.ExceptionHandleMsg(TAG, "Excpetion handled when trying to join two sorted halves using merge sort", e);
            }
        }

        public static void spiltUnsortedNumbers(int[] numbersToBeSorted)
        {

            try {
                
                int totalLength = numbersToBeSorted.Length;

                int leftHalfLength = totalLength / 2;
                int rightHalfLength = totalLength - leftHalfLength;
                if (totalLength < 2) return;
                int[] leftUnsorted = new int[leftHalfLength];
                int[] rightUnsorted = new int[rightHalfLength];

                int mid = totalLength / 2;// - leftHalfLength;
                int i = 0, k;

                if (totalLength % 2 == 0)
                {
                    k = totalLength - leftHalfLength;
                }
                else k = totalLength - leftHalfLength - 1;

                while (i < leftHalfLength)
                {
                    leftUnsorted[i] = numbersToBeSorted[i];
                    i++;
                }
                // Common.Utils.PrintIntArray(leftUnsorted);

                int j = 0;
                while (j < rightHalfLength)
                {
                    rightUnsorted[j] = numbersToBeSorted[k];
                    j++; k++;
                }
                // Common.Utils.PrintIntArray(rightUnsorted);
                spiltUnsortedNumbers(leftUnsorted);
                spiltUnsortedNumbers(rightUnsorted);
                mergeSortedHalves(leftUnsorted, rightUnsorted, numbersToBeSorted);
            }
            catch (Exception e)
            {
                Common.Utils.ExceptionHandleMsg(TAG, "Excpetion handled when trying to spilt the havles and sort using merge sort", e);
            }
        }
        #endregion
        #region QUICK SORT
        public static void QuickSort()
        {
            try
            {
                Console.Clear();    
                Console.WriteLine("Selected quick sort.");
                int[] numbersToBeSorted = Common.Utils.Sort();

                int start = 0;
                int end = numbersToBeSorted.Length-1;
                QuickSortRecursion(numbersToBeSorted,start,end);

                Console.WriteLine("Numbers after sorting with quick sort");
                Common.Utils.PrintIntArray(numbersToBeSorted);


            }
            catch (Exception e)
            {
                Common.Utils.ExceptionHandleMsg(TAG, "Excpetion handled when trying to sort using quick sort", e);
            }
        }

        public static void QuickSortRecursion(int[] numbersToBeSorted,int start, int end)
        {
            try
            {
               //if (start >= end) return;
                if(start < end)
                {
                    int pIndex = QuickSortPartition(numbersToBeSorted, start, end);
                    QuickSortRecursion(numbersToBeSorted, start, pIndex - 1);
                    QuickSortRecursion(numbersToBeSorted, pIndex + 1, end);
                    //Console.Clear();
                    //Console.WriteLine("Selected quick sort.");
                    //int[] numbersToBeSorted = Common.Utils.Sort();

                }
                //Console.WriteLine("Numbers after sorting with quick sort");
                //Common.Utils.PrintIntArray(numbersToBeSorted);
                //return numbersToBeSorted;

            }
            catch (Exception e)
            {
                Common.Utils.ExceptionHandleMsg(TAG, "Excpetion handled when trying to sort using quick sort", e);
               // return null;
            }
        }

        public static int QuickSortPartition(int[] numbersToBeSorted, int start, int end)
        {
            try
            {
                int pivot= numbersToBeSorted[end];
                int pIndex = start-1;

                for (int i= start;i<end;i++)
                {
                    if (numbersToBeSorted[i] <= pivot)
                    {
                        pIndex++;
                        int temp = numbersToBeSorted[pIndex];
                        numbersToBeSorted[pIndex] = numbersToBeSorted[i];
                        numbersToBeSorted[i] = temp;

                    }

                    int temp1 = numbersToBeSorted[pIndex];
                    numbersToBeSorted[pIndex] = numbersToBeSorted[end];
                    numbersToBeSorted[end] = temp1;

                }
                return pIndex+1;
                //Console.Clear();
                //Console.WriteLine("Selected quick sort.");
                //int[] numbersToBeSorted = Common.Utils.Sort();


                //Console.WriteLine("Numbers after sorting with quick sort");
                //Common.Utils.PrintIntArray(numbersToBeSorted);


            }
            catch (Exception e)
            {
                Common.Utils.ExceptionHandleMsg(TAG, "Excpetion handled when trying to partiyion in quick sort", e);
                return -1;
            }
        }

        public static void Swap(int a,int b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        #endregion
        #region HEAP SORT
        public static void HeapSort()
        {
            try
            {
                Console.Clear();
                Console.WriteLine("Selected heap sort.");
                int[] numbersToBeSorted = Common.Utils.Sort();


                Console.WriteLine("Numbers after sorting with heap sort");
                Common.Utils.PrintIntArray(numbersToBeSorted);


            }
            catch (Exception e)
            {
                Common.Utils.ExceptionHandleMsg(TAG, "Excpetion handled when trying to sort using heap sort", e);
            }
        }
        #endregion
        
    }
}
