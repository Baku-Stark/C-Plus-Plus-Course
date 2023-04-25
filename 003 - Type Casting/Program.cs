using System;

namespace MyFirstProgram{
    class Program{
        static void Main(string[] args){
            double a = 3.14;
            int b = Convert.ToInt32(a); //convertendo número double para inteiro.

            Console.WriteLine(b);
            Console.WriteLine(b.GetType());

            int c = 123;
            double d = Convert.ToDouble(c); //convertendo número inteiro para double.

            Console.WriteLine(d);
            Console.WriteLine(d.GetType());

            int f = 1234;
            string g = Convert.ToString(f); //convertendo número inteiro para string.

            Console.WriteLine(g);
            Console.WriteLine(g.GetType());

            string h = "$";
            char i = Convert.ToChar(h); //convertendo string para caracetere especial.

            Console.WriteLine(i);
            Console.WriteLine(i.GetType());

            string j = "false";
            bool k = Convert.ToBoolean(j); //convertendo string para caracetere especial.

            Console.WriteLine(k);
            Console.WriteLine(k.GetType());
        }
    }
}