using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ObjectOrientedProgrammingCodes_CSharp.src
{
    class MagicNumbers
    {
        //Submit a working solution and we'll e-mail you within 24 hours to setup an interview. Correctness matters more than speed. 
        //Run tests as often as you'd like to get to a correct solution.
        //Write a function that takes a magic number and a list of numbers. 
        //It returns true if it can insert add or subtract operations in the list of numbers to get the magic number.Otherwise, it returns false.

        //For example:
        //f(10, [1,2]) = false. There's no way to add or subtract 1 and 2 to get 10.
        //f(2, [1,2,3,4]) = true. 1 + 2 + 3 - 4 = 2.
        //f(0, []) = true
        //f(1, []) = false
        //f(1, [1]) = true
        //f(0, [1]) = false

        //1 1+2+3-5 





        public static bool isMagicNumber(int MagicNum, int[] numbers)
        {

            try
            {
                //Console.WriteLine(String.Join("; ", numbers));
              //  isMagicNumber(MagicNum, numbers, 0, 0);
                //int numbers
                return isMagicNumber(MagicNum, numbers, 0, 0);
            }
            catch (Exception ex)
            {
                Console.WriteLine("Exception: " + ex.Message + " " + ex.Source + " " + ex.StackTrace);
                return false;
            }
        }

        public static bool isMagicNumber(int MagicNum, int[] numbers, int index, int tmp)
        {
            try
            {
               // Console.WriteLine(String.Join("; ", numbers));
                if (numbers.Length > index)
                    return isMagicNumber(MagicNum, numbers, index+1, tmp + numbers[index]) || isMagicNumber(MagicNum, numbers, index+1, tmp - numbers[index]);

                if (MagicNum.Equals(tmp))
                {
                    return true;
                }
                return false;
            }
            catch (Exception ex)
            {
                Console.WriteLine("Exception: " + ex.Message + " " + ex.Source + " " + ex.StackTrace);
                return false;
            }
        }
    }
}
