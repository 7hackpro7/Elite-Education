using System;
using static System.Runtime.InteropServices.ImportedFromTypeLibAttribute;
using static System.Runtime.InteropServices.PrimaryInteropAssemblyAttribute;

namespace GAME
{
	class BOT
	{
		private int rand;
		public int Random()
		{
			Random rnd = new Random();
			rand = rnd.Next(1, 4);
			return rand;
		}
	}
}
