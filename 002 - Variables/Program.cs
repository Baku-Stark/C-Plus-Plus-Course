using System;

namespace MyFirstProgram{
    class Program{
        static void Main(string[] args){
            Console.WriteLine("Hello, World!");
            Console.WriteLine("I like pizza!!!");


            // ================== VARIABLES
            int x;
            x = 10;

            int y = 5;

            int z = x + y;

            Console.WriteLine(x);
            Console.WriteLine(y);
            Console.WriteLine(z);

            int age = 21; // integer number
            double height = 300.5; // decimal number
            bool alive = true; // boolean(true or false)
            char symbol = '@';
            string name = "Wallace";
            double pi = 3.14159;

            Console.WriteLine("A sua idade é: " + age);
            Console.WriteLine("Your height is: " + height + "cm");
            Console.WriteLine("Are you alive? " + alive);
            Console.WriteLine("Your symbol is: " + symbol);
            Console.WriteLine("Your name is: " + name);
            Console.WriteLine("Pi number is: " + pi);

            string username = symbol + name;

            Console.WriteLine("Your  username is: " + username);
            // ================== END OF VARIABLES

            Console.ReadKey();
        }
    }
}