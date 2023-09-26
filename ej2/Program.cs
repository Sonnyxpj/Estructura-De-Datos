//Implementa un programa que permita al usuario ingresar un número entero positivo y luego calcule la suma de todos los 
//números primos en el rango desde 2 hasta el número ingresado. El programa debe mostrar por pantalla la suma de los números primos.
//Nota 1: Debes aplicar el enfoque procedimental para resolver este ejercicio.
//Nota 2: Se permite reutilizar el código realizado en clases para el cálculo de números primos.

using System;

namespace ej2
{

    class Program
    {

        static void Main(string[] args)
        {
            int num, resultado;

            Console.Write("Ingrese un número: ");
            num = Convert.ToInt32(Console.ReadLine());

            resultado = sumaPrimos(num);

            Console.WriteLine($"La suma de todos los números primos esta el número {num} es: {resultado}");
        }

        static int sumaPrimos(int num){
            int resultado = 0;

            for (int i = 2; i <= num; i++){
                if(esPrimo(i) == true){
                    resultado = resultado + i;
                }
            }
            return resultado;
        }

        static bool esPrimo(int num)
        {

            if (num <= 1)
            {

                return false;
            }
            for (int i = 2; i * i <= num; i++)
            {
                if ((num % i) == 0)
                {
                    return false;
                }
            }
            return true;
        }
    }
}
