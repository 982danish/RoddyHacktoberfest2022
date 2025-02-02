// C# Program to print all prime factors
using System;

namespace prime
{
public class GFG
{	
				
	public static void primeFactors(int n)
	{
		while (n % 2 == 0)
		{
			Console.Write(2 + " ");
			n /= 2;
		}

		for (int i = 3; i <= Math.Sqrt(n); i+= 2)
		{
			while (n % i == 0)
			{
				Console.Write(i + " ");
				n /= i;
			}
		}

		if (n > 2)
			Console.Write(n);
	}
	
	public static void Main()
	{
		int n = 315;
		primeFactors(n);
	}

}
}

