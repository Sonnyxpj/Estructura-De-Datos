//Crea un programa que solicite al usuario dos números enteros, representando el inicio y el fin de un rango, y seguidamente calcule la suma de todos 
//los números dentro de ese rango (incluyendo los extremos). El programa debe mostrar el resultado de la suma por pantalla.
//Nota: Puedes aplicar el enfoque estructurado o procedimental para resolver este ejercicio.

using System;

namespace ej1{

    class Program{
        static void Main(string[] args){
            int inicio, final;

            Console.Write("Ingrese el valor inicial: ");
            inicio = Convert.ToInt32(Console.ReadLine());

            Console.Write("Ingrese el valor final: ");
            final = Convert.ToInt32(Console.ReadLine());
            ;
            suma_rango(inicio, final);

        }
        static void suma_rango(int inicio, int final){
            int resultado = 0;
            for (int i = inicio; i <= final; i++){

                resultado = resultado + i;
            }
            
            Console.WriteLine($"El resultado de la suma entre el intervalo [{inicio} - {final}] es: {resultado}");
        }
    }
}