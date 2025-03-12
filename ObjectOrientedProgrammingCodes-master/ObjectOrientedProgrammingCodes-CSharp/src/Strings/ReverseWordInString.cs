using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace ObjectOrientedProgrammingCodes_CSharp.Strings
{
    //Reverse words in a string (words are separated by one or more spaces). Now do it in-place. By far the most popular string question! 
    class ReverseWordInString
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter string to be reversed with string:");

            string[] ArrayWords = new string[] { };
            int i = 0;
            string str= Console.ReadLine();
            ArrayWords=str.Split(null);
            Console.WriteLine("Revesered strings: ");
            while (i < ArrayWords.Length)
            {
                Console.Write(reverseString(ArrayWords[i]) +" ");
                i++;
            }

            Thread.Sleep(5000);
           
        }
        public static string reverseString(string stringToBeReversed)
        {
            
            string tempMod = stringToBeReversed;
            string temp="";
            
            int j = stringToBeReversed.Length - 1;

            while (j>=0)
            {
                temp= temp + tempMod[j] ;
                j--;
            }
            

            return temp;
        }
    }
    
}
