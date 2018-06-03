using Microsoft.VisualStudio.TestTools.UnitTesting;


namespace GAME.Tests
{
	[TestClass]
	public class UnitTest1
	{
		[TestMethod]
		public void Input1()
		{
			string[] str = new string[2];
			str[0] = "Камень";
			str[1] = "Бумага";
			TEXT text = new TEXT();
			Assert.AreEqual(text.ViborYou(1), str[0]);
			Assert.AreEqual(text.ViborYou(3), str[1]);
		}
		[TestMethod]
		public void Input2()
		{
			string[] str = new string[2];
			str[0] = "Камень";
			str[1] = "Ножницы";
			TEXT text = new TEXT();
			Assert.AreEqual(text.ViborYou(1), str[0]);
			Assert.AreEqual(text.ViborYou(2), str[1]);
		}
		[TestMethod]
		public void Input3()
		{
			string[] str = new string[2];
			str[0] = "Ножницы";
			str[1] = "Бумага";
			TEXT text = new TEXT();
			Assert.AreEqual(text.ViborYou(2), str[0]);
			Assert.AreEqual(text.ViborYou(3), str[1]);
		}
		[TestMethod]
		public void Input4()
		{
			string[] str = new string[2];
			str[0] = "Камень";
			str[1] = "Камень";
			TEXT text = new TEXT();
			Assert.AreEqual(text.ViborYou(1), str[0]);
			Assert.AreEqual(text.ViborYou(1), str[1]);
		}
		[TestMethod]
		public void Result1()
		{
			string str = "Ничья";
			TEXT text = new TEXT();
			Assert.AreEqual(text.Ishod(1, 1), str);
		}
		[TestMethod]
		public void Result2()
		{
			string str = "Ничья";
			TEXT text = new TEXT();
			Assert.AreEqual(text.Ishod(2, 2), str);
		}
		[TestMethod]
		public void Result3()
		{
			string str = "Ничья";
			TEXT text = new TEXT();
			Assert.AreEqual(text.Ishod(3, 3), str);
		}
		[TestMethod]
		public void Result4()
		{
			string str = "Вы проиграли";
			TEXT text = new TEXT();
			Assert.AreEqual(text.Ishod(1, 3), str);
		}
		[TestMethod]
		public void Result5()
		{
			string str = "Вы выиграли";
			TEXT text = new TEXT();
			Assert.AreEqual(text.Ishod(1, 2), str);
		}

	}
}
