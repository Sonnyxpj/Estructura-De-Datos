//Escribe un programa que permita al usuario ingresar un número entero positivo y luego calcule la cantidad de números pares e impares 
//en el rango desde 1 hasta el número ingresado. El programa debe mostrar por pantalla la cantidad de números pares e impares encontrados.
//Nota: Debes aplicar el enfoque estructurado para resolver este ejercicio

using System;

namespace ej3{

    class Program{

        static void Main(string[] args){

            int num = 0, pares = 0, impares = 0;

            Console.Write("Ingrese un número: ");
            num = Convert.ToInt32(Console.ReadLine());


            for (int i = 1; i <= num; i++){
                if (i % 2 == 0){
                    pares++;
                }else{
                    impares++;
                }
            }
            
            Console.WriteLine($"La cantidad de números pares son: {pares}");
            Console.WriteLine($"La cantidad de números impares son: {impares}");
        }
    }
}