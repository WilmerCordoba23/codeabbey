using System;

public class resta
{
    
     static int restas(int numeroUNo, int numeroDos)
    {
        int resta = 0;
        
        resta = numeroUNo  - numeroDos;
        
        return resta;
    }
    
    public static void Main(string[] args)
    {
        Console.WriteLine(restas(8722,14788));
    }
           
}
