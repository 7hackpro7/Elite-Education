using System;

namespace GAME
{
	class GAME
	{
		private int numberyou, numberbot;
		private string[] str = new string[2];
		string restart = "Д";
		public void Play()
		{
			TEXT text = new TEXT();
			BOT bot = new BOT();
			while (restart == "Д" || restart == "д")
			{
				numberyou = 0;
				while (numberyou < 1 || numberyou > 3)
				{
					Console.Clear();
					text.Hod();
					numberyou = int.Parse(Console.ReadLine());
				}
				numberbot = bot.Random();
				str[0] = text.ViborYou(numberyou);
				str[0] = text.ViborBot(numberbot);
				Console.WriteLine(str[0]);
				Console.WriteLine(str[1]);
				Console.ReadKey();
				Console.WriteLine("Вы выбрали " + str[0]);
				Console.WriteLine("Бот выбрал " + str[1]);
				Console.WriteLine(text.Ishod(numberyou, numberbot));
				restart = text.Restart();
			}
		}
	}
}
