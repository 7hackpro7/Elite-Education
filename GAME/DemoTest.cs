using NUnit.Framework;

namespace GAME
{
	[TestFixture]
	class DemoTest
	{
		[Test]
		public void Input1()
		{
			string[] str = new string[2];
			str[0] = "Камень";
			str[1] = "Бумага";
			TEXT text = new TEXT();
			Assert.AreEqual(text.Vibor(1, 3), str);
		}
		[Test]
		public void Input2()
		{
			string[] str = new string[2];
			str[0] = "Камень";
			str[1] = "Ножницы";
			TEXT text = new TEXT();
			Assert.AreEqual(text.Vibor(1, 2), str);
		}
		[Test]
		public void Input3()
		{
			string[] str = new string[2];
			str[0] = "Ножницы";
			str[1] = "Бумага";
			TEXT text = new TEXT();
			Assert.AreEqual(text.Vibor(2, 3), str);
		}
		[Test]
		public void Input4()
		{
			string[] str = new string[2];
			str[0] = "Камень";
			str[1] = "Камень";
			TEXT text = new TEXT();
			Assert.AreEqual(text.Vibor(1,1), str);
		}
		[Test]
		public void Result1()
		{
			string str = "Ничья";
			TEXT text = new TEXT();
			Assert.AreEqual(text.Ishod(1, 1), str);
		}
		[Test]
		public void Result2()
		{
			string str = "Ничья";
			TEXT text = new TEXT();
			Assert.AreEqual(text.Ishod(2, 2), str);
		}
		[Test]
		public void Result3()
		{
			string str = "Ничья";
			TEXT text = new TEXT();
			Assert.AreEqual(text.Ishod(3, 3), str);
		}
		[Test]
		public void Result4()
		{
			string str = "Вы проиграли";
			TEXT text = new TEXT();
			Assert.AreEqual(text.Ishod(1, 3), str);
		}
		[Test]
		public void Result5()
		{
			string str = "Вы выиграли";
			TEXT text = new TEXT();
			Assert.AreEqual(text.Ishod(1, 2), str);
		}

	}
}
