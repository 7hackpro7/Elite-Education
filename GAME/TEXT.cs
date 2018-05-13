using System;
using static System.Runtime.InteropServices.ImportedFromTypeLibAttribute;
using static System.Runtime.InteropServices.PrimaryInteropAssemblyAttribute;

namespace GAME
{
	public class TEXT
	{
		private string kamen = "Камень";
		private string nosnici = "Ножницы";


		private string bumaga = "Бумага";
		private string[] str = new String[2];
		public void Hod()
		{
			Console.Clear();
			Console.WriteLine("1. Камень");
			Console.WriteLine("2. Ножницы");
			Console.WriteLine("3. Бумага");
			Console.Write("Выберите цифру: ");
		}
		public string[] Vibor(int num1, int num2)
		{
			Console.Clear();
			if (num1 == 1) str[0] = kamen;
			if (num1 == 2) str[0] = nosnici;
			if (num1 == 3) str[0] = bumaga;
			if (num2 == 1) str[1] = kamen;
			if (num2 == 2) str[1] = nosnici;
			if (num2 == 3) str[1] = bumaga;
			return str;
		}
		public string Ishod(int num1, int num2)
		{
			if ((num1 == 1 && num2 == 1) || (num1 == 2 && num2 == 2) || (num1 == 3 && num2 == 3))
				return "Ничья";
			else if ((num1 == 3 && num2 == 2) || (num1 == 1 && num2 == 3) || (num1 == 2 && num2 == 1))
				return "Вы проиграли";
			else
				return "Вы выиграли";
		}
		public string Restart()
		{
			string rest;
			Console.WriteLine(""); Console.WriteLine(""); Console.WriteLine("");
			Console.WriteLine("Хотите сыграть еще раз? Д/Н");
			rest = (Console.ReadLine());
			return rest;
		}
	}
}
