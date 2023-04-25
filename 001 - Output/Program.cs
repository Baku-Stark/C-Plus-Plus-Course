using System;

namespace MyFirstProgram{
    class Program{
        static void Main(string[] args){
            Console.WriteLine("Qual o seu nome?");
            string name = Convert.ToString(Console.ReadLine());

            Console.WriteLine();

            Console.WriteLine("Qual a sua idade?");
            int age = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine();

            Console.WriteLine("SEJA BEM-VINDO AO C#, " + name + "!!!");
            Console.WriteLine("USUÁRIO: " + name);
            Console.WriteLine("IDADE DO USUÁRIO: " + age);
        }
    }
}