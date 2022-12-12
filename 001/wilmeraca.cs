using System;

public class suma
{
    
     static int sumas(int numeroUNo, int numeroDos)
    {
        int suma = 0;
        
        suma = numeroUNo  + numeroDos;
        
        return suma;
    }
    
    public static void Main(string[] args)
    {
        Console.WriteLine(sumas(8722,14788));
    }
           
}
