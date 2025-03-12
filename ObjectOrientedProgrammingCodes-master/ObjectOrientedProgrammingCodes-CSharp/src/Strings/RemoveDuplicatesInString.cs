using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ObjectOrientedProgrammingCodes_CSharp.Strings
{
    class RemoveDuplicatesInString
    {


        public static void removeDuplicates()
        {
            Console.WriteLine("Enter string to remove duplicates");
            string str1 = Console.ReadLine();

            //if (!str)
            //    return;
            int len = str1.Length;
            if (len < 2)
                return;

            string[] stringWords = str1.Split(null);

                for (int i = 0; i < stringWords.Length; i++)
            {
                Console.WriteLine("OUT i : str[" + i + "] : " + stringWords[i]);
                for(int j = 1; j < stringWords.Length; j++)
                {
                    Console.WriteLine("IN j: str[" + j+ "] : " + stringWords[j]);

                    if (stringWords[i] == stringWords[j])
                    {
                        //  StringBuilder sb = new StringBuilder(stringWords);
                        stringWords[j] = null;
                        //sb[j] = '\0';
                        //stringWords = sb.ToString();
                        //str[j] = null; 

                        //str= moveArrayLeft(str);
                        Console.Write("String removing some duplicates :" + stringWords);
                        break;
                        // str.TrimEnd(str[str.Length]);
                    }
                }
            }
           // str[tail] = '\0';
            Console.Write("String without duplicates :"+ stringWords);
        }

        public static string moveArrayLeftStr(string str)
        {
            // string str1 = str;
            StringBuilder sb = new StringBuilder(str);
           
            str = sb.ToString();
            int k = 0;
            for (k=0; k < str.Length - 1; k++)
            {
                sb[k] = sb[k + 1];
            }
            str = sb.ToString();

            return str;//str.TrimEnd(str[str.Length]);
        }
    }
}
