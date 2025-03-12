using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Datastrutures_Algorithms_CSharp.Sorting
{
    class SortingMain
    {
        private static readonly string TAG = "SortingMain: ";
        static void Main(string[] args)
        {
            try
            {
                int sortNum = DisplayList();
                switch (sortNum)
                {
                    case 1:                       
                        SortingAlogrithms.bubbleSort();
                        break;
                    case 2:
                        SortingAlogrithms.SelectionSort();
                        break;
                    case 3:
                        SortingAlogrithms.InsertionSort();
                        break;
                    case 4:
                        SortingAlogrithms.MergeSort();
                        break;
                    case 5:
                        SortingAlogrithms.QuickSort();
                        break;
                    default:
                        Console.Clear();
                        Console.WriteLine("Please select the number within range");
                        Main(null);
                        break;
                }
            }
            catch (Exception e)
            {
                Common.Utils.ExceptionHandleMsg(TAG, "Exception occured in Mainfunction", e);
            }
            Console.ReadLine();
        }

        static int DisplayList()
        {
            try
            {
                Console.WriteLine("Please select the type of sorting algorithm by entering the corresponding number:");
                Console.WriteLine("1.Bubble sort");
                Console.WriteLine("2.Selection sort");
                Console.WriteLine("3.Insertion sort");
                Console.WriteLine("4.Merge sort");
                Console.WriteLine("5.Quick sort");
                string num = Console.ReadLine();
                int num1;
                Int32.TryParse(num, out num1);
                Console.WriteLine("Entered value :" + num);

                return num1; 
            }
            catch (Exception e)
            {
                Common.Utils.ExceptionHandleMsg(TAG,"Exception occured displaying the list" , e);
                return -1;
            }
        }

    }
}
