using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Modul3
{
    public class MyPalindromic
    {
        public string text { get; set; }
        public MyPalindromic() { }
        public MyPalindromic(string Text) {text = Text;}
        ~ MyPalindromic() { }
        public string CheckPalindromic()
        {
            string reversedText = new string(text.Reverse().ToArray());

            if (text == reversedText)
            {
                return $"{text} is palindromic";
            }
            else
            {
                return $"{text} is not palindromic";
            }            
        }
    }
}
