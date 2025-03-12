using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Datastrutures_Algorithms_CSharp.Common
{
    class Utils
    {
        private static readonly string TAG = "Utils: ";
        public static void ExceptionHandleMsg(String TAGSent, String ErrorMessage, Exception exception)
        {
            try
            {
                Console.WriteLine(TAGSent + "\n"+ErrorMessage);
                Console.WriteLine("Exception message: " + exception.Message);
                Console.WriteLine("Exception Source: " + exception.Message);
                Console.WriteLine("Exception StackTrace: " + exception.StackTrace);
            }
            catch (Exception ex)
            {
                Console.WriteLine(TAG + "\nException handling :" + ErrorMessage + " " + exception.Message);
                Console.WriteLine(TAGSent + "Exception message: " + ex.Message);
                Console.WriteLine("Exception Source: " + ex.Message);
                Console.WriteLine("Exception StackTrace: " + ex.StackTrace);
            }
        }

        public static int[] Sort()
        {
            try
            {
               
                Console.WriteLine("Please enter the total number of numbers to be sorted.");

                string num = Console.ReadLine();
                int totalNumber; ;
                Int32.TryParse(num, out totalNumber);
                Console.WriteLine("Please enter those " + totalNumber + " numbers followed by comma (,) :");

                String numbers = Console.ReadLine();
                String[] numberStringArray = numbers.Split(',');
                int[] numArray = new int[numberStringArray.Length];
                int i = 0;
                Console.WriteLine("Numbers to be sorted are: ");
                while (i < numberStringArray.Length)
                {
                    //Console.WriteLine(numberStringArray[i]+" ");
                    Int32.TryParse(numberStringArray[i], out numArray[i]);
                    Console.Write(numArray[i] + " ");
                    i++;
                }
                if (numArray.Length != totalNumber)
                {
                    Console.Clear();
                    Console.WriteLine("Please enter " + totalNumber + " numbers. You have entered only "+numArray.Length);

                    //Sort();
                }
                Console.WriteLine();

                return numArray;

            }
            catch (Exception e)
            {
                ExceptionHandleMsg(TAG, "Exception sorting ", e);
                return null;
                //SortingMain sortingMain = new SortingMain();
                //sortingMain.
            }
        }

        public static void PrintIntArray(int[] IntArray)
        {
            try
            {
                int k=0;
                while (k < IntArray.Length)
                {
                    Console.Write(IntArray[k] + " ");
                    k++;
                }
                Console.WriteLine();
            }
            catch (Exception e) {
                ExceptionHandleMsg(TAG , "Exception handled trying to print int array", e);
            }
        }



    }
}
