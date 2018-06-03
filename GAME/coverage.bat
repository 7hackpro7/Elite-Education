.\packages\OpenCover.4.6.519\tools\OpenCover.Console.exe -register:user "-filter:+[GAME*]*" "-target:.\packages\NUnit.ConsoleRunner.3.8.0\tools\nunit3-console.exe" "-targetargs:.\GAME.Tests\bin\Debug\GAME.Tests.dll"

.\packages\ReportGenerator.3.1.2\tools\ReportGenerator.exe "-reports:results.xml" "-targetdir:.\coverage"

pause