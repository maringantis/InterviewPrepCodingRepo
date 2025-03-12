#region Description and question exlpanation

//Alice is taking a cryptography class and finding anagrams to be very useful.We consider two strings to be anagrams of each other if the first string's letters can be rearranged to form the second string. In other words, both strings must contain the same exact letters in the same exact frequency For example, bacdc and dcbac are anagrams, but bacdc and dcbad are not.

//Alice decides on an encryption scheme involving two large strings where encryption is dependent on the minimum number of character deletions required to make the two strings anagrams.Can you help her find this number?

//Given two strings, and , that may or may not be of the same length, determine the minimum number of character deletions required to make and anagrams. Any characters can be deleted from either of the strings.

//For example, if and , we can delete from string and from string so that both remaining strings are and which are anagrams.

//Function Description

//Complete the makeAnagram function in the editor below.It must return an integer representing the minimum total characters that must be deleted to make the strings anagrams.

//makeAnagram has the following parameter(s):

//    a: a string
//    b: a string

//Input Format

//The first line contains a single string, .
//The second line contains a single string, .

//Constraints

//    The strings and consist of lowercase English alphabetic letters ascii[a - z].

//Output Format

//Print a single integer denoting the number of characters you must delete to make the two strings anagrams of each other.

//Sample Input

//cde
//abc

//Sample Output

//4

//Explanation

//We delete the following characters from our two strings to turn them into anagrams of each other:

//    Remove d and e from cde to get c.
//    Remove a and b from abc to get c.

//We must delete characters to make both strings anagrams, so we print on a new line.
#endregion


using System;
using System.IO;

namespace ObjectOrientedProgrammingCodes_CSharp.src.Strings
{
    class LeastCharactersToMakeAnagram
    {

        // Complete the makeAnagram function below.
        static int makeAnagram(string a, string b)
        {
            //         int minRemove =0;
            //         bool isFlag = false;
            //         for(int i=0;i<a.Length;i++)
            //         {
            //             isFlag=false;
            //             for(int j=0;j<b.Length;j++)
            //             {
            //                 if(a[i]==b[j])
            //                 {
            //                     isFlag= true;
            //                     break;
            //                 }
            //             }
            //             if(isFlag)
            //             {
            //                 minRemove++;
            //             }


            //         }

            //         return (a.Length +b.Length) - (minRemove*2);

            int[] lettercounts = new int[26];
            foreach (char c in a.ToCharArray())
            {
                Console.WriteLine("String A:  c: " + c);
                //lettercounts[c-'a']++;
                Console.WriteLine("String A:  c: " + lettercounts[c - 'a']++);
            }
            foreach (char c in b.ToCharArray())
            {
                lettercounts[c - 'a']--;
            }
            int result = 0;
            foreach (int i in lettercounts)
            {
                result += Math.Abs(i);//MMath.abs(i);
            }
            return result;

        }

        static void Main(string[] args)
        {
            TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

            string a = Console.ReadLine();

            string b = Console.ReadLine();

            int res = makeAnagram(a, b);

            textWriter.WriteLine(res);

            textWriter.Flush();
            textWriter.Close();
        }
    }
}


