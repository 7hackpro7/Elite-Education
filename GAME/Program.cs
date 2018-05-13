
using static System.Runtime.InteropServices.ImportedFromTypeLibAttribute;
using static System.Runtime.InteropServices.PrimaryInteropAssemblyAttribute;
namespace GAME
{
	class Program
	{
		static void Main(string[] args)
		{
			GAME game = new GAME();
			game.Play();
		}
	}
}
